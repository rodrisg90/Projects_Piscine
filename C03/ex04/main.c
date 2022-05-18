/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:34:57 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/05 20:01:02 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char    *str;
    char    *to_find;

    str = "18: eighteen";
    to_find = "18";

	printf("%s\n", ft_strstr(str, to_find));
}
