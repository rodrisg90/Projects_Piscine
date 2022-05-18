/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:04:13 by rodsanch          #+#    #+#             */
/*   Updated: 2022/02/28 17:07:30 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			if (tab[x] < tab[y])
			{
			temp = tab[x];
			tab[x] = tab[y];
			tab[y] = temp;
			}
			y++;
		}
		x++;
	}
}
