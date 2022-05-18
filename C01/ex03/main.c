/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:45:07 by rodsanch          #+#    #+#             */
/*   Updated: 2022/02/27 17:28:56 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	result;
	int	reminder;

	ft_div_mod(7, 3, &result, &reminder);
	printf("Value of a is : %d", result);
	printf("\nValue of b is : %d", reminder);
	return (0);
}
