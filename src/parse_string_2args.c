/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_string_2args.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:28:31 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/23 11:01:18 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	how_many_minus(char *s)
{
	int	i;
	int	minus;

	i = 0;
	minus = 0;
	while (s[i])
	{
		if (s[i] == '-')
			minus++;
		i++;
	}
	return (minus);
}

int	minus_is_good(char *s)
{
	int	i;
	int	minus;
	int	j;

	i = 0;
	minus = how_many_minus(s);
	j = 0;
	if (s[i] == '-')
	{
		j++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == '-' && (numeric(s[i + 1]) == 1 && s[i - 1] == ' ' 
			&& s[i + 1] != '0'))
			j++;
		i++;
	}
	if (minus != j)
		return (1);
	return (0);
}

int	check_content(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!(numeric(s[i]) == 1 || is_space(s[i]) == 1 || s[i] == '-'))
			return (1);
		i++;
	}
	return (0);
}

int	zero_is_good(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '0' && numeric(s[i + 1]) == 1
			&& numeric(s[i - 1]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	verify_2args(int argc, char *s)
{
	(void)argc;
	if (check_content(s) == 0 && minus_is_good(s) == 0
		&& zero_is_good(s) == 0)
		return (0);
	else
	{
		printf("Error\n");
		return (1);
	}
}