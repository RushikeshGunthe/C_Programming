//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   RectArea
// Input:           Float   Float         5.3  9.78
// Output:          Double                51.834
// Description:     Accepts two float numbers as width and height and returns area of rectangle
// Author:          Rushikesh Vinod Gunthe
// Date:            25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}
// Time Complexity: o(1)

int main()
{
    float fWidth = 0.0;
    float fHeight = 0.0;
    double dRet = 0.0;

    printf("Enter Width:\n");
    scanf("%f", &fWidth);
    printf("Enter Height:\n");
    scanf("%f", &fHeight);

    dRet = RectArea(fWidth, fHeight);

    printf("Area of rectangle is: %.4f\n", dRet);

    return 0;
}
