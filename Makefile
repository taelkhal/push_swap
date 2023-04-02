# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 15:01:37 by taelkhal          #+#    #+#              #
#    Updated: 2023/04/02 15:05:26 by taelkhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_lstnew.c ft_lstsize.c ft_lstadd_back.c ft_putstr_fd.c \
		ft_isdigit.c ft_atoi.c swap_a_and_b.c push_a_and_b.c \
		rotate_a_and_b.c rev_rotate_a_b.c sort_nb.c utils_sort_up_to_five.c \
		sort_and_push_to_b.c get_pos_nb.c find_max_nb.c find_min_nb.c \
		place_max_nb_to_top.c check_nb.c check_dup_nb.c \
		create_array_from_stack_a.c fill_stack.c ft_strjoin.c ft_split.c \
		push_swap.c


OBJS = $(SRCS:.c=.o)

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
