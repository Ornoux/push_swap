/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_to_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 04:07:42 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/21 10:44:30 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// plusieurs argc

int	len_args(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i <= argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

void	nbr_to_tab_1(t_data *data, int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	data->a = malloc(sizeof(int *) * len_args(argc, argv) + 1);
	while (i <= argc - 2)
	{
		data->a[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	data->a[i] = 0;
}

void	nbr_to_tab_2(t_data *data, char *s)
{
	char	**dest;
	int		i;
	int		j;

	dest = ft_split(s, ' ');
	i = 0;
	while (dest[i])
		i++;
	data->a = malloc(sizeof(int *) * i + 1);
	j = 0;
	while (j <= i - 1)
	{
		data->a[j] = ft_atoi(dest[j]);
		j++;
	}
	data->a[j] = 0;
}

