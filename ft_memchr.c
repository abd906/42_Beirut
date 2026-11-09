void *ft_memchr(const void *src, int c, unsigned int size)
{
    unsigned int i;
    unsigned char *str;

    i = 0;
    str = (unsigned char*) src;
    while (i < size && str[i] != c)
        i++;
    if ( i == size)
        return NULL;
    return str + i;
}
