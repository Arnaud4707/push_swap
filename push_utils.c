/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:22:53 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/24 02:54:40 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	pafnca(t_vars *vars, int *tmpa)
{
	int	i;

	i = 1;
	tmpa[0] = vars->tabb[0];
	while (i < vars->sizea)
	{
		tmpa[i] = vars->taba[i - 1];
		i++;
	}
	free(vars->taba);
	vars->taba = tmpa;
}

void	pafncb(t_vars *vars, int *tmpb)
{
	int	i;

	i = 0;
	while (i < vars->sizeb)
	{
		tmpb[i] = vars->tabb[i + 1];
		i++;
	}
	free(vars->tabb);
	vars->tabb = tmpb;
}

void	pbfncb(t_vars *vars, int *tmpb)
{
	int	i;

	i = 1;
	tmpb[0] = vars->taba[0];
	while (i < vars->sizeb)
	{
		tmpb[i] = vars->tabb[i - 1];
		i++;
	}
	free(vars->tabb);
	vars->tabb = tmpb;
}

void	pbfnca(t_vars *vars, int *tmpa)
{
	int	i;

	i = 0;
	while (i < vars->sizea)
	{
		tmpa[i] = vars->taba[i + 1];
		i++;
	}
	free(vars->taba);
	vars->taba = tmpa;
}
