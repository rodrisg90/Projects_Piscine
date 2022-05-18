/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:21:00 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/03 10:41:33 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	result;
	unsigned int	x;

	x = 0;
	result = 0;
	while (src[result] != '\0')
		result++;
	if (size != 0)
	{
		while (src[x] != '\0' && x < (size))
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (result);
}
