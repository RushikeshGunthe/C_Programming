//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   Divide
// Input:           Integer, Integer
// Output:          Integer
// Description:     This function takes two integers as input and returns their division result.
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if (iNo2 == 0)
    {
        return -1; // Error: Division by zero
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is: %d\n", iRet);

    return 0;
}