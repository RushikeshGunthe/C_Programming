//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   EvenFactorial
// Input:           Integer         5
// Output:          Integer         8
// Description:     Accepts a number as input and returns its only even factorial value
// Author:          Rushikesh Vinod Gunthe
// Date:            25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2, iFact = 1; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD:\n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of %d is: %d\n", iValue, iRet);

    return 0;
}
