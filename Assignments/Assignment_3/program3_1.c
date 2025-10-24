//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   PrintEven
// Input:           Integer
// Output:          None
// Description:     This function accepts a number from user and prints that number of even numbers on screen
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 0;
    if (iNo <= 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iEven += 2;
        printf("%d\n", iEven);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}