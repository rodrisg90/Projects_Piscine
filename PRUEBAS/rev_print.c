/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 08:49:30 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/10 10:01:10 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    if (argc == 2)
    {
        while (argv[1] [i] != '\0')
        {
            i++;
        }
        while (i >= 0)
        {
            ft_putchar(argv[1] [i]);
            i--;
        }
    }   
    ft_putchar('\n');
    return (0);
}
