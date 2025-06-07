/*
*********************************************************************************
* Write a program that prints the alphabet in lowercase, followed by a new line.*
*                                                                               *
* Requirements:                                                                 *
* - You can only use the putchar function.                                      *
*   (Every other function, such as printf, puts, etc., is forbidden.)           *
* - All your code should be in the main function.                               *
* - You can only use putchar twice in your code.                                *
*                                                                               *
* Example:                                                                      *
* julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89          *
* 2-print_alphabet.c -o 2-print_alphabet                                        *
* julien@ubuntu:~/0x01$ ./2-print_alphabet                                      *
* abcdefghijklmnopqrstuvwxyz                                                    *
* julien@ubuntu:~/0x01$                                                        *
*********************************************************************************
*/

#include <stdio.h>

int main()
{
    char ch;
    ch = 'a';

    while (ch <= 'z')
    
    {
        putchar(ch);
        ch = ch + 1;
    }

    putchar('\n');

    return (0);

}