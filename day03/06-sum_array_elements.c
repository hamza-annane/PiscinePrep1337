/*****************************************************
 *                                                   *
 * Challenge 4: Sum of Elements in an Array          *
 *                                                   *
 * Task:                                             *
 * 1. Accept an array of integers (size up to 10)    *
 *    from the user.                                 *
 * 2. Calculate and display the sum of all elements. *
 *                                                   *
 * Input Example:                                    *
 * Enter the size of the array: 3                   *
 * Enter the elements: 5 10 15                      *
 *                                                   *
 * Output Example:                                   *
 * Sum of elements: 30                               *
 *                                                   *
 *****************************************************/

 #include <stdio.h>

int main() {
    int arr[10]; 
    int size, sum = 0;

    
    printf("Enter the size of the array (1-10): ");
    scanf("%d", &size);

   
    if (size < 1 || size > 10) {
        printf("Invalid size. Please enter a value between 1 and 10.\n");
        return 1; 
    }

    // Accept array elements from the user
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to the sum
    }

    // Display the sum of elements
    printf("Sum of elements: %d\n", sum);

    return 0;
}
