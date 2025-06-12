/***************************************************************************/
/*                                                                         */
/*   Function: ft_putstr                                          */
/*                                                                         */
/*   Description:                                                          */
/*   This function displays a string of characters on the standard output. */
/*                                                                         */
/*   Prototype:                                                            */
/*   void ft_putstr(char *str);                                   */
/*                                                                         */
/*   Parameters:                                                           */
/*   - str: A pointer to the string of characters to be displayed.         */
/*                                                                         */
/*   Return Value:                                                         */
/*   - None.                                                               */
/*                                                                         */
/*   Notes:                                                                */
/*   - Make sure the string is null-terminated ('\0').                     */
/*   - Handle edge cases, such as NULL pointers or empty strings.          */
/*                                                                         */
/***************************************************************************/

#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1,str,1);
        str++;
    }
}

int main()
{
    ft_putstr("hello\n");
}