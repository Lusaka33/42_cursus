/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:46:39 by adrossig          #+#    #+#             */
/*   Updated: 2020/09/07 13:51:51 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# define MAXBITS 100
# define INFINITY 9999
# define MAX 10
# define KO -1
# define OK 0

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>

# include "ft_array.h"
# include "ft_dict.h"
# include "ft_graph.h"
# include "get_next_line.h"
# include "ft_vector.h"

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_isascii(int i);
int				ft_iscntrl(int i);
int				ft_isdigit(int i);
int				ft_isprint(int i);
int				ft_isblank(int i);
int				ft_isalpha(int i);
int				ft_isgraph(int i);
int				ft_islower(int i);
int				ft_ispunct(int i);
int				ft_isspace(int i);
int				ft_isupper(int i);
int				ft_tolower(int i);
int				ft_toupper(int i);
int				ft_isalnum(int i);
int				ft_is_prime(int nbr);
int				ft_lstsize(t_list *lst);
int				ft_fibonacci(int index);
int				ft_bintodec(int binary);
int				ft_atoi(const char *str);
int				ft_bintohexa(int binary);
int				ft_bintooctal(int binary);
int				ft_palindrome(int number);
int				ft_lcm(int nbr1, int nbr2);
int				ft_gcd(int nbr1, int nbr2);
int				ft_dectooctal(int decimal);
int				ft_power(int nbr, int power);
int				ft_todec(char *str, int base);
int				ft_int_length_uimax(uintmax_t n);
int				ft_surface(int width, int height);
int				value_len(uintmax_t nb, int base);
int				ft_perimeter(int width, int height);
int				ft_charset(char str, char *charset);
int				ft_open_files(char *files, char right);
int				ft_strequ(const char *s1, const char *s2);
int				ft_strcmp(const char *str1, const char *str2);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
int				ft_strncmp(const char *str1, const char *str2, size_t i);
double			ft_sqrt(double nbr);
void			ft_putnbr(int nb);
void			ft_strclr(char *s);
void			ft_putchar(char c);
void			ft_strdel(char **as);
void			ft_memdel(void **ap);
void			ft_armstrong(int num);
void			ft_swap(int *a, int *b);
void			*ft_memalloc(size_t size);
void			ft_putendl(const char *s);
void			ft_putstr(const char *str);
void			ft_lst_putstr(t_list *elem);
void			ft_insertsort(int *a, int b);
void			ft_selectsort(int *a, int b);
void			ft_putnbr_fd(int n, int fd);
void			ft_bzero(void *s, size_t n);
void			ft_bubblesort(int *a, int b);
void			ft_lst_putendl(t_list *elem);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putendl_fd(const char *s, int fd);
void			*ft_calloc(size_t count, size_t size);
void			ft_crypt_str(int decalage, char *tab);
void			ft_striter(char *s, void (*f)(char *));
void			ft_lst_putstr_fd(t_list *elem, int fd);
void			*ft_memset(void *str, int i, size_t n);
void			ft_uncrypt_str(int decalage, char *tab);
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstadd_front(t_list **alst, t_list *new);
void			*ft_memchr(const void *str, int c, size_t n);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			*ft_memccpy(void *str1, const void *str2, int c, size_t n);
char			*ft_itoa(int n);
char			*ft_strrev(char *str);
char			*ft_files_input(int fd);
char			*ft_strnew(size_t size);
char			**ft_strfree(char **str);
char			ft_read_files(char *files);
char			*ft_dectohexa(int decimal);
char			*ft_strdup(const char *str);
char			*ft_itoa_uimax(uintmax_t nb);
char			**ft_split(const char *s, char c);
char			*ft_strchr(const char *str, int c);
char			*ft_toupper_str(char *str, int len);
char			*ft_tolower_str(char *str, int len);
char			*ft_strrchr(const char *str, int c);
char			*ft_strndup(const char *s, size_t n);
char			*ft_itoa_base(intmax_t value, int base);
char			*ft_strnjoin(char *s1, char *s2, int n);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strmap(const char *s, char(*f)(char));
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s1, const char *set);
char			*ft_ftoa(long double f, int precision, int dot);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_strncpy(char *dest, const char *src, size_t i);
char			*ft_strncat(char *dest, const char *src, size_t n);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char			*ft_strnstr(const char *haystack, const char *needle, size_t n);
char			*ft_tohexa(char *base, unsigned long nbr, unsigned long lenght);
long long		ft_abs(long long n);
long long		ft_octaltobin(int octal);
long long		ft_octaltodec(int octal);
long long		ft_dectobin(int decimal);
long long		ft_hexatooctal(char *hex);
long long		ft_dectobin_recursive(int decimal);
size_t			ft_lstlenght(t_list *list);
size_t			ft_strlen(const char *str);
size_t			ft_strnlen(const char *s, char c);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstappend(t_list *head, t_list *last);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
