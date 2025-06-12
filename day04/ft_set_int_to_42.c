/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_int_to_42.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Programmer <your_email@example.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:00:00 by Programmer         #+#    #+#             */
/*   Updated: 2025/06/12 12:00:00 by Programmer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function takes a pointer to an integer as its parameter and sets 
** the value of the integer to 42.
**
** The function demonstrates:
** - Use of pointers to manipulate data in memory.
** - Proper use of dereferencing to modify the value of a variable.
**
** Function prototype:
** void ft_set_int_to_42(int *nbr);
**
** Parameters:
** - nbr: A pointer to an integer whose value will be set to 42.
**
** Return Value:
** - None (void function).
*/

#include <stdio.h>

void ft_set_int_to_42(int *nbr)
{
    if (nbr != NULL)
    {
        *nbr = 42;
    }
}

int main()
{
    int number = 1337;
    printf("the Original Value = %d \n",number);
    ft_set_int_to_42(&number);
    printf("the new Value = %d \n",number);
}