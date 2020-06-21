/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhlatsh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 09:32:59 by mkhlatsh          #+#    #+#             */
/*   Updated: 2020/06/20 09:38:58 by mkhlatsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers()
{
	char number;

	number = '0';
	while (number <= '9';)
	{
		ft_putchar(number);
		number++;
	}
}
