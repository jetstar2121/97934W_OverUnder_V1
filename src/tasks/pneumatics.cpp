#include "vex.h"
using namespace vex;

bool right_wing_status = false;
bool left_wing_status = false;

void toggle_right_wing() {
    right_wing_status = !right_wing_status;
}
void toggle_left_wing() {
    left_wing_status = !left_wing_status;
}

int pneumatics_task() {
    
    while (1) {
        if (Controller1.ButtonA.PRESSED) {
            toggle_right_wing();
        }
        if (Controller1.ButtonY.PRESSED) {
            toggle_left_wing();
        }
        if (Controller1.ButtonB.PRESSED) {
            toggle_left_wing();
            toggle_right_wing();
        }

        if (right_wing_status) {
            right_wing.open();
        } else {
            right_wing.close();
        }

        if (left_wing_status) {
            left_wing.open();
        } else {
            left_wing.close();
        }   
    }
    return 10;
}