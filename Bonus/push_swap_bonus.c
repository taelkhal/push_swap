/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:41:59 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/15 15:05:53 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_if_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->nb > stack->next->nb)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	moves_checker(t_stack **a, t_stack **b, char *str)
{
	if (!str)
		return ;
	if (!ft_strcmp(str, "sa\n"))
		sa(a);
	else if (!ft_strcmp(str, "sb\n"))
		sb(b);
	else if (!ft_strcmp(str, "ss\n"))
		ss(a, b);
	else if (!ft_strcmp(str, "pa\n"))
		pa(a, b);
	else if (!ft_strcmp(str, "pb\n"))
		pb(a, b);
	else if (!ft_strcmp(str, "ra\n"))
		ra(a);
	else if (!ft_strcmp(str, "rb\n"))
		rb(b);
	else if (!ft_strcmp(str, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(str, "rra\n"))
		rra(a);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr(a, b);
	else
		ft_putstr_fd(RED"Error\n", 2);
}

void	read_input(t_stack **a, t_stack **b)
{
	char	*str;

	while ((str = get_next_line(0)))
	{
		moves_checker(a, b, str);
		free(str);
	}
}

char	*join_numbers(char **str)
{
	int	i;
	int	j;
	char *numbers;

	i = 1;
	numbers = ft_strdup("");
	while (str[i])
	{
		j = 0;
		while (str[i][j] == ' ')
			j++;
		if (!str[i][j])
		{
			ft_putstr_fd(RED"ERROR: No Numbers Provided\n", 2);
			exit (1);
		}
		numbers = ft_strjoin(numbers, str[i]);
		numbers = ft_strjoin(numbers, " ");
		i++;
	}
	return (numbers);
}

int main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	char **str;
	char *numbers;

	if (ac >= 2)
	{
		numbers = join_numbers(av);
		str = ft_split(numbers, ' ');
		free (numbers);
		check_nb(str);
		fill_stack(&a, str);
		read_input(&a, &b);
		if (check_if_sorted(a) && b == NULL)
			ft_putstr_fd("OK\n", 1);
		else
			ft_putstr_fd("KO\n", 1);
	}
	return (0);
}
