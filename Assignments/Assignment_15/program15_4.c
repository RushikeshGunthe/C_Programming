//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   MultDigits
// Input:           Integer               2395
// Output:          Integer               270
// Description:     Accepts a number from user and  returns multiplication of all digits
// Author:          Rushikesh Vinod Gunthe
// Date:            1/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        iMult = iMult * iDigit;

        iNo = iNo / 10;
    }
    return iMult;
}

// Time Complexity: o(n)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of all digits in given number is: %d", iRet);

    return 0;
}