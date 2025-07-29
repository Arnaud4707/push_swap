/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:49:36 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/24 01:40:34 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	ra(t_vars *vars)
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
	vars->taba[vars->sizea - 1] = tmp[0];
	while (i < vars->sizea - 1)
	{
		vars->taba[i] = tmp[i + 1];
		i++;
	}
	free(tmp);
}

void	rb(t_vars *vars)
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
	vars->tabb[vars->sizeb - 1] = tmp[0];
	while (i < vars->sizeb - 1)
	{
		vars->tabb[i] = tmp[i + 1];
		i++;
	}
	free(tmp);
}

void	rr(t_vars *vars)
{
	ra(vars);
	rb(vars);
}
