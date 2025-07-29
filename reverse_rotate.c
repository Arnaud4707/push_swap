/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:49:36 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/24 00:22:55 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	rra(t_vars *vars)
{
	int	*tmp;
	int	i;

	i = 0;
	tmp = malloc (vars->sizea * sizeof(int));
	while (i < vars->sizea)
	{
		tmp[i] = vars->taba[i];
		i++;
	}
	i = 0;
	vars->taba[0] = tmp[vars->sizea - 1];
	while (i < vars->sizea - 1)
	{
		vars->taba[i + 1] = tmp[i];
		i++;
	}
	free(tmp);
}

void	rrb(t_vars *vars)
{
	int	*tmp;
	int	i;

	i = 0;
	tmp = malloc (vars->sizeb * sizeof(int));
	while (i < vars->sizeb)
	{
		tmp[i] = vars->tabb[i];
		i++;
	}
	i = 0;
	vars->tabb[0] = tmp[vars->sizeb - 1];
	while (i < vars->sizeb - 1)
	{
		vars->tabb[i + 1] = tmp[i];
		i++;
	}
	free(tmp);
}

void	rrr(t_vars *vars)
{
	rra(vars);
	rrb(vars);
}
