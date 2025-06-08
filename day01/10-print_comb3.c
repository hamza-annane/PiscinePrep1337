/* 
 * Write a program that prints all possible different combinations of two digits.
 *
 * - Numbers must be separated by ',', followed by a space.
 * - The two digits must be different.
 * - 01 and 10 are considered the same combination of the two digits 0 and 1.
 * - Print only the smallest combination of two digits.
 * - Numbers should be printed in ascending order, with two digits.
 * - You can only use the putchar function (every other function like printf, puts, etc., is forbidden).
 * - You can only use putchar five times maximum in your code.
 * - You are not allowed to use any variable of type char.
 * - All your code should be in the main function.
 *
 * Example:
 * julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
 * julien@ubuntu:~/0x01$ ./100-print_comb3
 *             01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 
 *             27, 28, 29,34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69,
 *             78, 79, 89
 */

 #include <stdio.h>

 int main()
 {
    int digit_one = 0;
    int digit_two = 1;

    while (digit_one <= 8)
    {
        digit_two = digit_one + 1;

        while (digit_two <= 9)
        {
            putchar(digit_one + 48);
            putchar(digit_two + 48 );
            if (digit_one != '8')
            {
                putchar(',');
                putchar(' ');
            }
            digit_two++;
        }
        digit_one++;
    }
 }