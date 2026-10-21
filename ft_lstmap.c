/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <mdaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:33:16 by mdaoui            #+#    #+#             */
/*   Updated: 2026/10/21 11:37:27 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstmap(t_list *lst,void *(*f)(void *),void (*del)(void *))
{
    t_list *new_node;
    t_list *new_lst;
    void *content;
    
    if(!lst || !f)
        return(NULL);
    new_lst = NULL;
    
    while(lst)
    {
        content = f(lst -> content);
        new_node = ft_lstnew(content);
        if(!new_node)
        {
            del(content);
            ft_lstclear(&new_lst,del);
            return(NULL);
        }
        ft_lstadd_back(&new_lst,new_node);
        lst = lst -> next;
    }
    return(new_lst);
}