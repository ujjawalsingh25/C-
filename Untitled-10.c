#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void newton_raphson_method(float a, float value);
float function(float value);
float function_derivative (float value);
int main()
{
    float allowed_error = 0.0, seed_value;
    printf("\nEnter  Seed Value:\t");
    scanf("%f", &seed_value);
    printf("\nEnter Allowed Error:\t");
    scanf("%f", &allowed_error);
    newton_raphson_method(seed_value,allowed_error ); 
    return 0;
}
void newton_raphson_method(float seed_value,float allowed_error)
{
    float value = seed_value;
    float h = - function(value) / function_derivative (value);
    for(;fabs(function(value))>=allowed_error;)
    {
        if (fabs(function_derivative(value))>0.000000001)
        h = - function(value) / function_derivative (value);
        value = value+h;

    }
    printf("The value of the root is : %f\n ",value);
    printf("The value of the function is : f(%f) = %f ",value,function(value));
}
float function(float value)
{
 return (value * value * value -  2);
}

float function_derivative (float value)
{
 return (3 * value * value );
}

    
    