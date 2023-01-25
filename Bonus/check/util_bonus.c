/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 02:54:33 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 18:26:59 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

int	is_digital_bonus(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i][j])
		{
			if (!ft_isdigit_bonus(str[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_size_bonus(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
