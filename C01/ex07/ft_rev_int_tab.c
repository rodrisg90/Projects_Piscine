/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:16:56 by rodsanch          #+#    #+#             */
/*   Updated: 2022/02/28 18:23:27 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	y = size - 1;
	while (y > x)
	{
		ft_swap(&tab[x], &tab[y]);
		x++;
		y--;
	}
}
