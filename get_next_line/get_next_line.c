#include "get_next_line.h"
#include <unistd.h>

char    *get_rem(char *str)
{
    int i;
    int j;
    char    tmp;

    i = 0;
    j = 0;
    while (str[i] && str[i] != '\n')
    {
        i++;
    }
    if (!str[i])
    {
        free(tmp);
        return (NULL);
    }
    tmp = malloc(ft_strlen(str) - i + 1);
    if (!tmp)
        return (NULL);
    i += 1;
    j = 0;
    while (str[i])
        tmp[j++] = str[i++];
    tmp[j] = '\0';
    free(str);
    return (tmp);
}

char    *fill_line(char *str)
{
    int i;
    char    *tmp;

    i = 0;
    if (!str[i])
        return(NULL);
    while (str[i] && tmp[i] != '\n')
        i++;
    tmp = malloc(i + 2);
    if (!tmp)
        return (NULL);
    i = 0;
    while (str[i] && str[i] != '\n')
    {
        tmp[i] = str[i];
        i++;
    }
    if (tmp[i] == '\n')
    {
        tmp[i] = str[i];
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}

char    *read_str(int fd, char *str)
{
    int i;
    char    *tmp;

    i = 1;
    tmp = malloc(BUFFER_SIZE + 1);
    if (!tmp)
        return (NULL);
    while (!ft_strchr(str) && i != 0)
    {
        i = read(fd, tmp, BUFFER_SIZE);
        if (i == -1)
        {
            free(tmp);
            return (NULL);
        }
        tmp[i] = '\0';
        str = ft_strjoin(str, tmp);
    }   
    free(tmp);
    return (str);
}

char    *get_next_line(int fd)
{   
    static char *str
    char    *tmp

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    str = read_str(fd, str);
    if (!tmp)
        return (NULL);
    tmp = fill_line(str);
    str = get_rem(str);
    return (tmp);
}