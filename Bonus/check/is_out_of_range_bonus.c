/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_out_of_range_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:02:06 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 18:26:51 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

static int	out_range(char *nbr)
{
	return (ft_atoi_bonus(nbr) < INT_MIN || ft_atoi_bonus(nbr) > INT_MAX);
}

int	is_out_of_range_bonus(char **av, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (out_range(av[i]))
			return (1);
		i++;
	}
	return (0);
}
