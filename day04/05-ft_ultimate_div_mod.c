/******************************************************************************
 *                              Function Overview                             *
 *                                                                            *
 * Function Name: ft_ultimate_div_mod                                         *
 *                                                                            *
 * Description:                                                               *
 * This function takes two integer pointers, `a` and `b`, and performs a      *
 * division operation where the integer pointed to by `a` is divided by the   *
 * integer pointed to by `b`. The quotient of the division is stored in the   *
 * integer pointed to by `a`, and the remainder is stored in the integer      *
 * pointed to by `b`.                                                         *
 *                                                                            *
 * Function Prototype:                                                        *
 * void ft_ultimate_div_mod(int *a, int *b);                                  *
 *                                                                            *
 * Parameters:                                                                *
 * - int *a: A pointer to an integer that will store the quotient after the   *
 *           division operation.                                              *
 * - int *b: A pointer to an integer that will store the remainder after the  *
 *           division operation.                                              *
 *                                                                            *
 * Return Value:                                                              *
 * - None (void function).                                                    *
 *                                                                            *
 * Requirements:                                                              *
 * - The function assumes the integer pointed to by `b` is not zero to avoid  *
 *   division by zero errors.                                                 *
 * - Properly store the quotient in the location pointed to by `a`.           *
 * - Properly store the remainder in the location pointed to by `b`.          *
 *                                                                            *
 * Example Usage:                                                             *
 * int x = 10;                                                                *
 * int y = 3;                                                                 *
 * ft_ultimate_div_mod(&x, &y);                                               *
 *                                                                            *
 * After execution:                                                           *
 * - `x` will hold the value 3 (quotient of 10 / 3).                          *
 * - `y` will hold the value 1 (remainder of 10 % 3).                         *
 ******************************************************************************/

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b) {
    if (b != 0 && *b != 0) { // Ensure divisor is not zero
        int temp_a = *a;     // Store the original value of `a`
        *a = temp_a / *b;    // Update `a` to hold the quotient
        *b = temp_a % *b;    // Update `b` to hold the remainder
    }
}

int main() {
    int x = 10;
    int y = 3;

    printf("Before: x = %d, y = %d\n", x, y);
    ft_ultimate_div_mod(&x, &y);
    printf("After: x (quotient) = %d, y (remainder) = %d\n", x, y);

    return 0;
}
