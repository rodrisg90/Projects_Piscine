/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:20:57 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/03 18:28:43 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char src[] = "Honolulu";
	char dest[] = "xxc";
	unsigned int n;

	n = 6;

	ft_strlcpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, n);
	return (0);
}
