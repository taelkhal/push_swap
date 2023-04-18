/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:56:22 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/16 14:05:57 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg(void)
{
	ft_putstr_fd(RED"ERROR: Invalid Number\n", 2);
	exit (1);
}

void	check_nb(char **str)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			check = ft_isdigit(str[i][++j]);
			if (!check)
				error_msg();
		}
		while (str[i][j])
		{
			check = ft_isdigit(str[i][j]);
			if (!check)
				error_msg();
			j++;
		}
		i++;
	}
}
