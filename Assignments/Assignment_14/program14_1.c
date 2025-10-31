//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   DisplayDigit
// Input:           Integer               7245
// Output:          None                  5427
// Description:     Accepts a number from user and  reverse its disgits and prints it on screen
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d", iDigit);
        iNo = iNo / 10;
    }
}

// Time Complexity: o(n)

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}