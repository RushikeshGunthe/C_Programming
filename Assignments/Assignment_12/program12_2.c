//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   CountFactors
// Input:           Integer               12
// Output:          Integer               4
// Description:     Accepts a number from user and count all positive factors of that number and returns the count
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    if (iNo < 0) // Updater to handle -ve numbers
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo / 2; iCnt++) // here we do not cosider 1 and the number itself as factors
    {
        if (iNo % iCnt == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
// Time Complexity: o(n/2)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = CountFactors(iValue);

    printf("Number of factors are: %d\n", iRet);

    return 0;
}