/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:33:35 by rodsanch          #+#    #+#             */
/*   Updated: 2022/02/20 13:45:08 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int columna;
	int fila;

	fila = 0;
	columna = 0;
	while (fila < y)
	{
		fila++;
		while (columna < x)
		{
			columna++;
			if (fila == 1 && (columna == 1 || columna == x))
				ft_putchar('A');
			else if (fila == y && (columna == 1 || columna == x))
				ft_putchar('C');
			else if ((columna != 1 && columna != x) && (fila != 1 && fila != y))
				ft_putchar(' ');
			else
				ft_putchar('B');
		}
		columna = 0;
		ft_putchar('\n');
	}
}
