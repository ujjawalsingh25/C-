#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void newton_raphson_method(float a, float value);
float function(float value);
float function_derivative (float value);
int main()
{
    float allowed_error = 0.0001, seed_value;
    printf("\nEnter Allowed Error:\t");
    scanf("%f", &allowed_error);
    printf("\nEnter  Seed Value:\t");
    scanf("%f", &seed_value);
    newton_raphson_method(allowed_error , seed_value); 
    return 0;
}
void newton_raphson_method(float a,float value)
{
    float h = - function(value) / function_derivative (value);
    while (h>=a)
    {
        h = - function(value) / function_derivative (value);
    }
    printf("The value of the root is : %f\n ",h);
}
float function(float value)
{
 return (value * value * value - value );
}

float function_derivative (float value)
{
 return (3 * value * value);
}

    
    