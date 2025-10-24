//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   Pattern
// Input:           Integer
// Output:          None
// Description:     Accepts number and prints that number of '$' and '*' on screen
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // updater for negative number
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter number\n");
    scanf("%d", &iValue1);

    Pattern(iValue1);

    return 0;
}
