/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:10:50 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 18:29:41 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

t_stack	*stack_new_bonus(int data)
{
	t_stack	*head;

	head = NULL;
	head = malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head -> data = data;
	head -> next = NULL;
	return (head);
}
