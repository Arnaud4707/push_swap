/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:24:00 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/31 22:34:45 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	invite_c(void)
{
	char	buff[11];
	size_t	j;

	j = read(0, buff, 10);
	buff[j] = '\0';
	write(1, "tu a ecrit => ", 14);
	write(1, &buff, j - 1);
}

void	init(t_vars *vars)
{
	vars->taba = NULL;
	vars->tabb = NULL;
	vars->sizea = 0;
	vars->sizeb = 0;
	vars->op = 0;
}

int	main(int arg, char **argv)
{
	static int	error = 0;
	char		*join;
	t_vars		vars;

	join = "";
	init(&vars);
	if (arg < 2)
		return (0);
	verif(arg, argv, &error, &join);
	if (error == -1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	vars.taba = dou_tab(join, &error, &(vars).sizea);
	action(&vars);
	//printtab(&vars);
	if (error == -1)
		write(2, "Error\n", 6);
	if (vars.taba)
		free(vars.taba);
	if (vars.tabb)
		free(vars.tabb);
	return (0);
}
