/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array_from_stack_a.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:27:34 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/16 14:06:19 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_array_from_stack_a(t_stack *a)
{
	int	*str;
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(a);
	str = malloc(sizeof(int) * size);
	while (a)
	{
		str[i] = a->nb;
		a = a->next;
		i++;
	}
	return (str);
}
