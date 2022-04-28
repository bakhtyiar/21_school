/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:57:29 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/16 14:57:33 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "./libft/libft.h"

typedef enum e_bool {TRUE = 1, FALSE = 0}	t_bool;

typedef struct s_convert_flags {
	char	conversion;
	t_bool	flag_align;
	t_bool	flag_0;
	t_bool	flag_space;
	t_bool	flag_plus;
	t_bool	flag_hashtag;
	int		flag_pointer;
	int		min_width;
}			t_convert_flags;

typedef struct s_format {
	char			*formatted_src;
	int				len;
	int				len_formatted;
	va_list			args_c;
	t_convert_flags	*conv_flags;
}					t_format;

int			ft_printf(const char *format, ...);
int			ft_check_all_flags(char *formatting, t_format *f_props);
void		ft_formatting(t_format *f_props);
int			ft_new_errors(t_format *f_props, int type);

t_format	*ft_start_struct(va_list args);
void		ft_reset_struct(t_format *f_props);
int			ft_end_struct(t_format *f_props);

void		ft_get_string(t_format *f_props);
void		ft_get_char(t_format *f_props);
void		ft_get_address(t_format *f_props);
void		ft_get_i_d(t_format *f_props);
void		ft_get_u_x(t_format *f_props, char *base);
void		ft_get_percent(t_format *f_props);

void		ft_pointer_flag(t_format *f_props, size_t *len);
void		ft_min_width_flag(t_format *f_props, size_t *len, t_bool flag);
void		ft_hashtag_flag(t_format *f_props, size_t *len);
void		ft_space_flag(t_format *f_props, size_t *len);
void		ft_plus_flag(t_format *f_props, size_t *len);

#endif
