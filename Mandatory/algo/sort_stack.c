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

int	compare_top_bottom(t_stack **b, int pos, int size)
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

void	rotate_and_push(int index, int size, t_stack **a, t_stack **b)
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

void	sort_and_push(t_stack **a, t_stack **b, int size)
{
	int	index;

	index = 0;
	while (*b)
	{
		if (size == 1 || compare_top_bottom(b, size, size)
			<= compare_top_bottom(b, size - 1, size))
		{
			index = get_index(*b, (size - 1));
			rotate_and_push(index, size, a, b);
			size--;
		}
		else
		{
			index = get_index(*b, (size - 2));
			rotate_and_push(index, size, a, b);
			index = get_index(*b, (size - 1));
			size --;
			rotate_and_push(index, size, a, b);
			size --;
			sa(a, 1);
		}
	}
}

void	push_chunks(t_stack **a, t_stack **b, int chunk_size, int end_chunk)
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
				if ((*b)->pos > (chunk_size - (end_chunk / 2)))
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
		chunk_size += end_chunk;
	}
}

void	sort_stack(t_stack **a, t_stack **b)
{
	int	chunk_size;
	int	end_chunk;		
	int	size;

	size = stack_size(*a);
	if (size > 5 && size <= 200)
		chunk_size = size / 5;
	if (size > 200)
		chunk_size = size / 9;
	end_chunk = chunk_size;
	push_chunks(a, b, chunk_size, end_chunk);
	sort_and_push(a, b, size);
}
