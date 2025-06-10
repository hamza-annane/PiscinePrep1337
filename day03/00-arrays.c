#include <stdio.h>

int     main()
{
    int arr[5] = {1,2,3,4,5};

    // print array
    printf("original: ");
    for (int i = 0 ; i < 5 ; i++)
    {
        printf(" %d ",arr[i]);
    }

    printf("\n");

    // print array in reverse
     printf("reversed: ");
    for (int i = 4 ; i >= 0 ; i--)
    {
        printf(" %d ",arr[i]);
    }

}