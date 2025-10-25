//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   FhtoCs
// Input:           Float                 10
// Output:          Double                -12.2222
// Description:     Accepts float number as fahreneit and returns it in Celsius
// Author:          Rushikesh Vinod Gunthe
// Date:            25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = ((fTemp - 32) * 5 / 9);

    return dCelsius;
}
// Time Complexity: o(1)

int main()
{
    float fValue = 0.0;

    double dRet = 0.0;

    printf("Enter temperature in fahrenheit:\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is: %lf cel.\n", dRet);

    return 0;
}
