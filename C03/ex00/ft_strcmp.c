/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:53:10 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/06 13:34:06 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *str1;
	char *str2;

	str1 = "rodri";
	str2 = "rodrigo";
	printf("%d\n", ft_strcmp(str1, str2));
}
