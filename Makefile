# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 11:10:38 by sdiaz-ru          #+#    #+#              #
#    Updated: 2023/02/21 12:43:38 by sdiaz-ru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			=	libftprintf.a
COMPILE_NAME	=	main.out

CFLAGS			=	-Wall -Werror -Wextra
AR				=	ar -crs
RM				=	rm -fr

INCLUDE			=	ft_printf.h

SRC				=	ft_printf.c

OBJ				=	$(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

c:
			gcc $(CFLAGS) main.c $(SRC) -o $(COMPILE_NAME)

d:
			gcc -g3 $(CFLAGS) main.c $(SRC) -o $(COMPILE_NAME)

re:
		fclean all

clean: 
		$(RM) $(OBJ)

bugclean:	
			$(RM) main.out.dSYM $(COMPILE_NAME)

fclean:		clean bugclean
			$(RM) $(NAME)

.PHONY: 	all re clean fclean bonus
