/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:31:18 by avieira           #+#    #+#             */
/*   Updated: 2020/02/03 04:24:01 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
//# define BUFFER_SIZE 5
# define MAX_FD 100

char			*ft_strjoin(char *s1, char *s2);
char			*ft_strdup(char *s1);
void			*ft_memmove(void *dst, void *src, size_t len);
char			*ft_substr(char const *s, unsigned int start, size_t len);
size_t			ft_strl(const char *str);

#endif
