#include "vex.h" 
using namespace vex;

int intakes_task() {
    while (1) {
        if (Controller1.ButtonR2.pressing()) {
            intakes.spin(fwd, 600, rpm);
        } else if (Controller1.ButtonR1.pressing()) {
            intakes.spin(reverse, 600, rpm);
        } else {
            intakes.stop(brake);
        }
    }
    return 10;
}