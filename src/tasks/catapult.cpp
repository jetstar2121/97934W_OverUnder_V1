#include "vex.h"
using namespace vex;

void run_cata() {
    // wait(2000, msec);
    // catapult.spinFor(fwd, 100, deg, 100, rpm);
    catapult.spin(fwd, 25, rpm);
    waitUntil(cata_limit.PRESSED);
    catapult.stop(hold);
}

int catapult_task() {
    catapult.spin(fwd, 25, rpm);
    waitUntil(cata_limit.PRESSED);
    catapult.stop(hold);
    while (1) {
        if (Controller1.ButtonA.PRESSED) {
            run_cata();
        }
    }
    return 10;
}