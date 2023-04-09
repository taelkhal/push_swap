/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:56:22 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/06 14:56:48 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_nb(char **str)
{
	int	i;
	int	j;
	int check;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			check = ft_isdigit(str[i][++j]);
			if (!check)
			{
				ft_putstr_fd(RED"ERROR: Invalid Number\n", 2);
				exit (1);
			}
		}
		while (str[i][j])
		{
			check = ft_isdigit(str[i][j]);
			if (!check)
			{
				ft_putstr_fd(RED"ERROR: Invalid Number\n", 2);
				exit (1);
			}
			j++;
		}
		i++;
	}
}
