/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:47:01 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/09 12:57:34 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

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
// int	ft_atoi(const char *str);
char	*ft_strjoin(char *s1, char *s2);
long	ft_atoi(const char *str);
// char	*ft_strjoin(char const *s1, char const *s2);
// static int	ft_strlen(const char *s);
int	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);


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
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
int		find_min_nb(t_stack *stack);
void	sort_five(t_stack **a, t_stack **b);
int		get_pos_nb(t_stack *a, int nb);
void	sort_up_to_five(t_stack **a, t_stack **b, int chank);
int		*fill_tab(t_stack *a);
void	sort_and_push_to_b(t_stack **a, t_stack **b, int *tab, int chank);
int 	find_max_nb(t_stack *stack);
void	place_max_nb_to_top(t_stack **stack);
void	check_nb(char **str);
int		*create_array_from_stack_a(t_stack *a);
void	check_dup_nb(t_stack *a);
void	fill_stack(t_stack **a, char **str);
void	free_stack(t_stack **stack);
void	free_strs(char **str);


#endif
