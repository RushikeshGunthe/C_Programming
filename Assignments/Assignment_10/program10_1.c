//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   CircleArea
// Input:           Float         5.3
// Output:          Double        88.2026
// Description:     Accepts a float number as radius and returns area of circle
// Author:          Rushikesh Vinod Gunthe
// Date:            25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}
// Time Complexity: o(1)

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius:\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %.4f\n", dRet);

    return 0;
}
