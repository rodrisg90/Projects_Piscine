/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:43:06 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/06 12:24:00 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x])
		++x;
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	res_d;
	unsigned int	res_s;

	x = ft_strlen(dest);
	y = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[y] && x < size - 1)
	{
		dest[x] = src[y];
		++x;
		++y;
	}
	dest[x] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}
