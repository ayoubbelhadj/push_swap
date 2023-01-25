/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:53:18 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/23 16:36:46 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*temp;

	while (stack_size(*stack))
	{
		if (stack_size(*stack))
		{
			temp = (*stack)->next;
			*stack = temp;
			free(temp);
		}
	}
}
