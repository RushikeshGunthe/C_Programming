//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   FindLargest
// Input:           Integer    Integer    Integer
// Output:          Integer
// Description:     This function accepts three numbers from user and returns largest among given three numbers
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 > iNo2 && iNo1 > iNo3)
    {
        return iNo1;
    }
    else if (iNo2 > iNo1 && iNo2 > iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iNo3 = 0, iRet = 0;

    printf("Enter first number:\n");
    scanf("%d", &iNo1);

    printf("Enter second number:\n");
    scanf("%d", &iNo2);

    printf("Enter third number:\n");
    scanf("%d", &iNo3);

    iRet = FindLargest(iNo1, iNo2, iNo3);
    printf("%d is largest number.\n", iRet);

    return 0;
}