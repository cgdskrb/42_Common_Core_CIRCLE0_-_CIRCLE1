#include "get_next_line.h"
#include <unistd.h>

char    *get_rem(char *str)
{
    int i;
    int j;
    char    *current;

    i = 0;
    j = 0;
    while (str[i] && str[i] != '\n')
    {
        i++;
    }
    if (!str[i])
    {
        free(current);
        return (NULL);
    }
    current = malloc(ft_strlen(str) - i + 1);
    if (!current)
        return (NULL);
    i += 1;
    j = 0;
    while (str[i])
        current[j++] = str[i++];
    current[j] = '\0';
    free(str);
    return (current);
}

char    *extract(char *str)
{
    int i;
    char    *line;

    i = 0;
    if (!str[i])
        return(NULL);
    while (str[i] && str[i] != '\n')
        i++;
    line = malloc(i + 2);
    if (!line)
        return (NULL);
    i = 0;
    while (str[i] && str[i] != '\n')
    {
        line[i] = str[i];
        i++;
    }
    if (line[i] == '\n')
    {
        line[i] = str[i];
        i++;
    }
    line[i] = '\0';
    return (line);
}

char    *read_str(int fd, char *str)
{
    int i;
    char    *tmp;

    i = 1;
    buf = malloc(BUFFER_SIZE + 1);
    if (!buf)
        return (NULL);
    while (!ft_strchr(str) && i != 0)
    {
        i = read(fd, buf, BUFFER_SIZE);
        if (i == -1)
        {
            free(buf);
            return (NULL);
        }
        buf[i] = '\0';
        str = ft_strjoin(str, buf);
    }   
    free(buf);
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
    tmp = extract(str);
    str = get_rem(str);
    return (tmp);
}