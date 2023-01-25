/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:37:08 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/23 16:45:14 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_add_front(t_stack **lst, t_stack *new)
{
	if (lst && new)
		new->next = *lst;
	if (new)
		*lst = new;
}
