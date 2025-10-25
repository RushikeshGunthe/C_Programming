//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   SquareMeter
// Input:           int                    5
// Output:          Double                 0.4645
// Description:     Accepts area in square feet and converts it into square meter and returns it
// Author:          Rushikesh Vinod Gunthe
// Date:            25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dSqMeter = 0.0;

    dSqMeter = (iValue * 0.0929);

    return dSqMeter;
}
// Time Complexity: o(1)

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is: %lf sq. m.\n", dRet);

    return 0;
}
