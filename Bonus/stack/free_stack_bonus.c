/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:53:18 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 18:05:40 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

void	free_stack_bonus(t_stack **stack)
{
	t_stack	*temp;

	while (stack_size_bonus(*stack))
	{
		if (stack_size_bonus(*stack))
		{
			temp = (*stack)->next;
			*stack = temp;
			free(temp);
		}
	}
}
