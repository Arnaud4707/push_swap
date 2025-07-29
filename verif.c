/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:42:01 by amugisha          #+#    #+#             */
/*   Updated: 2025/02/05 02:43:41 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

void	ft_join(char **join, int result)
{
	char	*rst;
	char	*tmp;

	rst = ft_itoa(result);
	tmp = ft_strjoin(*join, " ");
	if (ft_strncmp(*join, "", 1) != 0)
		free(*join);
	*join = ft_strjoin(tmp, rst);
	free(tmp);
	free(rst);
}

void	verif(int arg, char **argv, int *error, char **join)
{
	int		nb[2];
	int		result;
	char	**str;

	nb[0] = 1;
	result = 0;
	while (nb[0] < arg)
	{
		str = ft_split(argv[nb[0]], ' ');
		nb[1] = 0;
		while (str[nb[1]])
		{
			result = ft_atoi(str[nb[1]], error);
			if (result == 0 && *error == -1)
				break ;
			else
				ft_join(join, result);
			nb[1] = nb[1] + 1;
		}
		ft_free(str);
		if (result == 0 && *error == -1)
			break ;
		nb[0] = nb[0] + 1;
	}
}
