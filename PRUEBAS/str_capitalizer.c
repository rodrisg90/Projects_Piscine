/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:09:31 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/10 12:37:16 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char ft_cap(char *str)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' & str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    i++;
    return (*str);
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    int i;
    char **argv;

    **argv == "sssSSs";
    i = 1;
    if (argc > i)
        ft_cap(argv[i]);
        i++;
    return (0);
}
