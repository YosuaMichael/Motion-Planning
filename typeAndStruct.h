#ifndef STRUCTS
#define STRUCTS

//TYPEDEF
typedef double dd;

//DEFINITION
#define _USE_MATH_DEFINES
#include<cmath>
#define RANDOM_SEED 12345
#define GUI_ENABLED 1
#define SOUND_ENABLED 1

//for car
#define CARLENGTH 3.0
#define CARWIDTH 1.6
#define Y_VISIBLE 100
#define WAIT_TO_HORN 1500
#define HORN_INTERVAL 500
#define HORN_HALT 5000
#define HORN_BUFFER 1.0
#define HORN_ENABLED 1

//for pedestrian
#define PEDESTRIAN_SIZE 5
#define NUMBER_OF_PEDESTRIANS 500
#define USE_ZEBRA_CROSS 1
/* NORMAL CHANCE THAT IS USED:
#define CHANCE_EXIT 0
#define CHANCE_SAME_PAVEMENT 35
#define CHANCE_CROSS 50
#define CHANCE_STOP 15
/**/

#define CHANCE_EXIT 0
#define CHANCE_SAME_PAVEMENT 0
#define CHANCE_CROSS 100
#define CHANCE_STOP 0


//for planner
#define MAX_V 25.0
#define MAX_DECEL 0.7e-1

//STRUCT
struct State {
	dd x;
	dd y;
	dd v;
	dd theta;
} ;

struct Control {
	dd h1;
	dd h2;
} ;

#endif
