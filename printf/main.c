#include "ft_printf.h"

int	main(void)
{
	int		a1;
	char	*a2;

	a1 = 5;
	*a2 = "fghjk";
	printf("return value - %d\n", printf(" %p ", -1));
	printf("return value - %d\n", ft_printf(" %p ", -1));
}
