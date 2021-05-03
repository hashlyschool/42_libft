NAME		= libft.a
CC			= gcc
INCLUDE		= libft.h
FLAGS		= -Wall -Wextra -Werror -c
RM			= rm -f
AR			= ar rcs
SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
			ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
			ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
			ft_strnstr.c ft_strncmp.c ft_atoi.c

OBJS		= $(SRCS:.c=.o)
BONUS_SRCS	=
BONUS_OBJS	=

all:		$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
	$(CC) $(FLAGS) $(SRCS)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

so: re
	$(RM) libft.so
	$(CC) -fPIC $(FLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re
