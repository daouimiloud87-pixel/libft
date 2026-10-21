/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:47:44 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/18 11:35:15 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t count_word(char const *s,char c)
{
    size_t i;
    size_t count;
    i = 0;
    count = 0;
    while(s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if(s[i] != '\0')
        {
            count++;
            while(s[i] != '\0' && s[i]!= c)
                i++;
        }    
    }
    return(count);
}
static char *copy_word(char const *s,size_t start,size_t len)
{
    size_t i;
    char *word;
    
    word = malloc((len + 1) * sizeof(char));
    if(!word)
        return(NULL);
    i = 0;
    while(i < len)
    {
        word[i] = s[start + i];
        i++;
    }
    word[i] = '\0';
    return (word);
}
static void free_words(char **words, size_t count)
{
    size_t i;

    i = 0;
    while(i < count)
    {
        free(words[i]);
        i++;
    }
    free(words);
}
char **ft_split(char const *s , char c)
{
    char **result;
    size_t i;
    size_t  start;
    size_t  j;
    
    if(!s)
        return(NULL);
   
   result = malloc(sizeof(char *)*(count_word(s,c) + 1));
   if(!result)
        return(NULL);
    i = 0;
    j = 0;
    while(s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if(s[i] && s[i] != c)
        {
            start = i;
            while(s[i] && s[i] != c)
                i++;
            result[j] = copy_word(s,start,i - start);
            if(!result[j])
            {
                free_words(result, j);
                return(NULL);
            }
            j++;
        }    
    }
    result[j] = NULL;
    return(result);
    
}