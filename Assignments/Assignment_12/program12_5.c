//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   isDivisibleByFive
// Input:           Integer               130
// Output:          Boolean               true
// Description:     Accepts a number from user and  returns true if the number is divisible five otherwise returns false if number is not divisible by five
// Author:          Rushikesh Vinod Gunthe
// Date:            29/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int isDivisibleByFive(int iNo)
{
    bool bFlag = false;

    if (iNo % 5 == 0)
    {
        bFlag = true;
    }

    return bFlag;
}
// Time Complexity: o(1)

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    bRet = isDivisibleByFive(iValue);

    if (bRet == true)
    {
        printf("The number %d is divisible by 5: \n", iValue);
    }
    else
    {
        printf("The number %d is not divisible by 5: \n", iValue);
    }

    return 0;
}