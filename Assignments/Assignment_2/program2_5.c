//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkEven
// Input:           Integer
// Output:          None
// Description:     This function accepts a number from user and check whether that number is even or odd
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
    if (iNo % 2 == 0)
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

    bRet = ChkEven(iValue);

    if (bRet == true)
    {
        printf("%d is even number\n", iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }

    return 0;
}