/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:35:35 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/14 19:01:18 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char *ft_strrchr(const char *s,int c)
{
    size_t i;

    i = 0;
    while(s[i])
        i++;
    if((unsigned char)c == '\0')
        return((char *)&s[i]);
    while(i > 0)
    {
        i--;
        if(s[i] == (unsigned char)c)
            return((char *)&s[i]);
    }
    return(NULL);
}