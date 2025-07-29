/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:51:23 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/29 23:33:55 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	f(t_vars *vars)
{
	if (vars->taba[0] > vars->taba[1]
		&& vars->taba[1] > vars->taba[2])
	{
		print_sa(vars);
		print_rra(vars);
	}
	else if (vars->taba[0] > vars->taba[1]
		&& vars->taba[1] < vars->taba[2] && vars->taba[0] > vars->taba[2])
		print_ra(vars);
	else if (vars->taba[0] < vars->taba[1]
		&& vars->taba[1] > vars->taba[2] && vars->taba[0] < vars->taba[2])
	{
		print_rra(vars);
		print_sa(vars);
	}
	else if (vars->taba[0] < vars->taba[1]
		&& vars->taba[1] > vars->taba[2] && vars->taba[0] > vars->taba[2])
		print_rra(vars);
	else if (vars->taba[0] > vars->taba[1] && vars->taba[0] < vars->taba[2])
		print_sa(vars);
	if (vars->sizeb == 2)
	{
		if (vars->tabb[0] > vars->tabb[1])
			print_sb(vars);
	}
}

void	small_number_3(t_vars *vars)
{
	if (vars->sizea < 2)
		return ;
	else if (vars->sizea == 2)
		print_sa(vars);
	else if (vars->sizea == 3)
	{
		f(vars);
	}
}

void	small_number_4_5(t_vars *vars)
{
	if (vars->sizea == 4)
	{
		pull_b(vars, vars->sizea - 1);
		pull_a(vars);
	}
	else if (vars->sizea == 5)
	{
		pull_b(vars, vars->sizea - 2);
		pull_b(vars, vars->sizea - 1);
		pull_a(vars);
	}
}
