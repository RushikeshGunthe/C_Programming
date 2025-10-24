//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   OddFactorial
// Input:           Integer         5
// Output:          Integer         8
// Description:     Accepts a number as input and returns its only odd factorial value
// Author:          Rushikesh Vinod Gunthe
// Date:            25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1, iFact = 1; iCnt <= iNo; iCnt += 2)
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial of %d is: %d\n", iValue, iRet);

    return 0;
}
