#include <stdio.h>

/*
    Write a C program to display a four-digit integer in reverse order, without using loops.

    Example:
    Input: 1234
    Output: 4321
*/

int main()
{

    int number;

    printf("Enter a four-digit integer: ");
    scanf("%d",&number);

    int digit_one = number % 10;
    int digit_two = (number / 10) % 10;
    int digit_tree = (number / 100 ) % 10 ;
    int digit_four = number / 1000;

    printf("original: %d\n",number);
    printf("reverse : %d%d%d%d\n",digit_one,digit_two,digit_tree,digit_four);


}