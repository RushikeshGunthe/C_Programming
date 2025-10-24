//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   Percentage
// Input:           Integer, Integer
// Output:          Float
// Description:     Accepts Total marks as iNo1 and marks obtained as iNo2 and returns percentage
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    return ((float)iNo2 / iNo1) * 100;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    float fRet = 0.0f;

    printf("Enter Total marks\n");
    scanf("%d", &iValue1);
    printf("Enter Obtained marks: \n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.2f\n", fRet);

    return 0;
}
