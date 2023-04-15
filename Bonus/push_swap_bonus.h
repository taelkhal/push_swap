/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:09:36 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/15 15:22:44 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H


# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include "get_next_line.h"

# define RED	"\033[1m\033[31m"

typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
}					t_stack;



//libft
t_stack	*ft_lstnew(int nb);
int	ft_lstsize(t_stack *stack_a);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_putstr_fd(char *str, int fd);
int	ft_isdigit(int c);
char	*ft_strjoin(char *s1, char *s2);
long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
int		ft_strcmp(char *s1, char *s2);


// actions

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

//utils

int		*fill_tab(t_stack *a);
void	check_nb(char **str);
int		*create_array_from_stack_a(t_stack *a);
void	check_dup_nb(t_stack *a);
void	fill_stack(t_stack **a, char **str);
char	*get_next_line(int fd);

#endif