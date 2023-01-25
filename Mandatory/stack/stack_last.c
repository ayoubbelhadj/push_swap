/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:58:18 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/23 16:46:36 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*stack_last(t_stack *lst)
{
	t_stack	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp -> next != NULL)
		temp = temp -> next;
	return (temp);
}
