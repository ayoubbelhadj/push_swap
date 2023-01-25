# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 14:39:16 by abelhadj          #+#    #+#              #
#    Updated: 2023/01/25 15:42:26 by abelhadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
NAME_B 	= checker

CC		= cc
FLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

UTILS	= $(addprefix utils/, ft_atoi ft_isdigit ft_memcpy ft_memmove ft_putstr ft_split \
				ft_strcmp ft_strdup ft_strjoin ft_strlen)
STACK	= $(addprefix stack/, build free_stack stack_add_front stack_last \
				stack_new stack_size push_element get_pos)
CHECK	= $(addprefix check/, get_erreur is_duple is_integer is_out_of_range is_sorted \
				util)
RULES	= $(addprefix rules/, sa sb ss pa pb ra rb rr rra rrb rrr)

ALGO	= $(addprefix algo/, get_min_elem get_max_elem get_index_elem sort_three\
			get_index sort_five get_stack_elem sort_stack)
FILES	= $(addprefix Mandatory/, push_swap $(UTILS) $(CHECK) $(STACK) $(RULES) $(ALGO))
FILES_B	= $(addprefix Bonus/, checker_bonus $(UTILS) $(CHECK) $(STACK) $(RULES) $(ALGO))

SRC		= $(FILES:=.c)
OBJ		= $(FILES:=.o)
HEADER  = Mandatory/include/push_swap.h
INCLUDES= -I include

SRC_B		= $(FILES_B:=.c)
OBJ_B		= $(FILES_B:=.o)
HEADER_B  	= Bonus/include/checker_bonus.h

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
CURSIVE		=	\e[33;3m
RESET		=	\e[0m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@printf "$(CURSIVE)$(GRAY)	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(OBJ) $(INCLUDES)  -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

%.o: %.c $(HEADER) $(HEADER_B)
	@$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@ 

bonus: $(NAME_B)

$(NAME_B): $(OBJ_B) $(HEADER_B)
	@printf "$(CURSIVE)$(GRAY)	- Compiling $(NAME_B)... $(RESET)\n"
	@$(CC) $(OBJ_B) $(INCLUDES)  -o $(NAME_B)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

clean:
	@$(RM) $(OBJ)
	@printf "$(CURSIVE)$(GRAY)	- Removing object files ... $(RESET)\n"
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(NAME)... $(RESET)\n"
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all

clean_b:
	@$(RM) $(OBJ_B)
	@printf "$(CURSIVE)$(GRAY)	- Removing object files ... $(RESET)\n"
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"
	
fclean_b: clean_b
	@$(RM) $(NAME_B)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(NAME_B)... $(RESET)\n"
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"
	
re_b: fclean_b bonus

fc: fclean fclean_b

mb: $(NAME) $(NAME_B)

.PHONY: all clean fclean re bonus fclean_b clean_b re_b fall mb