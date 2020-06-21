/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_comb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhlatsh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 10:22:35 by mkhlatsh          #+#    #+#             */
/*   Updated: 2020/06/21 14:22:47 by mkhlatsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb()
{
	char num1;
	char num2;
	char num3;

	num1 = '0' -1;
	while (num1 <= '9')
	{
		num2 = ++num1;
	
		while (num2 <= '9')
		{
			num3 = ++num2 +1;

			while (num3 <= '9')
			{
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3++);

				if (num1 != '7')
				{
					write(1, ", ", 2);
				
				}
			}
		}
	}
}

int main ()
{
	ft_print_comb();
	return 0;
}


