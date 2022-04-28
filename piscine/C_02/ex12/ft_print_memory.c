#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	if (size == 0)
	{
		return (NULL);
	}
	write(1, addr, 16);
	return (addr);
}
