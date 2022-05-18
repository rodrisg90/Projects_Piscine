/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:44:05 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/05 21:49:31 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char    dest[20] = "42";
    char    src[] = "urduliz";
    unsigned int size = 4;
    unsigned int result;

	result = ft_strlcat(dest, src, size);
	printf("%s\n %d\n", dest, result);
}
