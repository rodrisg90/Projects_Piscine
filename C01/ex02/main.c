/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:06:32 by rodsanch          #+#    #+#             */
/*   Updated: 2022/02/24 19:08:34 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("before: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("after: %d %d\n", a, b);
}
