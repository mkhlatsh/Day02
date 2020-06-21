/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhlatsh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 09:47:28 by mkhlatsh          #+#    #+#             */
/*   Updated: 2020/06/21 14:31:11 by mkhlatsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_putchar(char c)

void ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;

	while(num1 < 99)
	{
		num2 = num1 + 1;

		while(num2 < 99)
		{
			ft_putchar((num1 / 10) + '0');
			ft_putchar((num1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((num2 / 10) + '0');
			ft_putchar((num2 % 10) + '0');
			ft_putchar(',');
			ft_putchar(' ');
			num2++;

		}
		num1 = num1 + 1;
	}
}







