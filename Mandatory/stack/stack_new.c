/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:10:50 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/23 16:47:11 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*stack_new(int data)
{
	t_stack	*head;

	head = NULL;
	head = malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head -> data = data;
	head -> pos = 0;
	head -> next = NULL;
	return (head);
}
