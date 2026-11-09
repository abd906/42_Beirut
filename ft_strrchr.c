char *ft_strrchr(const char *str, int c)
{
    int i;
    int l;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            l = i;
        i++;
    }
    return str + i;
}
