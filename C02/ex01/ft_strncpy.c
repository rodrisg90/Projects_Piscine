/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:10:07 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/02 17:21:13 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((src[x] != '\0') && (x < n))
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
