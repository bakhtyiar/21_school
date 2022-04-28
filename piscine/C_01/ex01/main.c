#include <stdio.h>
#include "ft_ultimate_ft.c"

int	main(void)
{
	int				x;
	int	*			a = &x;
	int	**			b = &a;
	int	***			c = &b;
	int	****		d = &c;
	int	*****		e = &d;
	int	******		f = &e;
	int	*******		g = &f;
	int	********	h = &g;
	int	*********	i = &h;

	scanf("%d", &x);
	ft_ultimate_ft(i);
	return (0);
}
