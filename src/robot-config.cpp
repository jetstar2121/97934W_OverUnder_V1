#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors - TEMPORARY PORTS
controller Controller1;

distance Distance(PORT7);

inertial inertial1(PORT7);

motor front_right(PORT1, ratio18_1);
motor mid_right(PORT2, ratio18_1);
motor back_right(PORT3, ratio18_1);

motor front_left(PORT4, ratio18_1);
motor mid_left(PORT5, ratio18_1);
motor back_left(PORT6, ratio18_1);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}