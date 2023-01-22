/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:14:26 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/22 19:23:18 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_stack **stack)
{
	int	min;

	min = get_index_elem(*stack, get_min_elem(*stack));
	if (min == 1)
	{
		if ((*stack)->data > ft_lstlast(*stack)->data)
			ra(stack, 1);
		else
			sa(stack, 1);
	}
	else if (min == 2)
	{
		if ((*stack)->data > (*stack)->next->data)
		{
			sa(stack, 1);
			rra(stack, 1);
		}
		else
			rra(stack, 1);
	}
	else
	{
		sa(stack, 1);
		ra(stack, 1);
	}
}
