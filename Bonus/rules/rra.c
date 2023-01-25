/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:42:28 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 14:38:24 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

void	rra(t_stack **stack, int flag)
{
	t_stack	*temp;
	t_stack	*last;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	temp = *stack;
	while (temp->next->next)
		temp = temp->next;
	last = temp->next;
	temp->next = NULL;
	last->next = *stack;
	*stack = last;
	if (flag)
		ft_putstr("rra\n");
}
