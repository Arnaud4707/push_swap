/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_trie.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 00:30:56 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/24 04:04:04 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

int	is_trie(t_vars *vars)
{
	int	i;
	int	ok;

	i = 0;
	ok = 0;
	while (i < vars->sizea - 1)
	{
		if (vars->taba[i] > vars->taba[i + 1])
			ok++;
		i++;
	}
	if (ok == 0)
		return (0);
	else
		return (-1);
}
