//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   PrintFactors
// Input:           Integer
// Output:          None
// Description:     This function accepts a number from user and print factors of that number
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void PrintFactors(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0) // updater for negative number
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    PrintFactors(iValue);

    return 0;
}