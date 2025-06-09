/************************************************************
 * Challenge 1: Add Two Numbers
 * ---------------------------------------------------------
 * Write a function `int add(int a, int b)` that returns 
 * the sum of two integers.
 *
 * Example:
 * Input: a = 5, b = 3
 * Output: 8
 ************************************************************/

 #include <stdio.h>

 int    add(int a, int b)
 {
    return (a + b);
 }

 int main()
 {
    int a = 5;
    int b = 3;
    
    printf("sum = %d\n",add(a,b));

    return (0);
 }