/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:20:29 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/18 15:02:17 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	read_input(t_stack **a, t_stack **b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
        if (!str)
            return ;
		moves_checker(a, b, str);
		free(str);
		str = get_next_line(0);
	}
}
