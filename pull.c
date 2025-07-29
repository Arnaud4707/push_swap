/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pull.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:14:41 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/26 23:52:36 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	get_nb(t_vars *vars, int nb, int i)
{
	int	p;

	p = 1;
	if (i <= vars->sizea / 2)
		p = 0;
	while (nb != vars->taba[0])
	{
		if (p == 0)
			print_ra(vars);
		else
			print_rra(vars);
	}
	print_pb(vars);
}

void	pull_b(t_vars *vars, int size)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	while (count < size)
	{
		i = 0;
		while (i < vars->sizea && count < size)
		{
			j = 0;
			count = 0;
			while (j < vars->sizea)
			{
				if (vars->taba[i] > vars->taba[j])
					count++;
				j++;
			}
			i++;
		}
	}
	get_nb(vars, vars->taba[i - 1], i - 1);
}

void	pull_a(t_vars *vars)
{
	small_number_3(vars);
	while (vars->sizeb)
	{
		print_pa(vars);
		print_ra(vars);
	}
}
