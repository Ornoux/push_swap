# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 04:23:54 by nicolas           #+#    #+#              #
#    Updated: 2023/10/22 12:23:40 by nicolas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED		=	\033[31m
GRE		=	\033[32m
BLU		=	\033[34m
YEL		=	\033[33m
EOC		=	\033[0m

NAME 			= push_swap

SOURCES			=	./src
OBJECTS			=	./bin

SRCS			=	main.c \
					utils.c \
					parse_string_2args.c \
					parse_string_2args_2.c \
					parse_string_args.c \
					ft_split.c \
					nbr_to_tab.c \
					index.c \
					

OBJS			=	$(addprefix ${OBJECTS}/, $(SRCS:.c=.o))

CFLAGS			=	-Wall -Wextra -Werror -Iincludes -g
CC				=	gcc
CINCLUDES		=	-I ./includes

${OBJECTS}/%.o: ${SOURCES}/%.c
	mkdir -p $(dir $@)
	${CC} ${CFLAGS} -o $@ -c $< ${CINCLUDES}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -rf ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all
