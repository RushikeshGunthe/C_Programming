//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   DisplayTable
// Input:           Integer
// Output:          None
// Description:     Accepts a number and prints the table of that number on screen.
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void DisplayTable(int iNo)
{
    int iFact = 0;
    int iCnt = 0;

    if (iNo < 0) // updater for negative number
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        printf("0\n");
        return;
    }

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n", iNo * iCnt);
    }
}
// Time Complexity: O(10)

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayTable(iValue);

    return 0;
}
