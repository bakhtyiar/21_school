/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:11:55 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/09 15:11:58 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

char		*get_next_line(int fd);
char		*ft_strchr(char *str, int ch);
char		*ft_strjoin(char *l_stash, char *buff);
size_t		ft_strlen(char *str);

#endif
