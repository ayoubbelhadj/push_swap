/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:34:25 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 14:38:24 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

char	**build(char **av, int size)
{
	int		i;
	char	*s;
	char	*tmp;
	char	**str;

	i = 0;
	s = ft_strdup("");
	while (i < size)
	{
		tmp = ft_strjoin(s, av[i]);
		free(s);
		s = tmp;
		tmp = ft_strjoin(s, " ");
		free(s);
		s = tmp;
		i++;
	}
	str = ft_split(s, ' ');
	free(s);
	return (str);
}
