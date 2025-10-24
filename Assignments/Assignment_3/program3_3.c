//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   PrintEvenFactors
// Input:           Integer
// Output:          None
// Description:     This function accepts a number from user and print even factors of that number
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void PrintEvenFactors(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt == 0) && (iCnt % 2 == 0))
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

    PrintEvenFactors(iValue);

    return 0;
}