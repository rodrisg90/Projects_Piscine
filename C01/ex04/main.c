/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:46:02 by rodsanch          #+#    #+#             */
/*   Updated: 2022/02/25 12:24:35 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int x;
	int y;

	x = 10;
	y = 5;

	ft_ultimate_div_mod(&x, &y);
	printf(" valor *a = %d \n valor *b = %d", x, y);
}
