#include <stdio.h>
#include <math.h>

/* Binary Arithmetic Operators in C

*-----------------------------------------------
* The C binary arithmetic operators operate or work on two operands.

*Operator's    name           syntax
===========    =========      ============
    +       Addition            x + Y
    -       Subtraction         x - y
    *       Multiplication      x * y
    /       Division            x / y
    %       Modulus             x % y
*/

int main()
{
    int a;
    int b;
    int result;

    a = 30;
    b = 3;

    result = a + b;
    printf(" a + b = %d \n",result);

    result = a - b ;
    printf(" a - b = %d \n",result);

     result = a * b ;
    printf(" a x b = %d \n",result);

    result = a / b ;
    printf(" a / b = %.2f \n",result);

    result = a % b ;
    printf(" a %% b = %d \n",result);

    //==================================//

    printf(" result is   %.2lf \n",2*3+pow(5+4,2));
    printf(" Here we go: %i \n",80 / 2 * 3);
    printf(" Here we go: %i \n",80 * 2 / 3);
    printf(" Here we go: %i \n",80 * 2 / 3 + 4 - 1);

    return (0);
}