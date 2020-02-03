/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:15:30 by avieira           #+#    #+#             */
/*   Updated: 2020/02/03 05:19:44 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strl(const char *s)
{
	int l;

	l = 0;
	while (*s++)
		l++;
	return (l);
}

char				*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	if (!(s = malloc(sizeof(char) * (ft_strl(s1) + ft_strl(s2) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		s[j++] = s1[i++];
	i = 0;
	while (s2[i])
		s[j++] = s2[i++];
	return (s);
}

char            *ft_strdup(char *s1)
{
    char    *cpy;
    char    *temp;
    int        len;
    
    len = 0;
    while (s1[len])
        len++;
    if (!(cpy = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    temp = cpy;
    while (len--)
        *temp++ = *s1++;
    *temp = 0;
    return (cpy);
}

void    *ft_memmove(void *dst, void *src, size_t len)
{
    unsigned char        *t_dst;
    const unsigned char    *t_src;
    int                    i;
    int                    p_diff;
    
    if (!dst && !src)
        return (NULL);
    t_dst = dst;
    t_src = src;
    p_diff = (t_dst > t_src) ? -1 : 1;
    i = (t_dst > t_src) ? len - 1 : 0;
    while ((size_t)i < len && i > -1)
    {
        t_dst[i] = t_src[i];
        i += p_diff;
    }
    return (dst);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int                i;
    char            *substr;
    unsigned int    len_s;
    
    len_s = 0;
    if (!s)
        return (NULL);
    while (s[len_s])
        len_s++;
    len = (len > len_s - start) ? len_s - start : len;
    len = (start > len_s) ? 0 : len;
    if (!(substr = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    while (len-- && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = 0;
    return (substr);
}
