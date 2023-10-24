/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_string_args.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:38:40 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/23 11:04:07 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verify_numeric_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= argc - 1)
	{
		j = 0;
		if (numeric(argv[i][j]) == 1 || is_space(argv[i][j]) == 1)
			j++;
		else
			return (1);
		i++;
	}
	return (0);
}

int	zero_is_good_2(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	while (i <= argc - 1)
	{
		j = 0;
		len = ft_strlen(argv[i]);
		while (j <= len)
		{
			if (argv[i][j] == '0' && numeric(argv[i][j + 1]) == 1
				&& numeric(argv[i][j - 1]) == 0)
				return (1);
			if (argv[i][j] == '0' && argv[i][j - 1] == '-')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	minus_is_good_2(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	while (i <= argc - 1)
	{
		j = 0;
		len = ft_strlen(argv[i]);
		while (j <= len)
		{
			if (len == 1 && argv[i][j] == '-')
				return (1);
			if (argv[i][j] == '-' && j != 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	verify_args(int argc, char **argv)
{
	if (verify_numeric_args(argc, argv) == 0
		&& minus_is_good_2(argc, argv) == 0
		&& zero_is_good_2(argc, argv) == 0)
		return (0);
	else
	{
		printf("Error\n");
		return (1);
	}
}
