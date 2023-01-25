/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:06:37 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 14:38:24 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

void	ra(t_stack **stack, int flag)
{
	t_stack	*temp;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	temp = stack_last(*stack);
	temp->next = *stack;
	*stack = (*stack)->next;
	temp->next->next = NULL;
	if (flag)
		ft_putstr("ra\n");
}
