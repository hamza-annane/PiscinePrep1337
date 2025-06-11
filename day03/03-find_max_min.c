/*****************************************************
 *                                                   *
 * Challenge 1: Find the Maximum and Minimum         *
 *                                                   *
 * Task:                                             *
 * 1. Accept an array of integers (size up to 10)    *
 *    from the user.                                 *
 * 2. Find and display the maximum and minimum       *
 *    values in the array.                           *
 *                                                   *
 * Input Example:                                    *
 * Enter the size of the array: 5                    *
 * Enter the elements: 12 3 45 7 8                   *
 *                                                   *
 * Output Example:                                   *
 * Maximum value: 45                                 *
 * Minimum value: 3                                  *
 *                                                   *
 *****************************************************/

 #include <stdio.h>

 int    main()
 {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    if ( size < 0 || size > 10)
    {
        printf("please enter size up to 10 only!");
        return (1);
    }

    int arr[size];

    for (int i = 0 ; i < size ; i++)
    {
        printf("Enter the elements[%d]: ",i + 1);
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0 ; i < size ; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max Value = %d\n",max);
    printf("Min Value = %d\n",min);

    return (0);
 }