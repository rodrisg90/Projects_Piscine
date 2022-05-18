/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodsanch <rodsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:21:51 by rodsanch          #+#    #+#             */
/*   Updated: 2022/03/01 13:26:43 by rodsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char alpha[] = "";
	char *p_alp;
	p_alp = alpha;

	printf("-----\n1 = String contains only alphabetical chars\n0 = String doesn't contain only alphabetical chars\n\n");
	printf("%s = %d\n", alpha, ft_str_is_lowercase(p_alp));

	return (0);
}
