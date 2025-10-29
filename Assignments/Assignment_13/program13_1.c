//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   PrintNumbers
// Input:           Integer               7
// Output:          None               1 2 3 4 5 6 7
// Description:     Accepts a number from user and  prints from 1 to that number (1 to N)
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int PrintNumbers(int iLimit)
{
    int iCnt = 0;

    if (iLimit < 0) // updater to handle -ve number
    {
        iLimit = -iLimit;
    }

    for (iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
// Time Complexity: o(n)

int main()
{
    int iLimit = 0;

    printf("Enter a number:\n");
    scanf("%d", &iLimit);

    PrintNumbers(iLimit);

    return 0;
}