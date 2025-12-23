*This project has been created as part of the 42 curriculum by ralrawaj.*

## Description

ft_printf function mimics the printf function.
ft_printf uses the libft library.
The conversions that ft_printf uses:
``%c`` prints a single character.
``%s`` prints a string.
``%d`` prints a decimal number.
``%i`` prints an integer in base 10.
``%u`` prints an unsigned decimal number.
``%x`` prints a number in hexadecimal in lowercase format.
``%X`` prints a number in hexadecimal in uppercase format.
``%%`` prints a percent sign.

## Instructions

``make`` to compile mandatory functions in the libft directory and the functions related to ft_printf.
``make fclean`` to remove all object files in the libft directory and libft.a, and the object files  related to ft_printf and ft_printf.a.
``make clean`` to remove all object files in the libft directory and the object files related to ft_printf.
``make re`` to remove all object files in the libft directory and the object files that related to ft_printf and then make them again.

## Resources

I used some websites such as Google, Stack Overflow, and GeeksforGeeks.
I also used the manual pages and asked some friends.

## Algorithm

The `ft_printf` function processes the format string character by character.
When a regular character is found, it is written directly to the standard output.
When a percent sign (`%`) is encountered, the function checks the next character
to determine the conversion type.

According to the conversion specifier, `ft_printf` retrieves the corresponding
argument using `va_arg` and calls a dedicated helper function to print it.
Each helper function prints its value and returns the number of characters written.

The total number of printed characters is accumulated and returned at the end
of the function, matching the behavior of the standard `printf`.

The implementation relies on the `write` system call and functions from the
`libft` library, without using forbidden functions.
