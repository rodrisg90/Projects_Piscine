/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:43:00 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/03 10:56:10 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char *str1;
	char *str2;

	str1 = "Rodri";
	str2 = "Rodrigo";
	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d\n", ft_strncmp(str1, str2, 8));
}
