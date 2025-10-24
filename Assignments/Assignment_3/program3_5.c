//////////////////////////////////////////////////////////////////////////////////////////
//
// Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   ChkVowel
// Input:           Char
// Output:          None
// Description:     This function accepts a character from user and checks whether it is vowel or not
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char cValue)
{
    if ((cValue == 'A') || (cValue == 'E') || (cValue == 'I') || (cValue == 'O') || (cValue == 'U') ||
        (cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character:\n");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == true)
    {
        printf("%c is a Vowel\n", cValue);
    }
    else
    {
        printf("%c is not a Vowel\n", cValue);
    }

    return 0;
}