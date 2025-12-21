#include <stdio.h>
#include "ft_printf.h"
int main()
{
	int b = 4;
	int x = ft_printf("Name : %i.\nAge : %p.\n", 0, &b);
	int y = printf("Name : %i.\nAge : %p.\n", 0,&b);
	printf("#######################################3\nx : %d.\ny : %d.\n", x, y);
	return 0;
}
