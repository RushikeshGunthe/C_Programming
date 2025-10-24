//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   CheckNumberType
// Input:           Integer
// Output:          None
// Description:     This function accepts a number from user and checks whether it positive, negative or zero
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void CheckNumberType(int iNo)
{
    if (iNo > 0)
    {
        printf("%d is Positive number.\n", iNo);
    }
    else if (iNo < 0)
    {
        printf("%d is Negative number.\n", iNo);
    }
    else
    {
        printf("Number is Zero.\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter number:\n");
    scanf("%d", &iNo);

    CheckNumberType(iNo);

    return 0;
}
