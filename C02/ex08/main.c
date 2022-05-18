/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:00:28 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/01 16:24:25 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char lowercase[] = "assassaasSASASAASAsaasas";
	char *p_lwr;
	p_lwr = lowercase;

	printf("\n-----\n%s = ", lowercase);
	printf("%s\n", ft_strlowcase(p_lwr));
}
