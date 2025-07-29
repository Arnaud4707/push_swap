/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_big_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:11:59 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/28 00:22:38 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	b_delta(t_vars *vars, int *tmp, int i)
{
	int	delta[2];

	if (vars->tabb[0] > vars->taba[i])
	{
		delta[0] = vars->tabb[0] - vars->taba[i];
		delta[1] = i;
	}
	else
	{
		delta[0] = vars->taba[i] - vars->tabb[0];
		delta[1] = i;
	}
	if (delta[0] < tmp[0])
	{
		tmp[0] = delta[0];
		tmp[1] = delta[1];
	}
}

void	calcule_b_part2(t_vars *vars, int *tmp, int id, int p)
{
	if (vars->taba[id] < vars->tabb[0] && p == 0)
		tmp[1] += 1;
	if (vars->taba[id] > vars->tabb[0] && p == 1)
	{
		tmp[1] = (vars->sizea - 1) - id;
		tmp[1] += 1;
	}
	if (p == 1 && vars->taba[id] < vars->tabb[0])
		tmp[1] = (vars->sizea - 1) - id;
	while (tmp[1])
	{
		if (p == 0)
			print_ra(vars);
		else
			print_rra(vars);
		tmp[1] -= 1;
	}
}

void	get_little_part2(t_vars *vars, int id, int p)
{
	while (id)
	{
		if (p == 0)
			print_ra(vars);
		else
			print_rra(vars);
		id -= 1;
	}
}

void	get_little(t_vars *vars)
{
	int	i;
	int	id;
	int	p;
	int	tmp;

	i = 0;
	id = 0;
	tmp = vars->taba[0];
	while (i < vars->sizea)
	{
		if (vars->taba[i] < tmp)
		{
			tmp = vars->taba[i];
			id = i;
		}
		i++;
	}
	if (id <= (vars->sizea / 2))
		p = 0;
	else
	{
		p = 1;
		id = vars->sizea - id;
	}
	get_little_part2(vars, id, p);
}

void	my_big_number(t_vars *vars)
{
	get_id(vars);
	print_pb(vars);
	print_pb(vars);
	printtab(vars);
	while (vars->sizea > 3)
	{
		calcule_a(vars);
		print_pb(vars);
		printtab(vars);
	}
	small_number_3(vars);
	while (vars->sizeb)
	{
		calcule_b(vars);
		print_pa(vars);
		printtab(vars);
	}
	get_little(vars);
}
