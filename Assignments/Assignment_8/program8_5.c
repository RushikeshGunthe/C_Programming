//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   DisplayTableReverse
// Input:           Integer
// Output:          None
// Description:     Accepts a number and prints the table of that number in reverse order on screen.
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void DisplayTableReverse(int iNo)
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

    for (iCnt = 10; iCnt >= 1; iCnt--)
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

    DisplayTableReverse(iValue);

    return 0;
}
