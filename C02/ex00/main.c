/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:47:56 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/01 10:05:00 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char	source[] = "Fuente cadena";
	char	destin[] = "Destino cadena";
	char	*dest;

	printf("Before\n\tsrc: %s\n\tdes: %s\n", source, destin);

	dest = ft_strcpy(destin, source);

	printf("After\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}
