//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   EvenOddDiff
// Input:           Integer               2395
// Output:          Integer               -15
// Description:     Accepts a number from user and  returns Difference between sum of even and sum of odd digits in given number
// Author:          Rushikesh Vinod Gunthe
// Date:            1/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int EvenOddDiff(int iNo)
{
    int iDigit = 0;
    int iDiff = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iSumEven += iDigit;
        }
        else
        {
            iSumOdd += iDigit;
        }

        iNo = iNo / 10;
    }
    return iDiff = iSumEven - iSumOdd;
}

// Time Complexity: o(n)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = EvenOddDiff(iValue);

    printf("Difference between sum of even and sum of odd digits in given number is: %d", iRet);

    return 0;
}