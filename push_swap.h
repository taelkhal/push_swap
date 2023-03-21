/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:47:01 by taelkhal          #+#    #+#             */
/*   Updated: 2023/03/21 14:55:40 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>


typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
}					t_stack;


//libft
t_stack	*ft_lstnew(int *nb);
int	ft_lstsize(t_stack *stack_a);
void	ft_lstadd_back(t_stack **lst, t_stack *new);

void	push_a_and_b(t_stack **src, t_stack **dst);
void	swap_a_and_b(t_stack *ptr);
void	rotate_a_and_b(t_stack **list_stack);
void	rev_rotate_a_b(t_stack **list_stack);
void	sort_three(t_stack **a);
int	find_min_nb(t_stack *stack);
void	sort_five(t_stack **a, t_stack **b);
int	get_pos_nb(t_stack *a, int nb);

#endif