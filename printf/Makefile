NAME = libftprintf.a
SRC = 
OBJS = ${SRC:.c=.o}
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
LIBFT_PATH = libft
LIBFT = libft/libft.a

.o:.c
		@${CC} ${FLAGS} ${INCLUDE} -c -o $@ $^

# compile libft first, then copy it to the root directory and then compile the printf files and archive them together with libft into a single library.
$(NAME): ${OBJS} ${LIBFT}
		@make -C ${LIBFT_PATH}
		@cp ${LIBFT} ${NAME}
		@${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:
		@echo "Cleaning"
		@${RM} ${OBJS}

fclean: clean
		@echo "Cleaning headers"
		@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re