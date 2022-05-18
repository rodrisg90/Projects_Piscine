/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:34:36 by rodsanch          #+#    #+#             */
/*   Updated: 2022/02/22 18:52:31 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	alphabet_rev;

	alphabet_rev = 'z';
	while (alphabet_rev >= 'a')
	{
		ft_putchar(alphabet_rev);
		alphabet_rev--;
	}
}
