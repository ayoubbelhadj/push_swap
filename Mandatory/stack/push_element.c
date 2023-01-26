/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:32:19 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/26 15:54:50 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_element(t_stack **stack_a, char **str)
{
	int	size;

	size = get_size(str);
	if (!is_integer(str, size) || is_duple(str, size)
		|| is_out_of_range(str, size))
		get_erreur();
	while (size)
		stack_add_front(stack_a, stack_new(ft_atoi(str[--size])));
	if (is_sorted(*stack_a))
		exit(EXIT_SUCCESS);
}
