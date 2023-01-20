/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:57:17 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/20 20:51:59 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*c;
	t_stack	*b;
	char	**str;

	if (ac == 1)
		exit (EXIT_FAILURE);
	str = build(av + 1, ac - 1);
	push_element(&stack_a, str);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	rrr(&stack_a, &stack_b);
	// rr(&stack_a, &stack_b);
	printf("-a-\n");
	c = stack_a;
	while (c != NULL)
	{
		printf("%d \n", c->data);
		c = c->next;
	}
	printf("-a-\n");
	printf("-b-\n");
	b = stack_b;
	while (b != NULL)
	{
		printf("%d \n", b->data);
		b = b->next;
	}
	printf("-b-\n");
}
