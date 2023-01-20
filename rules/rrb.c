/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:44:57 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/20 20:45:07 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rrb(t_stack **stack, int flag)
{
	t_stack	*temp;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack;
	*stack = (*stack)->next;
	temp->next->next = NULL;
	if (flag)
		ft_putstr("rrb\n");
}
