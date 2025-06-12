/******************************************************************************
 *                              Function Overview                             *
 *                                                                            *
 * Function Name: ft_div_mod                                                  *
 *                                                                            *
 * Description:                                                               *
 * This function takes two integers, `a` and `b`, as well as two integer      *
 * pointers, `div` and `mod`. It performs division and modulus operations     *
 * on `a` and `b`. The quotient is stored in the integer pointed to by `div`, *
 * and the remainder is stored in the integer pointed to by `mod`.            *
 *                                                                            *
 * Function Prototype:                                                        *
 * void ft_div_mod(int a, int b, int *div, int *mod);                         *
 *                                                                            *
 * Parameters:                                                                *
 * - int a: The dividend in the division operation.                           *
 * - int b: The divisor in the division operation.                            *
 * - int *div: A pointer to an integer where the quotient will be stored.     *
 * - int *mod: A pointer to an integer where the remainder will be stored.    *
 *                                                                            *
 * Return Value:                                                              *
 * - None (void function).                                                    *
 *                                                                            *
 * Requirements:                                                              *
 * - The function assumes `b` is not zero to avoid division by zero errors.   *
 * - Properly store the quotient in the location pointed to by `div`.         *
 * - Properly store the remainder in the location pointed to by `mod`.        *
 *                                                                            *
 * Example Usage:                                                             *
 * int a = 10;                                                                *
 * int b = 3;                                                                 *
 * int quotient;                                                              *
 * int remainder;                                                             *
 * ft_div_mod(a, b, &quotient, &remainder);                                   *
 *                                                                            *
 * After execution:                                                           *
 * - `quotient` will hold the value 3 (10 / 3).                               *
 * - `remainder` will hold the value 1 (10 % 3).                              *
 ******************************************************************************/

 #include <stdio.h>

 void ft_div_mod(int a, int b, int *div, int *mod)
 {
    *div = a / b;
    *mod = a % b;
 }

 int main() {
    int a = 10;
    int b = 3;
    int quotient, remainder;

    ft_div_mod(a, b, &quotient, &remainder);

    printf("Quotient: %d\n", quotient);  // Output: Quotient: 3
    printf("Remainder: %d\n", remainder); // Output: Remainder: 1

    return 0;
}
