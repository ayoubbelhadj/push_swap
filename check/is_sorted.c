/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:29:44 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/20 16:36:31 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_stack	*current;
	t_stack	*next;

	if (!ft_lstsize(stack))
		return (1);
	current = stack;
	next = stack->next;
	while (next != NULL)
	{
		if (current->data > next->data)
			return (0);
		current = next;
		next = next->next;
	}
	return (1);
}
