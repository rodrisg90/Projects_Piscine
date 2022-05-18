/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:10:11 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/01 12:09:40 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "Fuente cadena";
	char dest[] = "Destino cadena";
	unsigned int n;

	n = 2;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

	ft_strncpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
