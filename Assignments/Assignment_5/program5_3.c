//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   CheckLeapYear
// Input:           Integer
// Output:          None
// Description:     This function accepts a number as year from user and checks whether it is leap year or not
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

bool CheckLeapYear(int iYear)
{
    if ((iYear % 4 == 0 && iYear % 100 != 0) || (iYear % 400 == 0))
    {
        return true; // Leap year
    }
    else
    {
        return false; // Not a leap year
    }
}

int main()
{
    int iYear = 0;
    bool bRet = false;

    printf("Enter year:\n");
    scanf("%d", &iYear);

    bRet = CheckLeapYear(iYear);

    if (bRet == true)
    {
        printf("%d is a leap year.\n", iYear);
    }
    else
    {
        printf("%d is not a leap year.\n", iYear);
    }

    return 0;
}
