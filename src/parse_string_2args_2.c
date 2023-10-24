/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_string_2args_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:45:40 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/22 11:52:34 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_there_duplicate(t_data *data, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (data->a[i] != data->a[j])
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int	is_there_duplicate_2(t_data *data, char *s)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = len_arg_2(s);
	while (i <= k)
	{
		j = i + 1;
		while (j < k)
		{
			if (data->a[i] != data->a[j])
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int	accept_reject(t_data *data, int argc, char *s)
{
	if (argc > 2)
	{
		if (is_there_duplicate(data, argc) == 0)
			return (0);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc == 2)
	{
		if (is_there_duplicate_2(data, s) == 0)
			return (0);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (1);
}

int	len_arg_2(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (numeric(s[0]) == 1 || s[0] == '-')
	{
		j++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == ' ' && s[i + 1] == ' ')
			i++;
		if ((s[i] == ' ' && numeric(s[i + 1]) == 1) 
			|| (s[i] == '-' && numeric(s[i + 1]) == 1))
		{
			i++;
			j++;
		}
		i++;
	}
	return (j);
}