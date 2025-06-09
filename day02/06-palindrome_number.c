#include <stdio.h>

/************************************************************
 * Function: is_palindrome_number
 * ---------------------------------------------------------
 * Checks if a number is a palindrome.
 *
 * Parameters:
 *   n - the number to check.
 *
 * Returns:
 *   1 if the number is a palindrome, 0 otherwise.
 *
 * Example:
 * Input: n = 121
 * Output: 1 (Palindrome)
 *
 * Input: n = 123
 * Output: 0 (Not Palindrome)
 ************************************************************/
int is_palindrome_number(int n) {
    int rev = 0, original = n;

    // Reverse the number
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    // Compare the reversed number with the original
    if (original == rev) {
        return 1; // Palindrome
    } else {
        return 0; // Not a palindrome
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_palindrome_number(n)) {
        printf("%d is a Palindrome\n", n);
    } else {
        printf("%d is Not a Palindrome\n", n);
    }

    return 0;
}
