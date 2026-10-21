/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:18:02 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/17 11:18:58 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s,unsigned int start,size_t len)
{
    size_t i;
    char *str;
    if(!s)
        return(NULL);
    if(start >= ft_strlen(s))
        return(ft_strdup("")); 
    if(ft_strlen(s) - start > len)
        len = ft_strlen(s) - start;   
    
    str = malloc(len + 1);
    if(!str)
        return(NULL);
    i = 0;
    while(i < len && s[i + start])
    {
        str[i] = s[i + start];
        i++;        
    }
    str[i] = '\0';
    return(str);
}