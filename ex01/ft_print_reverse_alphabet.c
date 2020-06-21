/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhlatsh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 09:22:52 by mkhlatsh          #+#    #+#             */
/*   Updated: 2020/06/20 09:26:49 by mkhlatsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet()
{
	char letter;

	letter = 'z';
	while(letter >= 'a')
	{
		ft_putchar(letter);
		letter;
	}
}

