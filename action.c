/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 05:48:22 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/30 03:36:57 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	check(t_vars *vars)
{
	int	tri;

	tri = is_trie(vars);
	if (tri == -1)
	{
		if (vars->sizea < 4)
			small_number_3(vars);
		else if (vars->sizea < 6)
			small_number_4_5(vars);
		else
			big_number(vars);
	}
}

void	action(t_vars *vars)
{
	check(vars);
}
