/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:57:17 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/22 22:16:05 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**str;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		exit (EXIT_FAILURE);
	str = build(av + 1, ac - 1);
	push_element(&stack_a, str);
	get_pos(stack_a);
	if (ft_lstsize(stack_a) <= 3)
		sort_three(&stack_a);
	else if (ft_lstsize(stack_a) <= 5)
		sort_five(&stack_a, &stack_b);
	else
		sort_stack(&stack_a, &stack_b);
	exit (EXIT_SUCCESS);
}
