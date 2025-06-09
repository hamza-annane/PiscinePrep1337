/************************************************************
 * Challenge 4: Sum of Digits
 * ---------------------------------------------------------
 * Write a  function `int sum_of_digits(int n)` 
 * that returns the sum of all digits in a number `n`.
 *
 * Example:
 * Input: n = 123
 * Output: 6
 ************************************************************/

 #include <stdio.h>

int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return (sum);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle negative input by converting to positive
    if (n < 0) {
        n = -n;
    }

    printf("Sum of digits: %d\n", sum_of_digits(n));
    return 0;
}
