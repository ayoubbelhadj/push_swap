/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:39:47 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 14:38:24 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

int	get_index_elem(t_stack *stack, int elem)
{
	int		index;
	t_stack	*tmp;

	index = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->data == elem)
			return (index);
		tmp = tmp->next;
		index++;
	}
	return (-1);
}
