/************************************************************
 * Challenge 3: Factorial (Iterative)
 * ---------------------------------------------------------
 * Write a function `int factorial(int n)` to compute the 
 * factorial of a positive integer `n` using a while loop.
 *
 * Example:
 * Input: n = 5
 * Output: 120
 ************************************************************/

 #include <stdio.h>

 int factorial(int n)
 {
    int i = 1;
    int factorial = 1;

    if (n == 1)
        return (1);
    
    if (n == 2)
        return (2);
    
    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    return (factorial);
 }

 int main()
 {
    int n;
    int res;

    printf("Enter a Number: ");
    scanf("%d",&n);

    res = factorial(n);

    printf("%d\n",res);
 }