/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:46:26 by taelkhal          #+#    #+#             */
/*   Updated: 2023/03/05 16:19:12 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int *nb)
{
	t_stack	*list;

	list = (t_stack *)malloc((sizeof(t_stack)));
	if (!list)
		return (NULL);
	list->nb = nb;
	list->next = NULL;
	return (list);
}
