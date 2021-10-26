# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 20:21:26 by ripereir          #+#    #+#              #
#    Updated: 2021/10/26 16:16:47 by ripereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isalpha ft_strnstr ft_strlen ft_memcmp

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -I.


all:$(NAME)

$(NAME): $(SRC:=.o)
			@ar rc $(NAME) $(SRC:=.o)
			@ranlib $(NAME)
clean:
	$(RM)	$(SRC:=.o) $(BONUS:=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)
