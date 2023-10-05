#include "vex.h"
using namespace vex;

bool subsystem_switcher = true;

void cycle_cata() {
    catapult.spin(fwd, 25, rpm);
    waitUntil(cata_limit.PRESSED);
    catapult.stop(hold);
}
void cycle_cata(double speed) {
    catapult.spin(fwd, speed, rpm);
    waitUntil(cata_limit.PRESSED);
    catapult.stop(hold);
}

void toggle_subsystem_switcher() {
    subsystem_switcher = !subsystem_switcher;
    if (subsystem_switcher) {
        cycle_cata();
    }
}

int catapult_task() {
    Controller1.Screen.setCursor(0, 0);
    Controller1.Screen.clearScreen();
    cycle_cata();

    while (1) {
        if (Controller1.ButtonUp.PRESSED) {
            toggle_subsystem_switcher();
        }

        if (subsystem_switcher) {
            Controller1.Screen.clearScreen();
            Controller1.Screen.setCursor(0, 0);
            Controller1.Screen.print("Catapult Mode: Automatic");
            if (Controller1.ButtonX.PRESSED) {
                cycle_cata();
            }
        } else {
            Controller1.Screen.clearScreen();
            Controller1.Screen.setCursor(0, 0);
            Controller1.Screen.print("Catapult Mode: Manual");
            if (Controller1.ButtonL1.pressing()) {
                catapult.spin(fwd, 200, rpm);
            } else {
                catapult.stop(hold);
            }
        }
    }
    return 10;
}