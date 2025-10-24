//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Display
// Input:           Integer
// Output:          Integer
// Description:     This function accepts two numbers from user and prints second number of times first number on screen
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;

    if (iNo2 < 0)
    {
        iNo2 = -iNo2;
    }

    for (iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\n", iNo1);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);
    printf("Enter frequency:\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}