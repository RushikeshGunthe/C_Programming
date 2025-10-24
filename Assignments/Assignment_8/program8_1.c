//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   NumberLevel
// Input:           Integer
// Output:          None
// Description:     Accepts number and prints Small if number is less than 50, Medium if number is from 50 to 100, Large if number is greater than 100.
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void NumberLevel(int iNo)
{

    if (iNo < 0) // updater for negative number
    {
        iNo = -iNo;
    }

    if (iNo < 50)
    {
        printf("Level is: Small\n");
    }
    else if ((iNo >= 50) && (iNo <= 100))
    {
        printf("Level is: Medium\n");
    }
    else if (iNo > 100)
    {
        printf("Level is: Large\n");
    }
}
// Time Complexity: O(1)

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    NumberLevel(iValue);

    return 0;
}
