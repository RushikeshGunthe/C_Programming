//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   FactorialDiff
// Input:           Integer         5
// Output:          Integer         8
// Description:     Accepts a number as input and returns its Odd factorial and Even factorial difference
// Author:          Rushikesh Vinod Gunthe
// Date:            25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOddFact = 0;
    int iEvenFact = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1, iOddFact = 1; iCnt <= iNo; iCnt += 2) // odd factorial
    {
        iOddFact = iOddFact * iCnt;
    }

    for (iCnt = 2, iEvenFact = 1; iCnt <= iNo; iCnt += 2) // even factorial
    {
        iEvenFact = iEvenFact * iCnt;
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Odd and evenFactorial Difference of %d is: %d\n", iValue, iRet);

    return 0;
}
