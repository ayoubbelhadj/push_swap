/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:57:17 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 19:50:03 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/checker_bonus.h"

void	cmp_rules(t_stack **stack_a, t_stack **stack_b, char *rule)
{
	if (!ft_strcmp_bonus(rule, "sa\n"))
		sa_bonus(stack_a);
	else if (!ft_strcmp_bonus(rule, "sb\n"))
		sb_bonus(stack_b);
	else if (!ft_strcmp_bonus(rule, "pa\n"))
		pa_bonus(stack_a, stack_b);
	else if (!ft_strcmp_bonus(rule, "pb\n"))
		pb_bonus(stack_a, stack_b);
	else if (!ft_strcmp_bonus(rule, "ra\n"))
		ra_bonus(stack_a);
	else if (!ft_strcmp_bonus(rule, "rb\n"))
		rb_bonus(stack_b);
	else if (!ft_strcmp_bonus(rule, "rr\n"))
		rr_bonus(stack_a, stack_b);
	else if (!ft_strcmp_bonus(rule, "rra\n"))
		rra_bonus(stack_a);
	else if (!ft_strcmp_bonus(rule, "rrb\n"))
		rrb_bonus(stack_b);
	else if (!ft_strcmp_bonus(rule, "rrr\n"))
		rr_bonus(stack_a, stack_b);
	else if (!ft_strcmp_bonus(rule, "ss\n"))
		ss_bonus(stack_a, stack_b);
	else
		get_erreur_bonus();
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**str;
	char	*rule;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		exit (EXIT_FAILURE);
	is_empty_bonus(ac, av);
	str = build_bonus(av + 1, ac - 1);
	push_element_bonus(&stack_a, str);
	rule = get_next_line(0);
	while (rule)
	{
		cmp_rules(&stack_a, &stack_b, rule);
		free(rule);
		rule = get_next_line(0);
	}
	if (is_sorted_bonus(stack_a) && stack_b == NULL)
		ft_putstr_bonus("OK\n");
	else
		ft_putstr_bonus("KO\n");
	exit (EXIT_SUCCESS);
}
