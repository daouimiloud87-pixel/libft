#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
/*int main(void)
{
    printf("%d\n",ft_strlen("hello"));
    printf("%d\n",ft_strlen("hi"));
    printf("%d\n",ft_strlen("daoui"));
}*/

/*int main(void)
{
    char c[] = "hello";
    printf("after :%s\n",c);
    ft_memset(c,'*',3);
    printf("before :%s\n",c);
}*/
/*int main(void)
{
    int arr[4] = {1,2,3,4};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    ft_memset(arr,1,sizeof(arr));
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
}*/
/*int main(void)
{
    char s[] = "hello";
    char c[10];
    
    ft_memcpy(c,s,3);
    printf("%s\n",c);
}*/
/*int main(void)
{
    char s[] = "ABCDEF";
    ft_memmove(s+1,s,3);
    printf("%s\n",s);
}*/
/*int main(void)
{
    char src[] = "hello";
    char dest[3];
    printf("%zu\n",ft_strlcpy(dest,src,3));
    printf("%s\n",dest);
}*/
/*int main(void)
{
    char dest[] = "abcdef";
    char src[] = "HU";

    printf("%zu\n", ft_strlcat(dest, src, 3));
    printf("%s\n", dest);
    return (0);
}*/
/*
int main(void)
{
    
    printf("%c\n",ft_toupper('a'));
    printf("%c\n",ft_toupper('A'));
    printf("%c\n",ft_toupper('v'));
}*/
/*int main(void)
{
    printf("%c\n",ft_tolower('A'));
    printf("%c\n",ft_tolower('A'));
    printf("%c\n",ft_tolower('V'));
}*/
/*int main(void)
{
    char str[] = "BANANA";
    printf("%s",ft_strchr(str,-1));
}*/
/*int main(void)
{
     char str[] = "BANANA";
    printf("%s\n",ft_strrchr(str,'A'));
}*/

/*int main(void)
{
    printf("%d\n",ft_strncmp("a", "b",3));
    printf("%d\n",ft_strncmp("hello", "helmvl",3));
    printf("%d\n",ft_strncmp("ab", "abc",5));
    printf("%d\n",ft_strncmp("hello", "hello",0));
    printf("%d\n",ft_strncmp("heda", "geda",3));
}*/
/*int main(void)
{
    char s[] = "AHMED";
    char *result = ft_memchr(s,321,5);
    if(result!=NULL)
        printf("%s\n",result);
    else
    printf("not found\n");
}*/
/*int main(void)
{
char a = (char)255;
unsigned char b = (unsigned char)255;

printf("%d\n", a);
printf("%u\n", b);
}*/

/*int main(void)
{
    printf("%d\n",ft_memcmp("azc","abc",0));
    printf("%d\n",ft_memcmp("azc","abc",0));
    printf("%d\n",ft_memcmp("azc","abc",0));
    printf("%d\n",ft_memcmp(,"abc",2));
    printf("%d\n",ft_memcmp(NULL,"abc",3));
}*/
/*int main(void)
{
    char s[] = "AHMED";
    char *result = ft_strnstr(s,"",0);
    
    if(result!=NULL)
    {
        printf("%s\n",result);
        
    }
    else
    printf("not found\n");
}*/
/*int main(void)
{
    printf("%d\n",ft_atoi("     -555ljkn"));
    printf("%d\n",ft_atoi("123"));
    printf("%d\n",ft_atoi("+42"));
    printf("%d\n",ft_atoi("42ashggfca"));
     printf("%d\n",ft_atoi("abc422"));
     printf("%d\n",ft_atoi("---42"));
     printf("atoi:     %d\n", atoi("999999999999999999999"));
    printf("ft_atoi:  %d\n", ft_atoi("999999999999999999999"));
}*/
/*int main(void)
{
    int *arr;
    arr = ft_calloc(3,sizeof(int));
    printf("%d %d %d\n",arr[0],arr[1],arr[2]);
    free(arr);
    arr = NULL;
    
}*/
/*int main()
{
    int x=5;
    char *h = (char *)&x;
    int arr[] = {12,5,8,19,3};
    ft_memset(&h[0],19516789%256,1);
    ft_memset(&h[1],19516789/256%256,1);
    ft_memset(&h[2],19516789/256/256%256,1);
    ft_memset(&h[3],19516789/256/256/256%256,1);

    
    printf( "%d",x);
    
    
}*/
/*int main()
{
    int x=5;
    char *h = (char *)&x;
    int arr[] = {12,5,8,19,3};
    ft_memset(&h[0],70000%256,1);
     ft_memset(&h[1],70000/256%256,1);
          ft_memset(&h[2],(70000/(256*256))%256,1);
               ft_memset(&h[3],(70000/(256*256*256))%256,1);



    
    printf( "%d\n",x);
    
    
}*/
/*int main(void)
{
    
    printf("%s\n",ft_strdup("FC"));
    printf("%s\n",ft_strdup("42"));
    printf("%s\n",ft_strdup("\t\n"));

}*/
/*int main(void)
{
    printf("%s\n",ft_substr("hello",0,5));
    printf("%s\n",ft_substr("hello",10,3));
    printf("%s\n",ft_substr("A", 1, 10));
        printf("%s\n",ft_substr("Hello", 10, 3));
     printf("%s\n",ft_substr("Hello",5, 3));    

}*/
/*int main(void)
{
    printf("1: %s\n",ft_strjoin("hello"," world"));
    printf("2: %s\n",ft_strjoin(""," world"));
    printf("3: %s\n",ft_strjoin("hello",""));
    printf("4: %s\n",ft_strjoin("NULL","  "));
    printf("5: %s\n",ft_strjoin("a","b"));
    printf("5: %s\n",ft_strjoin("42","1337"));
    printf("5: %s\n",ft_strjoin("hello\n","world"));
    printf("6: [%s]\n",ft_strjoin("",""));
    printf("5: %s\n",ft_strjoin("42","1337"));
 
}*/


