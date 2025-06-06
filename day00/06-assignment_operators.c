#include <stdio.h>

int main() {
    // Declare integer variables
    int a = 10; // Assignment operator (=) is used to assign the value 10 to variable 'a'
    int b = 5;  // Assignment operator (=) assigns the value 5 to variable 'b'
    int result;

    // Add and assign (+=)
    a += b; // Equivalent to: a = a + b;
    // 'a' is now 15 because 10 + 5 = 15
    printf("After a += b, a = %d\n", a);

    // Subtract and assign (-=)
    a -= b; // Equivalent to: a = a - b;
    // 'a' is now 10 because 15 - 5 = 10
    printf("After a -= b, a = %d\n", a);

    // Multiply and assign (*=)
    a *= b; // Equivalent to: a = a * b;
    // 'a' is now 50 because 10 * 5 = 50
    printf("After a *= b, a = %d\n", a);

    // Divide and assign (/=)
    a /= b; // Equivalent to: a = a / b;
    // 'a' is now 10 because 50 / 5 = 10
    printf("After a /= b, a = %d\n", a);

    // Modulus and assign (%=)
    result = a % b; // Equivalent to: result = a % b;
    // 'result' is now 0 because 10 % 5 = 0 (no remainder)
    printf("After result = a %% b, result = %d\n", result);

    return 0; // Program ends successfully
}
