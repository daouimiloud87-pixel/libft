/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:26:30 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/17 13:12:37 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t first;
    size_t end; 
    char *str;
    if(!s1 || !set)
        return(NULL);
    first = 0;
    end = ft_strlen(s1);
    while(s1[first] && ft_strchr(set,s1[first]))
        first++;
    while(end > first && ft_strchr(set,s1[end -1]))
        end--;
    str = malloc((end - first) + 1);
    if(!str)
        return(NULL);
    i = 0;
    while(first < end)
    {
        str[i++] = s1[first++];
       
    }
    str[i] = '\0';
    return(str);
}