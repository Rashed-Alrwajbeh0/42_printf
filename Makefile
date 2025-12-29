NAME := libftprintf.a
LIBFT_DIR = libft
LIBFT_NAME = libft.a
CC = cc
C_FLAGS = -Wall -Wextra -Werror

C_FILES = determinr_the_var.c \
	  print_hexa_uppercase.c \
	  print_string.c \
	  ft_printf.c \
	  print_char.c \
	  print_int.c \
	  print_unsigned_int.c \
	  print_hexa_lowercase.c \
	  print_pointer.c \
	  helper_functions.c

all : $(NAME)
O_FILES = $(C_FILES:.c=.o)
%.o : %.c
	$(CC) $(C_FLAGS) -c $< -o $@
$(NAME) : $(O_FILES) 
	ar -rcs $@ $(O_FILES)
clean :
	rm -f $(O_FILES)
fclean :
	rm -f $(O_FILES) $(NAME)
re : fclean all
.PHONY : clean fclean all
