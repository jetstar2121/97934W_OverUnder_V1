#include "vex.h"
using namespace vex;

// temporary boolean for testing
bool PTO_on = false;

//Cata Function
void fire_catapult() {
    PTO.spin(fwd, 600, rpm);
}

int PTO_task() {
    while (1) {
        if(Controller1.ButtonUp.pressing()) {
            PTO_on =! PTO_on;
            wait(300, msec);
        }
        if (PTO_on) {
            if(Controller1.ButtonA.pressing()) {
                fire_catapult();
            }
            else {
                PTO.stop(brake);
            }
        } 
        else {
            PTO_right.spin(fwd, (Controller1.Axis3.value() - Controller1.Axis4.value()), pct);
            PTO_left.spin(fwd, (Controller1.Axis3.value() + Controller1.Axis4.value()), pct);
        }
    }

    return 10;
}