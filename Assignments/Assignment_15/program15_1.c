//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   CountEven
// Input:           Integer               7245
// Output:          Integer               2
// Description:     Accepts a number from user and  returns count of even digits in it
// Author:          Rushikesh Vinod Gunthe
// Date:            1/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iEvenCnt++;
        }

        iNo = iNo / 10;
    }
    return iEvenCnt;
}

// Time Complexity: o(n)

int main()
{
    int iValue = 0;
    int iEvenCnt = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iEvenCnt = CountEven(iValue);

    printf("Frequency of even digits in given number is: %d", iEvenCnt);

    return 0;
}