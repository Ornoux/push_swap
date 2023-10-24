/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:31:24 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/23 10:45:03 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_few_args(t_data *data, int argc, char **argv)
{
	int	i;
	int	j;
	int	index;
	(void)argv;

	data->copy_a = malloc(sizeof(int *) * argc);
	i = 0;
	while (i <= argc - 2)
	{
		j = 0;
		index = 1;
		while (j <= argc - 2)
		{
			if (data->a[i] > data->a[j])
				index++;
			j++;
		}
		data->copy_a[i] = index;
		i++;
	}
}

void	index_2_args(t_data *data, int argc, char **argv)
{
	int	i;
	int	j;
	int	index;

	(void)argc;
	data->copy_a = malloc(sizeof(int *) * len_arg_2(argv[1]));
	i = 0;
	while (i <= len_arg_2(argv[1]) - 1)
	{
		j = 0;
		index = 1;
		while (j <= len_arg_2(argv[1]) - 1)
		{
			if (data->a[i] > data->a[j])
				index++;
			j++;
		}
		data->copy_a[i] = index;
		i++;
	}
}

int	final_parse(t_data data, int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		if (verify_2args(argc, argv[1]) == 1)
			ft_exit(&data);
		len_arg_2(argv[1]);
		nbr_to_tab_2(&data, argv[1]);
		accept_reject(&data, argc, argv[1]);
		index_2_args(&data, argc, argv);
	}
	if (argc > 2)
	{
		if (verify_args(argc, argv) == 1)
			ft_exit(&data);
		nbr_to_tab_1(&data, argc, argv);
		accept_reject(&data, argc, argv[1]);
		index_few_args(&data, argc, argv);
	}
	else if (argc == 1)
		return (1);
	while (i < argc - 1)
	{
		printf("%d\n", data.copy_a[i]);
		i++;
	}
	return (0);
}

