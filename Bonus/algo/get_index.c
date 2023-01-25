/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 22:10:11 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 14:38:24 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

int	get_index(t_stack *b, int num)
{
	t_stack	*tmp;
	int		i;

	tmp = b;
	i = 0;
	while (tmp)
	{
		if (tmp->pos == num)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
