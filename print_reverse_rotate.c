/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 03:00:34 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/24 16:27:58 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	print_rra(t_vars *vars)
{
	rra(vars);
	write(1, "rra\n", 4);
	vars->op += 1;
}

void	print_rrb(t_vars *vars)
{
	rrb(vars);
	write(1, "rrb\n", 4);
	vars->op += 1;
}

void	print_rrr(t_vars *vars)
{
	rrr(vars);
	write(1, "rrr\n", 4);
	vars->op += 1;
}
