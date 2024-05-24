#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void newton_raphson_method(float a, float value);
float function(float value);
float function_derivative (float value);
void main( )
{
 float allowed_error = 0.0, seed_value;
 printf("\nEnter a Seed Value:\t");
 scanf("%f", &seed_value);
 printf("\nEnter Allowed Error:\t");
 scanf("%f", &allowed_error);
 newton_raphson_method(value, allowed_error);
}
void newton_raphson_method(float seed_value,
 float allowed_error)
{
 float value = seed_value;
 float h = -function(value) / function_derivative (value);
 for ( ;fabs(function(value)) >= allowed_error; )
 {
 if( fabs(function_derivative (value))>0.000000001)
 h = -function(value) / function_derivative (value);
 else
 {
 printf(“\n Newton-Raphson’s method fails.”);
 exit(0);
 } 
 
 value = value + h;
 }
 printf("\n Root Value: %f", value);
 printf("\n Functional Value: f(%f) = %f", value, function(value));
}
float function(float value)
{
 return (value * value * value - 2);
}
float function_derivative (float value)
{
 return (3 * value * value);
}
