/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:22:06 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/01 17:19:46 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	prev;
	int	c;

	prev = 0;
	c = 0;
	while (str[prev] != '\0')
	{
		if (c == 0 && (str[prev] >= 'a' && str[prev] <= 'z'))
		{
			str[prev] = str[prev] -32;
			c++;
		}
		else if (c > 0 && (str[prev] >= 'A' && str[prev] <= 'Z'))
		{
			str[prev] = str[prev] +32;
			c++;
		}
		else if ((str[prev] < '0') || (str[prev] > '9' && str[prev] < 'A')
			|| (str[prev] > 'Z' && str[prev] < 'a') || (str[prev] > 'z'))
			c = 0;
		else
			c++;
		prev++;
	}
	return (str);
}
