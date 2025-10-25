//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   KMtoMeter
// Input:           Integer        5
// Output:          Integer        5000
// Description:     Accepts number as distance in KM and returns it in meters
// Author:          Rushikesh Vinod Gunthe
// Date:            25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}
// Time Complexity: o(1)

int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter distance in KM:\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is: %d meter\n", iRet);

    return 0;
}
