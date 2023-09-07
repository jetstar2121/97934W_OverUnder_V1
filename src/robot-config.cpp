#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors - TEMPORARY PORTS
controller Controller1;

pneumatics PTO(Brain.ThreeWirePort.A);

distance Distance(PORT8);

inertial inertial1(PORT15);

motor front_right(PORT5, ratio18_1, false);
motor mid_right(PORT2, ratio18_1);
motor back_right(PORT8, ratio18_1);  

motor front_left(PORT7, ratio18_1, false);
motor mid_left(PORT5, ratio18_1);
motor back_left(PORT12, ratio18_1);

motor intakes(PORT9, ratio18_1, true);


// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}