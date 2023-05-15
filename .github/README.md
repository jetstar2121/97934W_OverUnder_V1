# JAR-Template
A simple and powerful VexCode library featuring PID, odometry, and custom motion algorithms. 

Google Forms link for feedback/suggestions: https://forms.gle/2m4VwJZByn6h2DB58

## Installation
1. Download the project by downloading the .zip file [here](https://github.com/2775Josh/JAR-Template/releases/latest).

2. Extract the zipped file (perhaps to a folder such as documents, or vexcode-projects).

3. Open the project in VexCode by choosing "Open" (not "Import") from the file menu and selecting the JAR-Template.v5code file.

4. First configure your robot using the graphical configurer, then follow the instructions in main.cpp to configure the template to your robot specs.

## Usage
1. To make a new auton function, you must both write the function in autons.cpp and a declaration of the function in autons.h. The example autons show how this can be done. 
2. In order to select autons from the Brain, you must add each to the pre_auton loop and the autonomous function, both in main.cpp. Again, the example autons show how to do this.
3. The PID gains are tuned to a six motor 360RPM drivetrain. You may wish to tune the PID gains to your robot. The gains are found in autons.cpp in the function default_constants(). Each set of constants is max voltage, then kP, then kI, then kD, then startI. StartI is the maximum error at which the I term begins to wind up. For turning,  this value is best set at 15 degrees.
4. You can use a multitude of functions to control your drivebase. Every function will be prefixed with "chassis." and followed by the function name. If you want to drive to the point (36,36), then call the method "chassis.drive_to_point(36, 36);".

Developed by Josh, from 2775V of Jackson Area Robotics. Big thanks to Javier, Mikey, Ryan, Leo, JerryLum, and Nick (QUEEN) from VTOW and JPearman from the Vex Forum, whose assistance made this project possible.

Thank you to Beta tester 9421R.
