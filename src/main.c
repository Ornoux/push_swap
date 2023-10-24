/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:09:23 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/24 02:02:32 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;
	t_lst	*head_a;
	t_lst	*head_b;

	head_a = (t_lst *)malloc(sizeof(t_lst));
	head_b = NULL;
	if (final_parse(data, argc, argv) == 1)
	{
		printf("Error\n");
		return (0);
	}

	return (0);
}
