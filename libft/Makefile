# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 12:39:18 by esozbalt          #+#    #+#              #
#    Updated: 2023/12/07 12:40:04 by esozbalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_strlen.c \
			ft_strlcat.c \

OBJS	=	$(SRCS:.c=.o)

CC	= gcc
RM	= rm -f
FLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

all:	$(NAME)

$(NAME):	
			$(CC) $(FLAGS) -c $(SRCS)
			ar -rcs $(NAME) $(OBJS)

clean:
					$(RM) $(OBJS)

fclean:	clean
					$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re