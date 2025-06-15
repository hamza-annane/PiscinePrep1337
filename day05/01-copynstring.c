#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

   
    while (i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }

    
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

int main()
{
    char src[] = "Hello, 42!";
    char dest[20]; 

    ft_strncpy(dest, src, 5);
    printf("dest = \"%.*s\"\n", 5, dest); // Expected: "Hello" (no null-termination)
    return 0;
}
