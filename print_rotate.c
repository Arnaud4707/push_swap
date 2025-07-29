/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 03:00:34 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/24 16:28:17 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	print_ra(t_vars *vars)
{
	ra(vars);
	write(1, "ra\n", 3);
	vars->op += 1;
}

void	print_rb(t_vars *vars)
{
	rb(vars);
	write(1, "rb\n", 3);
	vars->op += 1;
}

void	print_rr(t_vars *vars)
{
	rr(vars);
	write(1, "rr\n", 3);
	vars->op += 1;
}
