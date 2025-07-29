/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 04:46:55 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/23 22:16:29 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	pa(t_vars *vars)
{
	int	*tmpa;
	int	*tmpb;

	if (vars->sizeb == 0)
		return ;
	tmpa = malloc ((vars->sizea + 1) * sizeof(int));
	vars->sizea += 1;
	tmpb = malloc ((vars->sizeb - 1) * sizeof(int));
	vars->sizeb -= 1;
	pafnca(vars, tmpa);
	pafncb(vars, tmpb);
}

void	pb(t_vars *vars)
{
	int	*tmpa;
	int	*tmpb;

	if (vars->sizea == 0)
		return ;
	tmpb = malloc ((vars->sizeb + 1) * sizeof(int));
	vars->sizeb += 1;
	tmpa = malloc ((vars->sizea - 1) * sizeof(int));
	vars->sizea -= 1;
	pbfncb(vars, tmpb);
	pbfnca(vars, tmpa);
}
