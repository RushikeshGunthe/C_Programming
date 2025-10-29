//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   SumofFactors
// Input:           Integer               12
// Output:          Integer               15
// Description:     Accepts a number from user and  returns the sum of all positive factors of that number
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int SumofFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0) // Updater to handle -ve numbers
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo / 2; iCnt++) // here we do not cosider 1 and the number itself as factors
    {
        if (iNo % iCnt == 0)
        {
            iSum += iCnt;
        }
    }
    return iSum;
}
// Time Complexity: o(n/2)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = SumofFactors(iValue);

    printf("Sum of factors are: %d\n", iRet);

    return 0;
}