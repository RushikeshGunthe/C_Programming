//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   CheckZero
// Input:           Integer               7245
// Output:          boolean               false
// Description:     Accepts a number from user and  returns true if number contains zero in it otherwise returns false if not contains zero
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    BOOL bFlag = FALSE;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            bFlag = TRUE;
            break;
        }
        iNo = iNo / 10;
    }
    return bFlag;
}

// Time Complexity: o(n)

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if (bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}