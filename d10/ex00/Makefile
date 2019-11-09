# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcreux <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 04:52:17 by jcreux            #+#    #+#              #
#    Updated: 2018/07/23 05:36:30 by jcreux           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: 
	gcc -c -Wall -Werror -Wextra includes/*.h srcs/*.c && ar rc libft.a *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
