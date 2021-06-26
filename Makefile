NAME	= bsq

CC	= gcc

RM	= rm -f *~ include/*~ src/*~

SRCS	= src/bsq_handler.c \
	  src/check_map.c \
	  src/double_table.c \
	  src/error.c \
	  src/error_management.c \
	  src/func_col.c \
	  src/function_bsq.c \
	  src/largest_findable.c \
	  src/main.c \
	  src/my_free.c \
	  src/my_getnbr.c \
	  src/replace_display.c \
	  src/square_of_size.c 

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME)

clean:
	@	$(RM) $(OBJS)

fclean: clean
	@	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
