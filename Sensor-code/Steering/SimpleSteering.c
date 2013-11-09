#include <math.h>
/*Just an estimate value*/
#define CAR_WIDTH 1.0
#define PI 3.14159

/* This function assumes turning left is a positive angle,
 * and turning right is a negative angle. The current angle
 * the car is facing is at 0 degrees.
 */
double calcSteeringAngle (double left, double right) {
   double difference = left - right;
   
   return atan(CAR_WIDTH/difference) * (180.0/PI); 
}