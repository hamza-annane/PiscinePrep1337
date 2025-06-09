/************************************************************
 * Challenge 5: Count Digits
 * ---------------------------------------------------------
 * Write a function `int count_digits(int n)` 
 * that returns the number of digits in a positive integer.
 *
 * Example:
 * Input: n = 12345
 * Output: 5
 ************************************************************/

 #include <stdio.h>

int count_digits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10; // Divide n by 10 in each iteration
        count++;
    }
    return count;
}
