//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   FindMax
// Input:           Integer
// Output:          Integer
// Description:     This function accepts two numbers from user and returns the maximum number
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter first number:\n");
    scanf("%d", &iValue1);

    printf("Enter second number:\n");
    scanf("%d", &iValue2);

    iRet = FindMax(iValue1, iValue2);

    printf("Maximum number is: %d\n", iRet);

    return 0;
}
