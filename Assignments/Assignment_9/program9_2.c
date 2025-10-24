//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   DollerToINR
// Input:           Integer         3
// Output:          Integer         210
// Description:     Accepts a number as USD and returns its INR value
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int DollerToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * 70; //(1 USD = 70 Rs)
    return iINR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD:\n");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is: %d\n", iRet);

    return 0;
}
