#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acamaras <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 12:14:25 by acamaras          #+#    #+#              #
#    Updated: 2021/11/22 12:20:51 by acamaras         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SOURCE = *.c
OBJECT = *.o
HEADER = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCE) -I $(HEADER)
	ar -rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all