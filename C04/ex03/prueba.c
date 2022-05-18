/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:49:49 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/08 20:11:51 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	check;
	int	nb;

	i = 0;
	check = 0;
	nb = 0;
	while (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
			check++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (check % 2 != 0)
		return (nb = -nb);
	return (nb);
}

int	main(void)
{
	char	str[] = "   ---+-a+1234ab567";

	printf("%d\n", ft_atoi(str));
	return (0);
}
