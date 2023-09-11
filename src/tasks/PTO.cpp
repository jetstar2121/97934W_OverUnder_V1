#include "vex.h"
using namespace vex;

// temporary boolean for testing
bool PTO_status = false;

void PTO_toggle() {
    PTO_status = !PTO_status;
}
void PTO_toggle(bool status) {
    PTO_status = status;
}

// Cata Function
void fire_catapult() {
    PTO.spin(fwd, 600, rpm);
}

int PTO_task() {
    while (1) {
        if (Controller1.ButtonUp.pressing()) {
            PTO_toggle();
            wait(300, msec);
        }
        if (PTO_status) {
            if (Controller1.ButtonA.pressing()) {
                fire_catapult();
            } else {
                PTO.stop(brake);
            }
        } else {
            PTO_right.spin(fwd, to_volt(controller(primary).Axis3.value() + controller(primary).Axis4.value()), volt);
            PTO_left.spin(fwd, to_volt(controller(primary).Axis3.value() - controller(primary).Axis4.value()), volt);
        }
    }

    return 10;
}