#include "vex.h"
using namespace vex;

void cycle_cata() {
    catapult.spin(fwd, 25, rpm);
    waitUntil(cata_limit.PRESSED);
    catapult.stop(hold);
    wait(1000, msec);
}

int catapult_task() {
    //cycle_cata();
    while (1) {
        if(Controller1.ButtonL1.pressing()) {
            catapult.spin(fwd, 200, rpm);
        }
        else {
            catapult.stop(hold);
        }
    }
    return 10;
}