//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   CountOdd
// Input:           Integer               7245
// Output:          Integer               2
// Description:     Accepts a number from user and  returns count of odd digits in it
// Author:          Rushikesh Vinod Gunthe
// Date:            1/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iOddCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 != 0)
        {
            iOddCnt++;
        }

        iNo = iNo / 10;
    }
    return iOddCnt;
}

// Time Complexity: o(n)

int main()
{
    int iValue = 0;
    int iOddCnt = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iOddCnt = CountOdd(iValue);

    printf("Frequency of odd digits in given number is: %d", iOddCnt);

    return 0;
}