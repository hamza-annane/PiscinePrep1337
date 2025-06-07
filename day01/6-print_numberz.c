/******************************************************************************
 *                                                                            *
 *                  PRINT SINGLE DIGIT NUMBERS WITHOUT CHAR                   *
 *                                                                            *
 *  Description: A program that prints all single-digit numbers of base 10    *
 *               starting from 0, followed by a new line.                     *
 *                                                                            *
 *  Constraints:                                                              *
 *    - You are not allowed to use any variable of type char.                 *
 *    - Use only the `putchar` function (no printf, puts, etc.).              *
 *    - `putchar` can only be called twice.                                   *
 *    - All code must be in the main function.                                *
 *                                                                            *
 *  Author:        Programmer                                                 *
 *  Created:       2025-06-07                                                 *
 *                                                                            *
 ******************************************************************************/

 #include <stdio.h>

 int main()
 {
    int digit = 0;

    while (digit < 10)
    {
        putchar(digit + 48); // Convert the integer digit to its corresponding ASCII value for printing
        digit = digit + 1;
    }
    putchar('\n');

    return (0);
 }