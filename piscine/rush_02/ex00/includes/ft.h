#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

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

int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_filter_number(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
char	*ft_get_sentence(char	*ref, char	*fdest);
#endif