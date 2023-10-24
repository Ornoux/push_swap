/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 03:18:49 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/22 13:39:47 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == ' ' || c == '\f' || \
		c == '\v' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int	numeric(char c)
{
	if ((c >= '0' && c <= '9') || c == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	output;

	i = 0;
	minus = 0;
	output = 0;
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (numeric(str[i]) == 1)
	{
		output = (output * 10) + (str[i] - '0');
		i++;
	}
	if (minus % 2 == 1)
		return (output *= -1);
	return (output);
}

int	ft_exit(t_data *data)
{
	(void)data;
	exit(0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}