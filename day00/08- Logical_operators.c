#include <stdio.h>

int main() {
    // Declare integer variables
    int a = 10, b = 20;

    // Logical AND (&&) operator
    if (a > 5 && b > 15) {
        printf("Both a is greater than 5 and b is greater than 15\n");
    } else {
        printf("Either a is not greater than 5 or b is not greater than 15\n");
    }

    // Logical OR (||) operator
    if (a > 15 || b > 15) {
        printf("Either a is greater than 15 or b is greater than 15\n");
    } else {
        printf("Neither a is greater than 15 nor b is greater than 15\n");
    }

    // Logical NOT (!) operator
    if (!(a > b)) {
        printf("a is not greater than b\n");
    } else {
        printf("a is greater than b\n");
    }

    return 0; // Program ends successfully
}
