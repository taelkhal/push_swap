/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup_nb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:39:27 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/12 15:13:53 by taelkhal         ###   ########.fr       */
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
				ft_putstr_fd(RED"ERROR: Duplicate Numbers Found\n", 2);
				exit (1);
			}
			j++;
		}
		i++;
	}
	free (str);
}
