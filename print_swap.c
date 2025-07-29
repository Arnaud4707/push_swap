/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 03:00:34 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/25 03:40:39 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	print_sa(t_vars *vars)
{
	if (vars->sizeb == 2)
	{
		if (vars->tabb[0] > vars->tabb[1])
		{
			print_ss(vars);
			vars->op += 1;
		}
		else
		{
			sa(vars);
			write(1, "sa\n", 3);
			vars->op += 1;
		}
	}
	else
	{
		sa(vars);
		write(1, "sa\n", 3);
		vars->op += 1;
	}
}

void	print_sb(t_vars *vars)
{
	sb(vars);
	write(1, "sb\n", 3);
	vars->op += 1;
}

void	print_ss(t_vars *vars)
{
	ss(vars);
	write(1, "ss\n", 3);
	vars->op += 1;
}
