/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup_nb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:39:27 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/02 15:13:22 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup_nb(t_stack *a)
{
	int	*str;
	int	size;
	int	i;
	int	j;

	i = 0;
	str = create_array_from_stack_a(a);
	size = ft_lstsize(a);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (str[i] == str[j])
			{
				ft_putstr_fd("ERROR, Duplicate Numbers Found\n", 2);
				exit (1);
			}
			j++;
		}
		i++;
	}
	free (str);
}

// int main()
// {
// 	t_stack *a;
// 	t_stack *b;
// 	t_stack *c;

// 	a = ft_lstnew(ft_atoi("15"));
// 	b = ft_lstnew(ft_atoi("63"));
// 	c = ft_lstnew(ft_atoi("1"));

// 	a->next = b;
// 	b->next = c;
// 	c->next = NULL;
// 	check_dup_nb(a);
// }
