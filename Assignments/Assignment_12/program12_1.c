//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   PrintFactors
// Input:           Integer               12
// Output:          None                  2 3 4 6
// Description:     Accepts a number from user and displays all positive factors of that number
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void PrintFactors(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) // Updater to handle -ve numbers
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
// Time Complexity: o(n/2)

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    PrintFactors(iValue);

    return 0;
}