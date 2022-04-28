#ifndef FT_H
# define FT_H
typedef struct s_map_params
{
	int		lines;
	int		columns;
	int		size;
	char	empty;
	char	obstacles;
	char	fill;
}				t_map_params;

typedef struct s_map_loc
{
	int	x;
	int	y;
	int	point;
}				t_map_loc;

char	*ft_strcat(char *dest, char *src);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, int n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_put_map_error(void);
char	*ft_read_until(int fd, char ref);

char	*ft_read_file(int fd, t_map_params *params);
int		**ft_map_converter(char *grid, t_map_params *params);
int		**ft_square_calc(int **map, t_map_params map_params);

#endif