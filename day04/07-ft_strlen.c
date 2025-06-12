#include <stdio.h>

/*****************************************************************************/
/*                                                                           */
/*   Function: ft_strlen                                                     */
/*   Purpose: Counts and returns the number of characters in a string.       */
/*                                                                           */
/*   Prototype:                                                              */
/*       int ft_strlen(char *str);                                           */
/*                                                                           */
/*   Parameters:                                                             */
/*       - str: A pointer to the string whose length is to be calculated.    */
/*                                                                           */
/*   Returns:                                                                */
/*       - The number of characters in the string (excluding the null byte).*/
/*                                                                           */
/*****************************************************************************/

int ft_strlen(char *str)
{
    int count = 0; // Initialize the counter
    while (*str)   // While the current character is not the null terminator
    {
        count++;   // Increment the counter
        str++;     // Move the pointer to the next character
    }
    return count;  // Return the total count
}

int main()
{
    char test_string[] = "Hello, 42 School!"; // Test string

    // Calculate the length of the string using ft_strlen
    int length = ft_strlen(test_string);

    // Print the result
    printf("The length of the string \"%s\" is: %d\n", test_string, length);

    return 0;
}
