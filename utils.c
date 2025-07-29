/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 22:23:11 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/26 20:28:06 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

int	len_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	printtab(t_vars *vars)
{
	int	i;

	i = 0;
	printf("  Pile A Size %d trie en %d coup\n", vars->sizea, vars->op);
	while (i < vars->sizea)
	{
		printf("  %d\n", vars->taba[i]);
		i++;
	}
	i = 0;
	printf("  Pile b Size %d\n", vars->sizeb);
	while (i < vars->sizeb)
	{
		printf("  %d\n", vars->tabb[i]);
		i++;
	}
}
