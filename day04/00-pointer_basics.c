#include <stdio.h>

int main() {
    int n = 42;       // Declare an integer `n` and initialize it to 42
    int *p = &n;      // Declare a pointer `p` and assign it the address of `n`

    // Printing the value of `n`
    printf("The Value of N: %d\n", n);

    // Printing the address of `n` using `%p` for pointers
    printf("The Address of N: %p\n", &n);

    // Printing the value of `p` (which is the address of `n`)
    printf("The Value of P (Address of N): %p\n", p);

    // Printing the content of `p` (dereferencing the pointer to get the value of `n`)
    printf("The Content of P (Value of N): %d\n", *p);

    // Printing the address of the pointer `p`
    printf("The Address of P: %p\n", &p);

    return 0;
}