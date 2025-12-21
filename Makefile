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
	  print_pointer.c

all : $(NAME)
libft_build :
	make -C libft
O_FILES = $(C_FILES:.c=.o)
%.o : %.c ft_printf.h | libft_build
	$(CC) $(C_FLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@
$(NAME) : $(O_FILES) $(LIBFT_DIR)/$(LIBFT_NAME)
	cp $(LIBFT_DIR)/$(LIBFT_NAME) $(NAME)
	ar -rcs $@ $(O_FILES)
clean :
	rm -f $(O_FILES)
	make -C $(LIBFT_DIR) clean
fclean :
	rm -f $(O_FILES) $(NAME)
	make -C $(LIBFT_DIR) fclean
re : fclean all
.PHONY : clean fclean all
