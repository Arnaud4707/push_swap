/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_big_number_part2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 02:40:11 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/30 02:41:17 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	a_delta(t_vars *vars, int *tmp, int i)
{
	int	delta[2];

	if (vars->taba[0] > vars->tabb[i])
	{
		delta[0] = vars->taba[0] - vars->tabb[i];
		delta[1] = i;
	}
	else
	{
		delta[0] = vars->tabb[i] - vars->taba[0];
		delta[1] = i;
	}
	if (delta[0] < tmp[0])
	{
		tmp[0] = delta[0];
		tmp[1] = delta[1];
	}
}

void	calcule_a_part2(t_vars *vars, int *tmp, int id, int p)
{
	if (vars->taba[0] < vars->tabb[id] && p == 0)
		tmp[1] += 1;
	if (vars->taba[0] > vars->tabb[id] && p == 1)
	{
		tmp[1] = (vars->sizeb - 1) - id;
		tmp[1] += 1;
	}
	if (p == 1 && vars->taba[0] < vars->tabb[id])
		tmp[1] = (vars->sizeb - 1) - id;
	while (tmp[1])
	{
		if (p == 0)
			print_rb(vars);
		else
			print_rrb(vars);
		tmp[1] -= 1;
	}
}

void	calcule_a(t_vars *vars)
{
	int	i;
	int	p;
	int	tmp[2];
	int	id;

	i = 0;
	tmp[1] = 0;
	if (vars->taba[0] > vars->tabb[0])
		tmp[0] = vars->taba[0] - vars->tabb[0];
	else
		tmp[0] = vars->tabb[0] - vars->taba[0];
	while (i < vars->sizeb)
	{
		a_delta(vars, tmp, i);
		i++;
	}
	id = tmp[1];
	if ((id + 1) <= (vars->sizeb / 2))
		p = 0;
	else
		p = 1;
	calcule_a_part2(vars, tmp, id, p);
}

void	calcule_b(t_vars *vars)
{
	int	i;
	int	p;
	int	tmp[2];
	int	id;

	i = 0;
	tmp[1] = 0;
	if (vars->taba[0] > vars->tabb[0])
		tmp[0] = vars->taba[0] - vars->tabb[0];
	else
		tmp[0] = vars->tabb[0] - vars->taba[0];
	while (i < vars->sizea)
	{
		b_delta(vars, tmp, i);
		i++;
	}
	id = tmp[1];
	if ((id + 1) <= (vars->sizea / 2))
		p = 0;
	else
		p = 1;
	calcule_b_part2(vars, tmp, id, p);
}
