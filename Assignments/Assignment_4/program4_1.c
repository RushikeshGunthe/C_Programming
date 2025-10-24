//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   MultFact
// Input:           Integer     (12)
// Output:          Integer     (144)
// Description:     This function accepts a number from user and displays its multiplication of factors
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult *= iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is: %d\n", iRet);

    return 0;
}