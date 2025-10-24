//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   FactRev
// Input:           Integer     12
// Output:          Integer     6   4   3  2   1
// Description:     This function accepts a number from user and displays all its non factors
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}