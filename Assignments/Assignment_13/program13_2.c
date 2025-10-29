//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   PrintEvenNumbers
// Input:           Integer               7
// Output:          None                  2 4 6
// Description:     Accepts a number from user and  prints even numbers from 1 to that number (2 to N all even numbers)
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int PrintEvenNumbers(int iLimit)
{
    int iCnt = 0;

    if (iLimit < 0) // updater to handle -ve number
    {
        iLimit = -iLimit;
    }

    for (iCnt = 2; iCnt <= iLimit; iCnt += 2)
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

    PrintEvenNumbers(iLimit);

    return 0;
}