/*int main(void)
{

printf("%s\n",ft_strtrim("bachellobca","abc"));
printf("%s\n",ft_strtrim("xxxxxxx","x"));

}*/
/*int main(void)
{
    printf("%s\n",ft_itoa(456));
    printf("%s\n",ft_itoa(2147483647));
}*/

/*int main(void)
{
    char    **words;
    size_t  i;

    words = ft_split("", ' ');
    if (!words)
    {
        printf("Returned NULL\n");
        return (1);
    }
    i = 0;
    while (words[i])
    {
        printf("words[%zu] = %s\n", i, words[i]);
        free(words[i]);
        i++;
    }
    printf("Number of words: %zu\n", i);
    free(words);
    return (0);
}*/

/*char make_upper(char c)
{
    if(c >= 'a' && c <= 'z')
        return(c - 32);
    return(c);
}

int main(void)
{
    char(*f)(char);
    f = make_upper;
    printf("%c\n",f('a'));
}*/
/*char transfor(unsigned int i , char c)
{
    if(c >= 'a' && c <= 'z')
        return(c - 32);
    return (c);#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (!dest || !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
}
int main(void)
{
    char *result;
    result = ft_strmapi("hello",transfor);
    printf("%s\n",result);

}*/
/*int main(void)
{

    ft_putnbr_fd(100,1);
}*/
/*int main(void)
{
    t_list *node;
    node = ft_lstnew("hello");
    if(!node)
        return(1);
    printf("%s\n",node->content);
    printf("%p\n",node->next);
        printf("Struct size: %zu\n", sizeof(t_list));

    free(node);
}*/

/*int main(void)
{
    t_list *lst;
    t_list *new;
   lst = ft_lstnew("hello");
    new = ft_lstnew("world");
        ft_lstadd_front(&lst, new);
 printf("After: %s\n", (char *)lst->content);
    printf("Next: %s\n", (char *)lst->next->content);
    free(new);
    free(lst);
}*/

/*int main(void)
{
    t_list *lst;
    t_list *node1;
    t_list *node2;
    t_list *last;
    lst = ft_lstnew("hello");
    node1 = ft_lstnew("world");
    node2 = ft_lstnew("1337");
    lst -> next = node1;
    node1 ->next = node2;
    last = ft_lstlast(lst);

    printf("Size: %s\n",last->content);
}*/
/*int main(void)
{
    printf("%d\n",ft_isascii(129));
    printf("%d\n",ft_isascii(1));
    printf("%d\n",ft_isascii(150));
}*/
/*int main(void)
{
    int  str[6] = {1,2,3,4,5};
    ft_memset(str+8,1,4);
    printf("%d %d %d %d\n ",str[0],str[1],str[2],str[3]);
    return(0);
}*/
/*int main(void)
{
    int c = 5;
    ft_memset(&c,-1,2);
    printf("%d\n",c);
}*/
/*int main(void)
{
     int x=5;
    char *h = (char *)&x;
    ft_memset(&h[0],70000%256,1);
    ft_memset(&h[1],70000/256%256,1);
    ft_memset(&h[2],(70000/(256*256))%256,1);
    printf("%d\n",x);
}*/
/*int main(void)
{
    char set[] = "hello";
    ft_memset(set,'o',6);
    printf("%s\n",set);
}*/
/*int main(void)
{
    char s[] = "hello";
    ft_bzero(s,1);
    write(1,&s,5);
    return (0);
}*/

/*int main(void)
{
    char s[]= "hello";
    char d[10];
    ft_memcpy(d,s,5);
    printf("%s\n",d);

}*/
/*int main(void)
{
    int s[] = {1,5,6,9,7};
    unsigned char *p =ft_memchr(s,5,5);
    if(p!=NULL)
        printf("%s\n",*p);
    else 
    printf("error");
    return(0);
}*/
 /*int main(void)
 {
    int s1[] = {1,4,6,7};
    int s2[] = {1,4,9,7};
    printf("%d\n",ft_memcmp(s1,s2,sizeof(s2)));
 }*/
 /*int main(void)
 {
    printf("%zu\n",ft_strlen(NULL));
 }*/
 /*int main(void)
 {
    
    printf("%s\n",ft_strrchr("",'\0'));

    printf("%s\n",ft_strrchr("hello",'l'));
 }*/
 /*int main(void)
 {
   char	s1[] = {(char)200, '\0'};
	char	s2[] = {(char)100, '\0'};

	printf("strcmp: %d\n", ft_strncmp(s1, s2,8));
	printf("Without cast: %d\n", s1[0] - s2[0]);
	printf("With cast: %d\n",
		(unsigned char)s1[0] - (unsigned char)s2[0]);
	return (0);

 }*/
 