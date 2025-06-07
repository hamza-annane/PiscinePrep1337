/******************************************************************************
 *                                                                            *
 *                           PRINT SINGLE DIGIT NUMBERS                       *
 *                                                                            *
 *  Description: A program that prints all single-digit numbers of base 10    *
 *               starting from 0, followed by a new line.                     *
 *                                                                            *
 *  Constraints:                                                              *
 *    - All code should be in the main function.                              *
 *                                                                            *
 *  Author:        Programmer                                                 *
 *  Created:       2025-06-07                                                 *
 *                                                                            *
 ******************************************************************************/

#include <stdio.h>

int main(void)
{
    int number = 0;

    while (number < 10)
    {
        printf("%d",number);
        number = number + 1;
    }
    putchar('\n');

    return (0);
}
