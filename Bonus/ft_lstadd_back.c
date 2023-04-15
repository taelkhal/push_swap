/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:12:09 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/15 14:12:28 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*ptr;

	if (!lst)
		return ;
	else if (*lst == NULL)
		*lst = new;
	else
	{
		ptr = *lst;
		while (ptr -> next != NULL)
			ptr = ptr -> next;
		ptr -> next = new;
	}
}
