using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;

extern motor catapult;

extern distance Distance;

extern pneumatics PTO_piston;

extern inertial inertial1;

extern motor front_right;
extern motor back_right;
extern motor mid_right;

extern motor front_left;
extern motor back_left;
extern motor mid_left;

extern motor_group DT;
extern motor_group PTO;


extern motor intakes;

extern limit cata_limit;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);