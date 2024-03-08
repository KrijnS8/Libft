/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 12:29:50 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/03/08 11:46:59 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

extern int		ft_isalpha(int c);
extern int		ft_isdigit(int c);
extern int		ft_isalnum(int c);
extern int		ft_isascii(int c);
extern int		ft_isprint(int c);
extern int		ft_is_integer(char *str);
extern int		ft_isspace(int c);

extern int		ft_toupper(int c);
extern int		ft_tolower(int c);
extern int		ft_atoi(const char *nptr);
extern char		*ft_itoa(int n);

extern void		ft_putchar_fd(char c, int fd);
extern void		ft_putstr_fd(char *s, int fd);
extern void		ft_putstr_arr_fd(char **arr, int size, char sep, int fd);
extern void		ft_putendl_fd(char *s, int fd);
extern void		ft_putnbr_fd(int n, int fd);

extern size_t	ft_strlen(const char *str);
extern size_t	ft_strlcpy(char *dst, const char *src, size_t size);
extern size_t	ft_strlcat(char *dst, const char *src, size_t size);
extern char		*ft_strchr(const char *s, int c);
extern char		*ft_strrchr(const char *s, int c);
extern int		ft_strcmp(const char *s1, const char *s2);
extern int		ft_strncmp(const char *s1, const char *s2, size_t n);
extern char		*ft_strnstr(const char *big, const char *little, size_t len);
extern char		*ft_strdup(const char *s);
extern char		**ft_strarr_dup(char **arr);
extern char		*ft_strjoin(const char *s1, const char *s2);
extern char		*ft_strtrim(char const *s1, char const *set);
extern char		*ft_substr(const char *s, unsigned int start, size_t len);
extern char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
extern void		ft_striteri(char *s, void (*f)(unsigned int, char*));

extern void		*ft_memset(void *s, int c, size_t n);
extern void		*ft_memcpy(void *dest, const void *src, size_t n);
extern void		*ft_memmove(void *dest, const void *src, size_t n);
extern void		*ft_memchr(const void *s, int c, size_t n);
extern int		ft_memcmp(const void *s1, const void *s2, size_t n);
extern void		*ft_calloc(size_t nmemb, size_t size);
extern void		ft_bzero(void *s, size_t n);
extern void		*ft_realloc(void *ptr, size_t size);

extern char		**ft_split(const char *s, char c);
extern size_t	ft_count_words(const char *s, char sep);
extern char		*ft_build_path(char *folder, char *file, char *extention);

extern t_list	*ft_lstnew(void *content);
extern void		ft_lstadd_front(t_list **lst, t_list *new);
extern int		ft_lstsize(t_list *lst);
extern t_list	*ft_lstlast(t_list *lst);
extern void		ft_lstadd_back(t_list **lst, t_list *new);
extern void		ft_lstdelone(t_list *lst, void (*del)(void*));
extern void		ft_lstclear(t_list **lst, void (*del)(void*));
extern void		ft_lstiter(t_list *lst, void (*f)(void *));
extern t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

extern char		*ft_get_next_line(int fd);
extern int		ft_printf(const char *str, ...);

#endif