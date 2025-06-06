#include <stdio.h>

/*****
 * 
 *  Unary Arithmetic Operators in C
 * 
 *  The Unary Arithmetic Operators operate or work with a single operand.
 *  
 *  ++   Increment Operator   x++ (Post-Increment) or ++x (Pre-Increment)
 *  --   Decrement Operator   x-- (Post-Decrement) or --x (Pre-Decrement)
 * 
 */

int main() {
    int num1 = 10; // Initialize num1 with a value of 10
    int a;
    int b;

    // Post-Increment: num1++ returns the value of num1 before incrementing.
    a = num1++; // 'a' gets the current value of num1 (10), then num1 becomes 11.

    // Pre-Increment: ++num1 increments num1 first, then returns the new value.
    b = ++num1; // num1 is incremented to 12 first, and then 'b' gets the value 12.

    // Display the results of post and pre-increment operations
    printf("a in num1++ = %d\n", a); // Output: a = 10
    printf("b in ++num1 = %d\n", b); // Output: b = 12

    // Demonstrate Post-Decrement and Pre-Decrement
    int num2 = 20; // Initialize another variable num2 with 20
    int c;
    int d;

    // Post-Decrement: num2-- returns the value of num2 before decrementing.
    c = num2--; // 'c' gets the current value of num2 (20), then num2 becomes 19.

    // Pre-Decrement: --num2 decrements num2 first, then returns the new value.
    d = --num2; // num2 is decremented to 18 first, and then 'd' gets the value 18.

    // Display the results of post and pre-decrement operations
    printf("c in num2-- = %d\n", c); // Output: c = 20
    printf("d in --num2 = %d\n", d); // Output: d = 18

    return 0;
}
