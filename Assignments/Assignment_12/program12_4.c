//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   SumofEvenFactors
// Input:           Integer               130
// Output:          Integer               38
// Description:     Accepts a number from user and  returns the sum of all positive even factors of that number
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int SumofEvenFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0) // Updater to handle -ve numbers
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo / 2; iCnt += 2) // here we do not cosider 1 and the number itself as factors
    {
        if (iNo % iCnt == 0)
        {
            iSum += iCnt;
        }
    }
    return iSum;
}
// Time Complexity: o(n/4)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = SumofEvenFactors(iValue);

    printf("Sum of even factors are: %d\n", iRet);

    return 0;
}