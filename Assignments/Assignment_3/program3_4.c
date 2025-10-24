//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   DisplayConvert
// Input:           Char    (A)     (d)
// Output:          None    (a)     (D)
// Description:     This function accepts a character from user and converets its case and prints it on screen
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if ((cValue >= 'A' && cValue <= 'Z'))
    {
        cValue = cValue + 32;
        printf("Converted character is: %c\n", cValue);
    }
    else if ((cValue >= 'a' && cValue <= 'z'))
    {
        cValue = cValue - 32;
        printf("Converted character is: %c\n", cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return 0;
}