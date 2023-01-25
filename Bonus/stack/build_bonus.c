/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:34:25 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 18:27:25 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

char	**build_bonus(char **av, int size)
{
	int		i;
	char	*s;
	char	*tmp;
	char	**str;

	i = 0;
	s = ft_strdup_bonus("");
	while (i < size)
	{
		tmp = ft_strjoin_bonus(s, av[i]);
		free(s);
		s = tmp;
		tmp = ft_strjoin_bonus(s, " ");
		free(s);
		s = tmp;
		i++;
	}
	str = ft_split_bonus(s, ' ');
	free(s);
	return (str);
}
