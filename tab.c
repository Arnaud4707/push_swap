/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 22:30:24 by amugisha          #+#    #+#             */
/*   Updated: 2025/02/05 02:52:06 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

int	*dou_tab(char *str, int *error, int*size)
{
	int		i;
	char	**tmp;
	int		*table;

	i = 0;
	if (ft_strncmp(str, "", 1) == 0)
		return (NULL);
	tmp = tb(str, error);
	if (*error == -1 && tmp == NULL)
		return (NULL);
	*size = len_tab(tmp);
	table = malloc (*size * sizeof(int));
	while (tmp[i])
	{
		table[i] = ft_atoi(tmp[i], error);
		i++;
	}
	ft_free(tmp);
	return (table);
}

char	**tb(char *str, int *error)
{
	static int	i = 0;
	int			j;
	char		**tab;

	tab = ft_split(str, ' ');
	free(str);
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (ft_atoi(tab[j], error) == ft_atoi(tab[i], error) && i != j)
			{
				*error = -1;
				ft_free(tab);
				tab = NULL;
				break ;
			}
			j++;
		}
		if (*error == -1)
			break ;
		i++;
	}
	return (tab);
}
