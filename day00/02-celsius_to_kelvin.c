#include <stdio.h>

/*
  Write a program that asks for a temperature in Celsius and converts it to Kelvin.
  Formula: K = C + 273.15

*/

int main()
{
    float Kelvin;
    float Celsius;

    printf("temperature in Celsius: ");
    scanf("%f",&Celsius);

    Kelvin = Celsius + 273.15;

    printf("temperature in Kelvin is : %.2f\n",Kelvin);

    return (0);
}