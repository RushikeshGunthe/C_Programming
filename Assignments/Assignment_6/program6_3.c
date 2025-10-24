//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   ChkGreater
// Input:           Integer, Integer
// Output:          Boolean
// Description:     Accepts two number and Checks whether given numbers are equal or not and returns true if they are equal otherwise returns false
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d", &iValue1);

    printf("Enter number:\n");
    scanf("%d", &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if (bRet == true)
    {
        printf("given numbers are equal \n");
    }
    else
    {
        printf("given numbers are not equal \n");
    }
    return 0;
}