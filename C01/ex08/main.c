/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:05:20 by rodsanch          #+#    #+#             */
/*   Updated: 2022/02/28 17:06:51 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	number[] = {5, 3, 6, 9, 2};

	ft_sort_int_tab(number, 5);
	printf("%d", number[0]);
	printf("%d", number[1]);
	printf("%d", number[2]);
	printf("%d", number[3]);
	printf("%d\n", number[4]);
	return (0);
}
