/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 02:50:34 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/25 20:25:03 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <stddef.h>
# include <fcntl.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}	t_stack;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

/* ---- check ---- */
void	get_erreur_bonus(void);
int		is_duple_bonus(char **av, int size);
int		is_integer_bonus(char **str, int size);
int		is_out_of_range_bonus(char **av, int size);
int		is_sorted_bonus(t_stack *stack);
int		is_digital_bonus(char **str);
int		get_size_bonus(char **str);
void	is_empty_bonus(int ac, char **av);

/* ---- rules ---- */
void	sa_bonus(t_stack **stack);
void	sb_bonus(t_stack **stack);
void	ss_bonus(t_stack **stack_a, t_stack **stack_b);
void	pa_bonus(t_stack **stack_a, t_stack **stack_b);
void	pb_bonus(t_stack **stack_a, t_stack **stack_b);
void	ra_bonus(t_stack **stack);
void	rb_bonus(t_stack **stack);
void	rr_bonus(t_stack **stack_a, t_stack **stack_b);
void	rra_bonus(t_stack **stack);
void	rrb_bonus(t_stack **stack);
void	rrr_bonus(t_stack **stack_a,
			t_stack **stack_b);

/* ---- Stacks ---- */
char	**build_bonus(char **av, int size);
void	free_stack_bonus(t_stack **stack);
void	stack_add_front_bonus(t_stack **lst, t_stack *new);
t_stack	*stack_last_bonus(t_stack *lst);
t_stack	*stack_new_bonus(int data);
int		stack_size_bonus(t_stack *lst);
void	push_element_bonus(t_stack **stack_a, char **str);
void	get_pos_bonus(t_stack *a);

/* ---- Utils ---- */
long	ft_atoi_bonus(const char *nptr);
int		ft_isdigit_bonus(int c);
void	*ft_memcpy_bonus(void *dest, const void *src, size_t n);
void	*ft_memmove_bonus(void *dest, const void *src, size_t n);
void	ft_putstr_bonus(char *str);
char	**ft_split_bonus(char const *s, char c);
int		ft_strcmp_bonus(const char *s1, const char *s2);
char	*ft_strdup_bonus(const char *s);
char	*ft_strjoin_bonus(char const *s1, char const *s2);
size_t	ft_strlen_bonus(const char *s);
char	*ft_strchr_bonus(char *s, int c);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*get_next_line(int fd);

#endif