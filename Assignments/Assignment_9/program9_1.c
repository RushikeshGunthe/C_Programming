//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   DisplayPattern
// Input:           Integer         3
// Output:          None        ( *  *  *  #   #   # )
// Description:     Accepts a number and prints a pattern which includes * and # in it
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // updater for negative number
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}
// Time Complexity: O(2n)   Where n is the input number

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    DisplayPattern(iValue);

    return 0;
}
