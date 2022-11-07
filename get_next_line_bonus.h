/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:35:27 by ide-albe          #+#    #+#             */
/*   Updated: 2022/11/07 16:40:12 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    GET_NEXT_LINE_BONUS_H
# define    GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_readline(int fd, char *stash);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char *stash, char *buf);
char	*ft_get_line(char *stash);
char	*get_next_line(int fd);
char	*ft_strjoinnomalloc(char *stash, char *buf, char *str);

#endif
