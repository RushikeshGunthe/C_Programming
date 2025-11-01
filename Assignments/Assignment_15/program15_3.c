//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   CountRange
// Input:           Integer               7245
// Output:          Integer               2
// Description:     Accepts a number from user and  returns count of digits in between 3 and 7
// Author:          Rushikesh Vinod Gunthe
// Date:            1/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
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

        if ((iDigit > 3) && (iDigit < 7))
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
    int iFrequency = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iFrequency = CountRange(iValue);

    printf("Frequency of digits in between 3 and 7 in given number is: %d", iFrequency);

    return 0;
}