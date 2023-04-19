NAME = libft.a
PART1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c

PART2 =
BONUS =
SRC = ${PART1} 
OBJS = ${SRC:.c=.o}
HEADER = libft.h
INCLUDE = -I .
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

%.o:%.c
		${CC} ${FLAGS} ${INCLUDE} -c -o $@ $^

$(NAME): ${OBJS} ${HEADER}
		ar rcs ${NAME} ${OBJS} ${HEADER}

all:    ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

tclean: clean
		${RM} teste

re: fclean all

teste:	main.c ${NAME}
		${CC} ${FLAGS} ${INCLUDE} main.c ${NAME} -o teste

.PHONY: all clean fclean tclean re teste