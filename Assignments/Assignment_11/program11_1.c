//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   RangeDisplay
// Input:           Integer, Integer         5  10
// Output:          None                     5 6 7 8 9 10
// Description:     Accepts a range from user and displays all numbers in that range including given numbers as range
// Author:          Rushikesh Vinod Gunthe
// Date:            25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
// Time Complexity: o(n)

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting of range:\n");
    scanf("%d", &iValue1);

    printf("Enter Ending of range:\n");
    scanf("%d", &iValue2);

    if (iValue2 < iValue1)
    {
        printf("Invalid range\n");
        return -1;
    }

    RangeDisplay(iValue1, iValue2);

    return 0;
}
