/************************************************************
 * Challenge 2: Check Even or Odd
 * ---------------------------------------------------------
 * Write a function `int is_even(int n)` that returns 1 if 
 * the number is even and 0 if it is odd.
 *
 * Example:
 * Input: n = 4
 * Output: 1
 *
 * Input: n = 7
 * Output: 0
 ************************************************************/

 #include <stdio.h>

 int    is_even(int n)
 {
    if (n % 2 == 0)
        return (1);
    else
        return (0);
 }

 int    main()
 {
    int n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    int result = is_even(n);
    printf("%d\n",result);

    return (0);
 }