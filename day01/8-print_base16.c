/******************************************************************************
 *                                                                            *
 *                     PRINT NUMBERS OF BASE 16 IN LOWERCASE                  *
 *                                                                            *
 *  Description: A program that prints all the numbers of base 16 in          *
 *               lowercase, followed by a new line.                           *
 *                                                                            *
 *  Constraints:                                                              *
 *    - Use only the `putchar` function (no printf, puts, etc.).              *
 *    - `putchar` can only be called three times.                             *
 *    - All code must be in the main function.                                *
 *                                                                            *
 *  Author:        Programmer                                                 *
 *  Created:       2025-06-07                                                 *
 *                                                                            *
 ******************************************************************************/

#include <stdio.h>

int main(void)
{
    int digit = 0;

    while (digit < 16)
    {
        if (digit < 10)
            putchar(digit + '0'); // Convert integers 0-9 to characters '0'-'9'
        else
            putchar(digit - 10 + 'a'); // Convert integers 10-15 to characters 'a'-'f'
        digit++;
    }
    putchar('\n');

    return 0;
}
