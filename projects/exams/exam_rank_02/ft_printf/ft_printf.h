#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_props {
    int width;
    int is_prec;
    int prec;
    int skip;
    char type;
} t_props;

#define WIDTH format->width
#define PREC format->prec
#define IS_PREC format->is_prec
#define SKIP format->skip
#define TYPE format->type
#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)

void init_struct(t_props *format);
int ft_isdigit(char c);
void ft_parse(const char *str, t_props *format);
char *ft_itoa(unsigned int n, int baselen);
int ft_strlen(char *str);
size_t ft_process_d(t_props *format, int n);
size_t ft_process_x(t_props *format, unsigned int n);
size_t ft_process_s(t_props *format, char *str);
size_t ft_processor(t_props *format, va_list ap);
int ft_printf(const char *str, ...);

#endif