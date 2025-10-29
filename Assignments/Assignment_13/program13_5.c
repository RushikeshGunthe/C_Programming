//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   SumEvenNaturalNumbers
// Input:           Integer               7
// Output:          Integer               12
// Description:     Accepts a number from user and  returns sum of even natural numbers from 1 to that number (1 to N)
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int SumEvenNaturalNumbers(int iLimit)
{
    int iCnt = 0;
    int iSum = 0;

    if (iLimit < 0) // updater to handle -ve number
    {
        iLimit = -iLimit;
    }

    for (iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

// Time Complexity: o(n)

int main()
{
    int iLimit = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iLimit);

    iRet = SumEvenNaturalNumbers(iLimit);

    printf("Sum of even natural numbers till %d is: %d\n", iLimit, iRet);

    return 0;
}