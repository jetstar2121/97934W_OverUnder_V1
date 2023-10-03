#include "vex.h"
using namespace vex;

void cycle_cata() {
    catapult.spin(fwd, 25, rpm);
    waitUntil(cata_limit.PRESSED);
    catapult.stop(hold); 
}

int catapult_task() {
    cycle_cata();
    while (1) {
        if (Controller1.ButtonA.PRESSED) {
            cycle_cata();
        }
    }
    return 10;
}