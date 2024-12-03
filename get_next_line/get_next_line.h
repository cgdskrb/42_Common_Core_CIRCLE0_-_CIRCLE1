#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

#include <stdlib.h>

char    *read_str(int fd, char *str)
char    *extract_line(char *str)
char    *get_remainder(char *str)
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr_nl(char *str);
size_t	ft_strlen(char *str);

#endif