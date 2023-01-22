/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:01:26 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/21 16:23:17 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	index;
	int	i;

	while (!is_sorted(*stack_a))
	{
		i = 0;
		index = get_index_elem(*stack_a, get_min_elem(*stack_a));
		if (index == -1)
			return ;
		if (index <= ft_lstsize(*stack_a) / 2)
			while (i++ < index)
				ra(stack_a, 1);
		else
			while (i++ < (ft_lstsize(*stack_a) - index))
				rra(stack_a, 1);
		if (!is_sorted(*stack_a))
			pb(stack_a, stack_b);
	}
	while (ft_lstsize(*stack_b))
		pa(stack_a, stack_b);
}
