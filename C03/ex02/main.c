/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:42:39 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/06 13:43:21 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char    dest[20] = "Hola, ";
    char    *src;
    
    src = "Mundo";

	printf("%s\n", ft_strcat(dest, src));
}
