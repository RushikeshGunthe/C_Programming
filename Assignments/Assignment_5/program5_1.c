//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   CheckEvenOdd
// Input:           Integer
// Output:          None
// Description:     This function accepts a number from user and checks number is even or odd
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        printf("%d is even.\n", iNo);
    }
    else
    {
        printf("%d is odd.\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}