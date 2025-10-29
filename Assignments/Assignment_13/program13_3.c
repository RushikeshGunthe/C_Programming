//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   PrintOddNumbers
// Input:           Integer               7
// Output:          None                  1 3 5 7
// Description:     Accepts a number from user and  prints odd numbers from 1 to that number (1 to N all odd numbers)
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int PrintOddNumbers(int iLimit)
{
    int iCnt = 0;

    if (iLimit < 0) // updater to handle -ve number
    {
        iLimit = -iLimit;
    }

    for (iCnt = 1; iCnt <= iLimit; iCnt += 2)
    {
        printf("%d\n", iCnt);
    }
}

// Time Complexity: o(n/2)

int main()
{
    int iLimit = 0;

    printf("Enter a number:\n");
    scanf("%d", &iLimit);

    PrintOddNumbers(iLimit);

    return 0;
}