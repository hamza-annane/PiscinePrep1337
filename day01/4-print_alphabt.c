/******************************************************************************
 *                                                                            *
 *                                PRINT ALPHABET                              *
 *                                                                            *
 *  Description: A program that prints the alphabet in lowercase, followed    *
 *               by a new line. It skips the letters 'q' and 'e'.             *
 *                                                                            *
 *  Constraints:                                                              *
 *    - Use only the `putchar` function (no printf, puts, etc.).              *
 *    - All code must be in the main function.                                *
 *    - `putchar` can only be called twice.                                   *
 *                                                                            *
 *  Author:        Programmer                                                 *
 *  Created:       2025-06-07                                                 *
 *                                                                            *
 ******************************************************************************/

 #include <stdio.h>

 int    main()
 {
    char letter = 'a';

    while (letter <= 'z')
    {
        if (letter != 'q' &&  letter != 'e')
        {
            putchar(letter);
        }

        letter = letter + 1;

    }

    putchar('\n');

    return (0);
 }