/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Programmer <futurestudent@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: YYYY/MM/DD HH:MM:SS by Programmer         #+#    #+#             */
/*   Updated: YYYY/MM/DD HH:MM:SS by Programmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions: write

• Create a function that displays the number entered as a parameter. The function
  has to be able to display all possible values within an int type variable.
• Here’s how it should be prototyped:
    void ft_putnbr(int nb);
• For example:
    ◦ ft_putnbr(42) displays "42"
*/

#include <unistd.h>

void  ft_putnbr(int nb)
{
  if (nb = -2147483648)
  {
    write(1,"-2147483648",11);
    return;
  }
  if (nb < 0)
  {
    write(1,"-",1);
    nb = -nb;
  }

  if (nb > 10)
  {
    ft_putnbr(nb / 10);
  }

  char digit = nb % 10 + 48;
  write(1,&digit,1);

}

int main()
{
  ft_putnbr(-2147483648);

  return (0);
}