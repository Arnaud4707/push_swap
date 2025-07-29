/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:11:59 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/27 00:35:42 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	trie_negatif(t_vars *vars)
{
	while (is_trie(vars) != 0)
	{
		if (vars->taba[0] < 0)
			print_pb(vars);
		else
			print_ra(vars);
	}
	while (vars->sizeb)
		print_pa(vars);
}

void	magie(t_vars *vars, int max_bits, int size)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = vars->taba[0];
			if (((num >> i) & 1) == 1)
				print_ra(vars);
			else
				print_pb(vars);
			j++;
		}
		while (vars->sizeb)
			print_pa(vars);
		i++;
	}
	//trie_negatif(vars);
}

void	comp(t_vars *vars, int *tmp)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (i < vars->sizea)
	{
		count = 0;
		j = 0;
		while (j < vars->sizea)
		{
			if (vars->taba[i] > tmp[j])
				count++;
			j++;
		}
		vars->taba[i] = count;
		i++;
	}
}

void	get_id(t_vars *vars)
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = malloc (vars->sizea * sizeof(int));
	while (i < vars->sizea)
	{
		tmp[i] = vars->taba[i];
		i++;
	}
	comp(vars, tmp);
	free(tmp);
}

void	big_number(t_vars *vars)
{
	int	size;
	int	max_num;
	int	max_bits;

	//get_id(vars);
	size = vars->sizea;
	max_num = size -1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	magie(vars, max_bits, size);
}