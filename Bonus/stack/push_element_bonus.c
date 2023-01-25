/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:32:19 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 19:55:02 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

void	push_element_bonus(t_stack **stack_a, char **str)
{
	int	size;

	size = get_size_bonus(str);
	if (!is_integer_bonus(str, size) || is_duple_bonus(str, size)
		|| is_out_of_range_bonus(str, size))
		get_erreur_bonus();
	while (size)
		stack_add_front_bonus(stack_a,
			stack_new_bonus(ft_atoi_bonus(str[--size])));
}
