//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   FactDiff
// Input:           Integer     12
// Output:          Integer     -34
// Description:     This function accepts a number from user and returns difference between summation of its all factors and nonfactors
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    printf("Sum of factors: %d\n", iSumFact);
    printf("Sum of non factors: %d\n", iSumNonFact);
    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference between summation of factors and non factors is: %d\n", iRet);

    return 0;
}