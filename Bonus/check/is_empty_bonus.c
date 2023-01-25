/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_empty_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:39:57 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 19:50:25 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

int	ft_isspace(char str)
{
	if (str == '\t' || str == '\f' || str == '\v'
		|| str == '\n' || str == '\r' || str == ' ')
		return (1);
	return (0);
}

void	is_empty_bonus(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (ft_isspace(av[i][j]))
			j++;
		if (av[i][j] == 0)
			get_erreur_bonus();
		i++;
	}
}
