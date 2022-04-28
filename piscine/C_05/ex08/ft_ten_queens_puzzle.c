#include <unistd.h>

void	write_poses(void)
{
	int	y;
	int	x;
	int	prev_y;
	int	ch;

	y = 0;
	x = 0;
	prev_y = 0;
	while (x <= 10)
	{
		ch = y % 11 + '0';
		prev_y = y;
		write(1, &ch, 1);
		y += 2;
		x++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	write_poses();
	return (0);
}
