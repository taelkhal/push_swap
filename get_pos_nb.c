/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos_nb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:48:16 by taelkhal          #+#    #+#             */
/*   Updated: 2023/03/21 14:51:26 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_pos_nb(t_stack *a, int nb)
{
	int	i;

	i = 0;
	while (a->nb != nb)
	{
		i++;
		a = a->next;
	}
	return (i);
}
