/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:31:44 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/15 11:54:00 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr;
    size_t i ;
    
    ptr = (const unsigned char *)s;
    i = 0;
    while(i < n)
    {
        if(ptr[i] == (unsigned char)c)
            return((void *)&ptr[i]);
        i++;
    }
    
    return(NULL);
}