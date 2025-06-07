/*
*********************************************************************************
* Write a program that prints the alphabet in lowercase, and then in uppercase, *
* followed by a new line.                                                       *
*                                                                               *
* Requirements:                                                                 *
* - You can only use the putchar function.                                      *
*   (Every other function, such as printf, puts, etc., is forbidden.)           *
* - All your code should be in the main function.                               *
* - You can only use putchar three times in your code.                          *
*                                                                               *
* Example:                                                                      *
* julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89          *
* 3-print_alphabets.c -o 3-print_alphabets                                      *
* julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e                            *
* abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$                         *
* julien@ubuntu:~/0x01$                                                         *
*********************************************************************************
*/
#include <stdio.h>

int main()
{
    char ch = 'a';
    char CH = 'A';

    while (ch <= 'z')
    {
        putchar(ch);
        ch = ch + 1;
    }

     while (CH <= 'Z')
    {
        putchar(CH);
        CH = CH + 1;
    }

    putchar('\n');

    return (0);
}