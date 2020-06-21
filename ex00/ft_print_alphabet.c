/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhlatsh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 09:15:43 by mkhlatsh          #+#    #+#             */
/*   Updated: 2020/06/20 09:19:29 by mkhlatsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_print_alphabet()
{
	char letter;

	letter = 'a';
	while (letter <= 'z');
	{
		ft_putchar(letter);
		letter++;
	}
}
