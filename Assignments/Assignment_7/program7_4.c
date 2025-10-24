//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   OddDisplay
// Input:           Integer
// Output:          None
// Description:     Accepts number and prints all positive odd numbers till that number.
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // updater for negative number
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter number\n");
    scanf("%d", &iValue1);

    OddDisplay(iValue1);

    return 0;
}
