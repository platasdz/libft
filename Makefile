# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: platas <platas@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 12:30:26 by platas            #+#    #+#              #
#    Updated: 2022/10/03 18:00:54 by platas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c\
ft_bzero.c\
ft_calloc.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_itoa.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_putchar_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_putstr_fd.c\
ft_split.c\
ft_strchr.c\
ft_strdup.c\
ft_striteri.c\
ft_strjoin.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strlen.c\
ft_strmapi.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_strtrim.c\
ft_substr.c\
ft_tolower.c\
ft_toupper.c\

SRCSB = ft_lstadd_back.c\
ft_lstadd_front.c\
ft_lstclear.c\
ft_lstdelone.c\
ft_lstiter.c\
ft_lstlast.c\
ft_lstmap.c\
ft_lstnew.c\
ft_lstsize.c\

ifdef WITH_BONUS
OBJS = ${SRCS:.c=.o} ${SRCSB:.c=.o}
else
OBJS = ${SRCS:.c=.o} 
endif

NAME = libft.a

INC = libft.h

FLAGS = -Wall -Wextra -Werror

CC = gcc

.c.o:
	${CC} -c $< -o ${<:.c=.o} -I ${INC}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

bonus:
	${MAKE} WITH_BONUS=1 all;
clean:
	rm -rf ${OBJS}
	rm -rf ${SRCS:.c=.o} ${SRCSB:.c=.o}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus