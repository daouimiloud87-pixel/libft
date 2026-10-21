/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:11:19 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/17 11:20:18 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
   
    char *str;
    size_t len1;
    size_t  len2;
    size_t tot_len;
    
    if(!s1 || !s2)
        return(NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    tot_len = len1 + len2 + 1;
    str = malloc(tot_len);
    if(!str)
        return(NULL);
    ft_strlcpy(str, s1, tot_len);
    ft_strlcat(str, s2, tot_len);
    
    return(str);
}