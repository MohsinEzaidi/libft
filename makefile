# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 by mezzaidi               #+#    #+#                  #
#                                                 ###   ########.fr            #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCDIR = .
OBJDIR = obj

SOURCES = atoi.c \
          bzero.c \
          calloc.c \
          isalnum.c \
          isalpha.c \
          isascii.c \
          isdigit.c \
          isprint.c \
          memchr.c \
          memcmp.c \
          memcpy.c \
          memmove.c \
          memset.c \
          split.c \
          strchr.c \
          strdup.c \
          strjoin.c \
          strlcat.c \
          strlcpy.c \
          strlen.c \
          strncmp.c \
          strnstr.c \
          strrchr.c \
          strtrim.c \
          substr.c \
          tolower.c \
          toupper.c

OBJECTS = $(SOURCES:%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re