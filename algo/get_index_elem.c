/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:39:47 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/22 21:46:44 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
