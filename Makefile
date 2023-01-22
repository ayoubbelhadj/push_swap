# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 14:39:16 by abelhadj          #+#    #+#              #
#    Updated: 2023/01/22 22:10:52 by abelhadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

CC		= cc
FLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

UTILS	= $(addprefix utils/, ft_atoi ft_isdigit ft_memcpy ft_memmove ft_putstr ft_split \
				ft_strcmp ft_strdup ft_strjoin ft_strlen)
STACK	= $(addprefix stack/, build free_stack ft_lstadd_front ft_lstlast \
				ft_lstnew ft_lstsize push_element get_pos)
CHECK	= $(addprefix check/, get_erreur is_duple is_integer is_out_of_range is_sorted \
				util)
RULES	= $(addprefix rules/, sa sb ss pa pb ra rb rr rra rrb rrr)

ALGO	= $(addprefix algo/, get_min_elem get_max_elem get_index_elem sort_three\
			get_index sort_five get_stack_elem sort_stack)
FILES	= $(NAME) $(UTILS) $(CHECK) $(STACK) $(RULES) $(ALGO)

SRC		= $(FILES:=.c)
OBJ		= $(FILES:=.o)
HEADER  = include/push_swap.h
INCLUDES= -I include

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
CURSIVE		=	\e[33;3m
RESET		=	\e[0m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@printf "$(CURSIVE)$(GRAY)	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(OBJ) $(INCLUDES) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

%.o: %.c $(HEADER)
	@$(CC) $(FLAGS)  -c $< -o $@ $(INCLUDES)

clean:
	@$(RM) $(OBJ)
	@printf "$(CURSIVE)$(GRAY)	- Removing object files ... $(RESET)\n"
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(NAME)... $(RESET)\n"
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re