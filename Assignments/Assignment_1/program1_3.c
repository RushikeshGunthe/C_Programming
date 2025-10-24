////////////////////////////////////////////
//

#include <stdio.h>

/////////////////////////////////////////////
//
// Function Name:   Display
// Input:           None
// Output:          5 to 1 numbers printed
// Description:     This function Displays numbers from 5 to 1 on the screen
// Author:          Rushikesh Vinod Gunthe
// Date:            24/10/2025
//
/////////////////////////////////////////////
void Display()
{
    int i = 0;

    i = 5;
    while (i > 0)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}