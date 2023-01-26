/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 03:10:24 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/26 15:50:37 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static	int	is_digit(int c)
{
	return (c >= '0' && c <= '9');
}

static	int	is_int(char *arg)
{
	int	i;

	i = -1;
	if ((arg[0] == '-' || arg[0] == '+') && is_digit(arg[1]))
		i++;
	while (arg[++i])
		if (!is_digit(arg[i]))
			return (0);
	return (1);
}

int	is_integer(char **str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!is_int(str[i]) || str[i][0] == '\0')
			return (0);
		i++;
	}
	return (1);
}
