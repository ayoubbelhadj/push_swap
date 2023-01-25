/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:56:18 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 14:38:24 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

void	get_pos(t_stack *a)
{
	t_stack	*current;
	t_stack	*cmp;
	int		pos;

	current = a;
	while (current)
	{
		pos = 0;
		cmp = a;
		while (cmp)
		{
			if (cmp->data < current->data)
				pos++;
			cmp = cmp ->next;
		}
		current->pos = pos;
		current = current->next;
	}
}
