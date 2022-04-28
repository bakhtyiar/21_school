#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	*ft_cinstr(char *str);
void	ft_putstr(char *str);
int		ft_is_number(char c);
int		ft_is_spaced(char c);
void	ft_putchar(char c);
char	*ft_strchar(char *str, char to_find);
char	*ft_get_match(char *str, char *to_find);
int		ft_valid_input(char *argv);
char	*ft_stread(char *buffer);
void	ft_init(char *argv, char *indict);
void	ft_alt_init(char *argv, char *indict);
void	ft_print_sentence(char *end);
void	ft_prepare_input(int fd);
#endif