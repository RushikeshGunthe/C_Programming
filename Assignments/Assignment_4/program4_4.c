//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   SumNonFact
// Input:           Integer     12
// Output:          Integer     50
// Description:     This function accepts a number from user and returns summation of all its non factors
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of non factors is: %d\n", iRet);

    return 0;
}