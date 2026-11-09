int ft_memcmp(const void *s1, const void *s2, unsigned int size)
{
    unsigned int i;
    const unsigned char* d;
    const unsigned char* s;

    i = 0;
    s = (const unsigned char*)s2;
    d = (const unsigned char*)s1;
    if (size == 0)
        return 0;
    while (i < size && d[i] == s[i])
        i++;
    if (i == size)
        return 0;
    return d[i]- s[i];
}