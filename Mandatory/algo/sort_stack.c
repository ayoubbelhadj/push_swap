/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:26:33 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/22 17:45:11 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	top_bottom_pos(t_stack **b, int pos, int size)
{
	int	top;
	int	bottom;

	top = get_index(*b, (pos - 1));
	bottom = size - top;
	if (top >= bottom)
		return (bottom);
	else
		return (top);
}

void	rotate_push2a(t_stack **a, t_stack **b, int index, int size)
{
	int	i;

	i = 0;
	if (index < (size / 2))
	{
		while (i++ < index)
			rb(b, 1);
	}
	else
		while (i++ < size - index)
			rrb(b, 1);
	pa(a, b);
}

void	sort_push2a(t_stack **a, t_stack **b, int size)
{
	int	index;

	index = 0;
	while (*b)
	{
		if (size != 1 && top_bottom_pos(b, size, size)
			> top_bottom_pos(b, size - 1, size))
		{
			index = get_index(*b, (size - 2));
			rotate_push2a(a, b, index, size);
			index = get_index(*b, (size - 1));
			size --;
			rotate_push2a(a, b, index, size);
			size --;
			sa(a, 1);
		}
		else
		{
			index = get_index(*b, (size - 1));
			rotate_push2a(a, b, index, size);
			size--;
		}
	}
}

void	push2b(t_stack **a, t_stack **b, int chunk_size, int thechunk)
{
	int	chunk_count;

	chunk_count = 0;
	while (*a)
	{
		while (chunk_count < chunk_size && *a)
		{	
			if ((*a) && ((*a)->pos < chunk_size))
			{
				pb(a, b);
				chunk_count++;
				if ((*b)->pos > (chunk_size - (thechunk / 2)))
				{
					if ((*a) && (*a)->pos >= chunk_size
						&& chunk_count != chunk_size)
						rr(a, b);
					else
						rb(b, 1);
				}
			}
			else
				ra(a, 1);
		}
		chunk_size += thechunk;
	}
}

void	sort_stack(t_stack **a, t_stack **b)
{
	int	chunk_size;
	int	thechunk;		
	int	size;

	size = stack_size(*a);
	if (size > 5 && size <= 200)
		chunk_size = size / 5;
	if (size > 200)
		chunk_size = size / 9;
	thechunk = chunk_size;
	push2b(a, b, chunk_size, thechunk);
	sort_push2a(a, b, size);
}
