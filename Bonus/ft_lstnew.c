/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:20:12 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/12 15:20:40 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_stack	*ft_lstnew(int nb)
{
	t_stack	*list;

	list = (t_stack *)malloc((sizeof(t_stack)));
	if (!list)
		return (NULL);
	list->nb = nb;
	list->next = NULL;
	return (list);
}
