#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain Brain;

motor catapult(PORT8, ratio36_1);

// VEXcode device constructors - TEMPORARY PORTS
controller Controller1;

pneumatics PTO_piston(Brain.ThreeWirePort.A);

distance Distance(PORT10);

inertial inertial1(PORT15); 

motor front_right(PORT5, ratio18_1, false);
motor back_right(PORT7, ratio18_1);

motor mid_right(PORT6, ratio18_1);

motor front_left(PORT1, ratio18_1, false);
motor back_left(PORT4, ratio18_1);

motor mid_left(PORT3, ratio18_1);

motor_group DT(front_right, mid_left,  front_left, back_right, mid_right, back_left);


motor intakes(PORT9, ratio18_1, true);

limit cata_limit(Brain.ThreeWirePort.B);

// VEXcode generated functions

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
    // nothing to initialize
}