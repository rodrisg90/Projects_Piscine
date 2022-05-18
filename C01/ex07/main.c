/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:11:08 by rodsanch          #+#    #+#             */
/*   Updated: 2022/02/28 18:15:03 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b);

int main(void)
{
	int number[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(number, 5);
	printf("%d", number[0]);
	printf("%d", number[1]);
	printf("%d", number[2]);
	printf("%d", number[3]);
	printf("%d", number[4]);
	return (0);
}
