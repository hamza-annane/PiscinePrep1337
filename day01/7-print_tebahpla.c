/******************************************************************************
 *                                                                            *
 *                  PRINT LOWERCASE ALPHABET IN REVERSE                       *
 *                                                                            *
 *  Description: A program that prints the lowercase alphabet in reverse,     *
 *               followed by a new line.                                      *
 *                                                                            *
 *  Constraints:                                                              *
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
    char letter = 'z';

    while (letter >= 'a')
    {
        putchar(letter);
        letter = letter - 1;
    }
    putchar('\n');

    return (0);
 }