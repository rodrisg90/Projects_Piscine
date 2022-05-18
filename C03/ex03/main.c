/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:41:57 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/06 11:51:36 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char    dest[20] = "Hola, ";
    char    *src;
    unsigned int size;
    
    size = 10;
    src = "Hasier el panzas";

	printf("%s\n", ft_strncat(dest, src, size));
}
