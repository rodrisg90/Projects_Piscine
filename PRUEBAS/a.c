/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:15:32 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/09 19:58:18 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_a(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a')
            write(1, "a", 1);
            write(1, "\n", 1);
        return ;
        if (str[i] != 'a')
            write(1, "\n", 1);
        return ;
    }   
}

int main(void)
{
    char str[] = "fffa";
    
    ft_a(str);
    return (0);
}