/************************************************************
 * Challenge 6: Reverse a Number
 * ---------------------------------------------------------
 * Write a function `int reverse_number(int n)`
 *  that reverses the digits of a number.
 * Example:
 * Input: n = 123,
 * Output: 321
 ************************************************************/

#include <stdio.h>

int reverse_number(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10; // extract the last digit
        n = n / 10;              // Remove the last digit
    }

    return rev;
}

// Test the function
int main()
{
    int num = 123;
    printf("Reversed number: %d\n", reverse_number(num));
    return 0;
}
