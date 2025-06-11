/*****************************************************
 *                                                   *
 * Challenge 3: Count Even and Odd Numbers           *
 *                                                   *
 * Task:                                             *
 * 1. Accept an array of integers (size up to 10)    *
 *    from the user.                                 *
 * 2. Count and display how many numbers are even    *
 *    and how many are odd.                          *
 *                                                   *
 * Input Example:                                    *
 * Enter the size of the array: 6                   *
 * Enter the elements: 1 2 3 4 5 6                  *
 *                                                   *
 * Output Example:                                   *
 * Even numbers: 3                                   *
 * Odd numbers: 3                                    *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
    int even = 0;
    int odd = 0;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

     if (size < 1 || size > 10) {
        printf("Please enter a size between 1 and 10 only!\n");
        return 1;
    }

    int arr[size];
    for (int i = 0 ; i < size ; i++)
    {
        printf("Enter the element[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0 ; i < size ; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
    }

    printf("Even numbers: %d\n",even);
    printf("Odd numbers: %d\n",odd);

    return (0);
}