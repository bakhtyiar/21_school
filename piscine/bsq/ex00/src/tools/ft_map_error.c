#include "../../includes/ft.h"
#include <unistd.h>

void	ft_put_map_error(void)
{
	write(2, "map error\n", 10);
}
