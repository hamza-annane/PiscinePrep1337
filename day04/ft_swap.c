/******************************************************************************
 *                              Function Overview                             *
 *                                                                            *
 * Function Name: ft_swap                                                     *
 *                                                                            *
 * Description:                                                               *
 * This function takes the addresses of two integers as parameters and swaps  *
 * the values stored in those two integers.                                   *
 *                                                                            *
 * Function Prototype:                                                        *
 * void ft_swap(int *a, int *b);                                              *
 *                                                                            *
 * Parameters:                                                                *
 * - int *a: A pointer to the first integer whose value will be swapped.      *
 * - int *b: A pointer to the second integer whose value will be swapped.     *
 *                                                                            *
 * Return Value:                                                              *
 * - None (void function).                                                    *
 *                                                                            *
 * Requirements:                                                              *
 * - The function should use pointers to access and modify the values of the  *
 *   integers passed as arguments.                                            *
 *                                                                            *
 * Example Usage:                                                             *
 * int y = 5;                                                                 *
 * int x = 10;                                                                *
 * ft_swap(&y, &x);                                                           *
 *                                                                            *
 * After execution:                                                           *
 * - y will hold the value 10.                                                *
 * - x will hold the value 5.                                                 *
 ******************************************************************************/

 #include <stdio.h>

 void ft_swap(int *a, int *b)
 {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
 }

 int    main()
 {
    int y = 5;
    int x = 10;
    ft_swap(&y,&x);

    printf("Y = %d\n",y);
    printf("X = %d\n",x);

    return (0);
 }