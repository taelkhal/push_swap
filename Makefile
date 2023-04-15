# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 15:01:37 by taelkhal          #+#    #+#              #
#    Updated: 2023/04/15 15:09:13 by taelkhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BS = checker
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_lstnew.c ft_lstsize.c ft_lstadd_back.c ft_putstr_fd.c \
		ft_isdigit.c ft_atoi.c swap_a_and_b.c push_a_and_b.c \
		rotate_a_and_b.c rev_rotate_a_b.c sort_nb.c utils_sort_up_to_five.c \
		sort_and_push_to_b.c get_pos_nb.c find_max_nb.c find_min_nb.c \
		place_max_nb_to_top.c check_nb.c check_dup_nb.c \
		create_array_from_stack_a.c fill_stack.c ft_strjoin.c ft_split.c \
		push_swap.c ft_strlen.c ft_strdup.c

SRCS_BS = Bonus/get_next_line.c Bonus/get_next_line_utils.c Bonus/ft_strcmp.c\
			Bonus/ft_lstnew.c Bonus/ft_lstsize.c Bonus/ft_lstadd_back.c Bonus/ft_putstr_fd.c \
			Bonus/ft_isdigit.c Bonus/ft_atoi.c Bonus/swap_a_and_b_bonus.c Bonus/push_a_and_b_bonus.c \
			Bonus/rotate_a_and_b_bonus.c Bonus/rev_rotate_a_b_bonus.c Bonus/check_nb_bonus.c Bonus/check_dup_nb_bonus.c \
			Bonus/create_array_from_stack_a.c Bonus/fill_stack.c Bonus/ft_strjoin.c Bonus/ft_split.c \
			Bonus/push_swap_bonus.c


OBJS = $(SRCS:.c=.o)

OBJS_BS = $(SRCS_BS:.c=.o)

all : $(NAME)

bonus : $(NAME_BS)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(NAME_BS) : $(OBJS_BS)
	$(CC) $(FLAGS) $(OBJS_BS) -o $(NAME_BS)

clean :
	rm -rf $(OBJS)
	rm -rf $(OBJS_BS)
	
fclean : clean
	rm -rf $(NAME)
	rm -rf $(NAME_BS)

re : fclean all
