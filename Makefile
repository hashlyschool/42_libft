NAME				= libft.a
CC					= clang
INCLUDE				= libft.h
FLAGS				= -O3 -Wall -Wextra -Werror
RM					= rm -rf
AR					= ar rcs
INC					= ./include
INC_FILE			= ./include/libft.h
#Mandatory part
SRCS_BASE_PATH		= ./mandatory/
OBJS_BASE_PATH		= ./mandatory/objs/
SRCS_BASE_NAME		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
					ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
					ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
					ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isdigit.c \
					ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c \
					ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
					ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
					ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c
SRCS_BASE			= $(addprefix $(SRCS_BASE_PATH), $(SRCS_BASE_NAME))
OBJS_BASE			= $(addprefix $(OBJS_BASE_PATH), $(SRCS_BASE_NAME:.c=.o))
#Bonus part
SRCS_BONUS_PATH		= ./bonus/
OBJS_BONUS_PATH		= ./bonus/objs/
SRCS_BONUS_NAME		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c  ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
					ft_lstmap.c
SRCS_BONUS			= $(addprefix $(SRCS_BONUS_PATH), $(SRCS_BONUS_NAME))
OBJS_BONUS			= $(addprefix $(OBJS_BONUS_PATH), $(SRCS_BONUS_NAME:.c=.o))
#Custom part
SRCS_CUSTOM_PATH	= ./custom/
OBJS_CUSTOM_PATH	= ./custom/objs/
SRCS_CUSTOM_NAME	=
SRCS_CUSTOM			= $(addprefix $(SRCS_CUSTOM_PATH), $(SRCS_CUSTOM_NAME))
OBJS_CUSTOM			= $(addprefix $(OBJS_CUSTOM_PATH), $(SRCS_CUSTOM_NAME:.c=.o))

all:				$(NAME)

$(NAME):			$(OBJS_BASE_PATH) $(OBJS_BASE) \
					$(OBJS_BONUS_PATH) $(OBJS_BONUS) \
					$(OBJS_CUSTOM_PATH) $(OBJS_CUSTOM)
	$(AR) $(NAME) $(OBJS_BASE) $(OBJS_BONUS) $(OBJS_CUSTOM)

$(OBJS_BASE_PATH)%.o: $(SRCS_BASE_PATH)%.c $(INC_FILE)
	$(CC) $(FLAGS) -I $(INC) -c $< -o $@

$(OBJS_BASE_PATH):
	mkdir -p $(OBJS_BASE_PATH)

$(OBJS_BONUS_PATH)%.o: $(SRCS_BONUS_PATH)%.c $(INC_FILE)
	$(CC) $(FLAGS) -I $(INC) -c $< -o $@

$(OBJS_BONUS_PATH):
	mkdir -p $(OBJS_BONUS_PATH)

$(OBJS_CUSTOM_PATH)%.o: $(SRCS_CUSTOM_PATH)%.c $(INC_FILE)
	$(CC) $(FLAGS) -I $(INC) -c $< -o $@

$(OBJS_CUSTOM_PATH):
	mkdir -p $(OBJS_CUSTOM_PATH)

clean:
	$(RM) $(OBJS_BASE_PATH) $(OBJS_BONUS_PATH) $(OBJS_CUSTOM_PATH)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re

# $(OBJS):	$(SRCS)
# 	$(CC) $(FLAGS) $(SRCS)

# so: 		re
# 	$(RM) libft.so
# 	$(CC) -fPIC $(FLAGS) -c $(SRCS) $(BONUS_SRCS)
# 	gcc -shared -o libft.so $(OBJS) $(BONUS_OBJS)

# bonus:		$(OBJS) $(BONUS_OBJS)
# 	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

# custom:


