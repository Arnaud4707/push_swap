/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 04:37:14 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/23 05:44:50 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	sa(t_vars *vars)
{
	int	tmp;

	if (vars->sizea < 2)
		return ;
	tmp = vars->taba[0];
	vars->taba[0] = vars->taba[1];
	vars->taba[1] = tmp;
}

void	sb(t_vars *vars)
{
	int	tmp;

	if (vars->sizeb < 2)
		return ;
	tmp = vars->tabb[0];
	vars->tabb[0] = vars->tabb[1];
	vars->tabb[1] = tmp;
}

void	ss(t_vars *vars)
{
	sa(vars);
	sb(vars);
}
