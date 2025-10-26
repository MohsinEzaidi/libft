# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/25 11:04:02 by mezzaidi          #+#    #+#              #
#    Updated: 2025/10/26 12:11:56 by mezzaidi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

CC = CC

FLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c\
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

BONUSE = ft_lstadd_back.c\
          ft_lstadd_front.c\
          ft_lstclear.c\
          ft_lstdelone.c\
          ft_lstiter.c\
          ft_lstlast.c\
          ft_lstmap.c\
          ft_lstnew.c\
          ft_lstsize.c
          
OBJ = $(SRC:.c=.o)
BONUSE_OBJ = $(BONUSE:.c=.o)
all : $(NAME)

$(NAME) : $(OBJ)
    $(CC) $(FLAGS) $(OBJ) -o $(NAME)

bonus : $(BONUSE)
    $(CC) $(FLAGS) $(BONUSE_OBJ) -o $(NAME)
clean :
    rem -f$(OBJ)

fclean :
    rem -f$(NAME) $(OBJ)

re :
    fclean all