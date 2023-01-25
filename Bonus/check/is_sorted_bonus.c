/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:29:44 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 18:09:53 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

int	is_sorted_bonus(t_stack *stack)
{
	t_stack	*current;
	t_stack	*next;

	if (!stack_size_bonus(stack))
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
