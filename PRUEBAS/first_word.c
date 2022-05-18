/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:12:08 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/10 11:00:24 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    first_word(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\n')
    {
        if (str[i] >= ' ' && str[i] <= '~')
        ft_putchar(*str);
        str++;
    }
    ft_putchar('\n');
    return ;
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc != 2)
    {
        ft_putchar('\n');
    }
    if (argc == 2)
    {
        first_word(argv[1]);
    }
}