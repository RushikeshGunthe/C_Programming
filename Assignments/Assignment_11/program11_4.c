//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
// Function Name:   RangeSumEven
// Input:           Integer, Integer         23  30
// Output:          None                     212
// Description:     Accepts a range from user and displays addition of all even numbers in that range including given numbers as range
// Author:          Rushikesh Vinod Gunthe
// Date:            25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
// Time Complexity: o(n)

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting of range:\n");
    scanf("%d", &iValue1);

    printf("Enter Ending of range:\n");
    scanf("%d", &iValue2);

    if ((iValue2 < iValue1) || (iValue1 < 0))
    {
        printf("Invalid range\n");
        return -1;
    }

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Sum of even in range is:%d\n", iRet);

    return 0;
}
