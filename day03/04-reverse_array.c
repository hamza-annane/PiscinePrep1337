/*****************************************************
 *                                                   *
 * Challenge 2: Reverse the Array                    *
 *                                                   *
 * Task:                                             *
 * 1. Accept an array of integers (size up to 10)    *
 *    from the user.                                 *
 * 2. Display the array in reverse order.            *
 *                                                   *
 * Input Example:                                    *
 * Enter the size of the array: 4                   *
 * Enter the elements: 10 20 30 40                  *
 *                                                   *
 * Output Example:                                   *
 * Reversed array: 40 30 20 10                       *
 *                                                   *
 *****************************************************/

 #include <stdio.h>

void print_array(int tab[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void scan_array(int tab[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the element[%d]: ", i);
        scanf("%d", &tab[i]);
    }
}

void reverse_array(int tab[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 1 || size > 10) {
        printf("Please enter a size between 1 and 10 only!\n");
        return 1;
    }

    int arr[size];

    scan_array(arr, size);
    printf("Original ");
    print_array(arr, size);
    reverse_array(arr, size);
    printf("Reversed ");
    print_array(arr, size);

    return 0;
}
