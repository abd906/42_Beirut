char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != c)
        i++;
    return str + i;
}
