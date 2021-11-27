# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnuti <pnuti@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 14:51:11 by pnuti             #+#    #+#              #
#    Updated: 2021/09/03 15:28:16 by pnuti            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CFLAGS	=	-Werror -Wall -Wextra
OBJ	=	ft_atoi.o		ft_bzero.o		ft_calloc.o	\
		ft_isalnum.o		ft_isalpha.o		ft_isascii.o	\
		ft_isdigit.o		ft_isprint.o		ft_itoa.o	\
		ft_memccpy.o		ft_memchr.o		ft_memcmp.o	\
		ft_memcpy.o		ft_memmove.o		ft_memset.o	\
		ft_putchar_fd.o		ft_putendl_fd.o		ft_putnbr_fd.o	\
		ft_putstr_fd.o		ft_split.o		ft_strchr.o	\
		ft_strdup.o		ft_strjoin.o		ft_strlcat.o	\
		ft_strlcpy.o		ft_strlen.o		ft_strmapi.o	\
		ft_strncmp.o		ft_strnstr.o		ft_strrchr.o	\
		ft_strtrim.o		ft_substr.o		ft_tolower.o	\
		ft_toupper.o		ft_tobin.o		ft_power.o	\
		ft_tohex.o		ft_putunbr.o		ft_putmem.o	\
		ft_allcaps.o		ft_max.o		ft_utoa.o	\
		ft_min.o		ft_subtilzero.o		ft_atol.o	\
		ft_delta.o

BONUS_OBJ=	ft_lstadd_back.o	ft_lstadd_front.o	ft_lstclear.o	\
		ft_lstdelone.o		ft_lstiter.o		ft_lstlast.o	\
		ft_lstnew.o		ft_lstsize.o		ft_lstmap.o

HEADER	=	libft.h

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^
%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) -o $@ $<
bonus: $(BONUS_OBJ)
	ar r $(NAME) $^
%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) -o $@ $<	
clean:
	rm -f $(OBJ) $(BONUS_OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
