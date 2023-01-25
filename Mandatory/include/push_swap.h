/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 02:50:34 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 20:24:58 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				data;
	int				pos;
	struct s_stack	*next;
}	t_stack;

/* ---- algo ---- */
int		get_min_elem(t_stack *stack);
int		get_max_elem(t_stack *stack);
int		get_index_elem(t_stack *stack, int elem);
void	sort_three(t_stack **stack);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	sort_stack(t_stack **a, t_stack **b);
void	push_chunks(t_stack **a, t_stack **b, int chunk_size, int end_chunk);
void	sort_and_push(t_stack **a, t_stack **b, int size);
void	rotate_and_push(int index, int size, t_stack **a, t_stack **b);
int		compare_top_bottom(t_stack **b, int pos, int size);
int		get_index(t_stack *b, int num);

/* ---- check ---- */
void	get_erreur(char *msg);
int		is_duple(char **av, int size);
int		is_integer(char **str, int size);
int		is_out_of_range(char **av, int size);
int		is_sorted(t_stack *stack);
int		is_digital(char **str);
int		get_size(char **str);
void	is_empty(int ac, char **av);

/* ---- rules ---- */
void	sa(t_stack **stack, int flag);
void	sb(t_stack **stack, int flag);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack, int flag);
void	rb(t_stack **stack, int flag);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack, int flag);
void	rrb(t_stack **stack, int flag);
void	rrr(t_stack **stack_a, t_stack **stack_b);

/* ---- Stacks ---- */
char	**build(char **av, int size);
void	free_stack(t_stack **stack);
void	stack_add_front(t_stack **lst, t_stack *new);
t_stack	*stack_last(t_stack *lst);
t_stack	*stack_new(int data);
int		stack_size(t_stack *lst);
void	push_element(t_stack **stack_a, char **str);
void	get_pos(t_stack *a);

/* ---- Utils ---- */
long	ft_atoi(const char *nptr);
int		ft_isdigit(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_putstr(char *str);
char	**ft_split(char const *s, char c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);

#endif