//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   ChkGreater
// Input:           integer
// Output:          boolean
// Description:     checks whether the given number is greater than 100 or not
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if (iNo > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if (bRet == true)
    {
        printf("%d is greater than 100\n", iValue);
    }
    else
    {
        printf("%d is not greater than 100\n", iValue);
    }
    return 0;
}