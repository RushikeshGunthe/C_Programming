//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   Multiply
// Input:           Integer, Integer, Integer
// Output:          Integer
// Description:     Accepts three numbers and returns multiplication of that three numbers
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    return iNo1 * iNo2 * iNo3;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    int iRet = 0;

    printf("Enter three numbers with spaces:\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return 0;
}
