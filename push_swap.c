/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:12:21 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/09 14:46:05 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	sort_stack(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (check_if_sorted(*a))
		exit (0);
	if (size == 2 && !check_if_sorted(*a))
		sort_two(a);
	else if (size == 3 && !check_if_sorted(*a))
		sort_three(a);
	else if (size > 3 && size < 6 && !check_if_sorted(*a))
		sort_five(a, b);
	else if (size <= 100 && !check_if_sorted(*a))
		sort_up_to_five(a, b, 13);
	else if (size <= 500 && !check_if_sorted(*a))
		sort_up_to_five(a, b, 34);
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
		sort_stack(&a, &b);
	}
	return (0);
}
