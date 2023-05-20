using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;

extern distance Distance;

extern inertial inertial1;

extern motor front_right;
extern motor mid_right;
extern motor back_right;

extern motor front_left;
extern motor mid_left;
extern motor back_left;


/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );