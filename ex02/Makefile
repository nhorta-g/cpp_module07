# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 18:55:25 by nuno              #+#    #+#              #
#    Updated: 2024/03/19 07:51:47 by nuno             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Array

CXX			=	c++

SRCS		=	main.cpp

CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98 #-fsanitize=address

RM			=	rm -f

OBJS		=	$(SRCS:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re