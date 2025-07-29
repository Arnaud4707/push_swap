/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:29:38 by amugisha          #+#    #+#             */
/*   Updated: 2025/02/06 21:35:51 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "header.h"

int	overf(int a, char nptri, int *error)
{
	int	rest;

	rest = a * 10 + (nptri - 48);
	if (a > (INT_MAX / 10) || (a == (INT_MAX / 10)
			&& (nptri - 48) > (INT_MAX % 10)))
	{
		*error = -1;
		return (-1);
	}
	return (0);
}

void	check_digit(char nptri, int *rest, int *error)
{
	if ((nptri < 48 || nptri > 57) && nptri)
	{
		*error = -1;
		*rest = 0;
	}
}

int	f_init(int *i, int *error, int *rest, const char *nptr)
{
	*i = 0;
	*rest = 0;
	while (nptr[*i] == 32 || (nptr[*i] >= 9 && nptr[*i] <= 13))
		*i += 1;
	if (ft_strncmp(nptr, "-2147483648", 11) == 0)
	{
		*rest = -2147483648;
		return (*rest);
	}
	else if (nptr[*i] == '+' || nptr[*i] == '-')
	{
		if (nptr[*i + 1] < 48 || nptr[*i +1] > 57)
			*error = -1;
	}
	return (0);
}

int	ft_atoi(const char *nptr, int *error)
{
	int	i;
	int	rest;
	int	signe;

	signe = 1;
	if (f_init(&i, error, &rest, nptr) == -2147483648)
		return (-2147483648);
	if (nptr[i] == '-')
	{
		i++;
		signe = -1;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		if (overf(rest, nptr[i], error) == -1)
			return (0);
		rest = rest * 10 + (nptr[i] - 48);
		i++;
	}
	check_digit(nptr[i], &rest, error);
	return (rest * signe);
}
/*
int	main(void)
{
	printf("%d\n%d", atoi("-u12i3"), ft_atoi("-o12i3"));
	return (0);
}*/
