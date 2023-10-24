/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:09:06 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/24 01:58:20 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "../libft/printf/ft_printf.h"

typedef struct s_data
{
	int	*a;
	int	*copy_a;

}	t_data;

typedef struct s_lst {
	long				value;
	struct s_lst		*next;
}	t_lst;

int			is_space(char c);
int			numeric(char c);
int			ft_atoi(const char *str);
void		nbr_to_tab_1(t_data *data, int argc, char **argv);
void		nbr_to_tab_2(t_data *data, char *s);
int			count_words(char const *s, char c);
char		*copy_string(char const *s, char c, int i);
char		**ft_split(char const *s, char c);
int			check_content(char *s);
int			parse_error(void);
int			verify_2args(int argc, char *s);
size_t		ft_strlen(const char *s);
int			ft_exit(t_data *data);
int			minus_is_good(char *s);
int			zero_is_good(char *s);
int			accept_reject(t_data *data, int argc, char *s);
int			is_there_duplicate(t_data *data, int argc);
int			check_content_args(char *s);
int			verify_numeric_args(int argc, char **argv);
int			minus_is_good_2(int argc, char **argv);
int			zero_is_good_2(int argc, char **argv);
int			zero_is_good_2(int argc, char **argv);
int			verify_args(int argc, char **argv);
int			len_args(int argc, char **argv);
int			len_arg_2(char *s);
int			is_there_duplicate_2(t_data *data, char *s);
void		index_few_args(t_data *data, int argc, char **argv);
void		index_2_args(t_data *data, int argc, char **argv);
void		copy_to_tab(t_data *data, int argc, char **argv);
int			final_parse(t_data data, int argc, char **argv);
#endif






























