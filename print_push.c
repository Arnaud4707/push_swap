/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 03:00:34 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/24 16:28:39 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	print_pa(t_vars *vars)
{
	pa(vars);
	write(1, "pa\n", 3);
	vars->op += 1;
}

void	print_pb(t_vars *vars)
{
	pb(vars);
	write(1, "pb\n", 3);
	vars->op += 1;
}
