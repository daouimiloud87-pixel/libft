/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:57:42 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/14 12:25:35 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char *dest,const char *src,size_t size)
{
    size_t i;
    size_t src_len;
    
    src_len = 0;
     
    while(src[src_len])
        src_len++;
    i = 0;
    while(src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }    
    dest[i] = '\0';
    return(src_len);
}