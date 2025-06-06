#include <stdio.h>

int main() {
    char name[50];
    int age;
    float a, b, result;
    float temp; // for swapping

    // Get name
    printf("Enter your name: ");
    scanf("%s", name); // no spaces allowed

    // Get age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Greet the user
    printf("Hello %s! You are %d years old.\n", name, age);

    // Get two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Add the numbers
    result = a + b;
    printf("The sum of %.2f and %.2f is %.2f\n", a, b, result);

    // Swap the numbers
    temp = a;
    a = b;
    b = temp;

    // Show swapped values
    printf("After swapping: a = %.2f, b = %.2f\n", a, b);

    return 0;
}
