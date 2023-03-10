/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:37:08 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 18:01:47 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

void	stack_add_front_bonus(t_stack **lst, t_stack *new)
{
	if (lst && new)
		new->next = *lst;
	if (new)
		*lst = new;
}
