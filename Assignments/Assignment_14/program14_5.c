//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   CountLessThanSix
// Input:           Integer               7245
// Output:          Integer               3
// Description:     Accepts a number from user and  returns frequency of 4 in it
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int CountLessThanSix(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < 6)
        {
            iFrequency++;
        }
        iNo = iNo / 10;
    }
    return iFrequency;
}

// Time Complexity: o(n)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = CountLessThanSix(iValue);

    printf("Frequency of numbers less than 6 in given number is: %d", iRet);
    return 0;
}