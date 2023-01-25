/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:48:21 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/21 20:00:00 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*get_stack_elem(t_stack *stack, int element)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (tmp->data == element)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
