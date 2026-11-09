void *ft_memcpy(void *dest, const void *src, int size)
{
    int i;
    unsigned char* d;
    const unsigned char* s;

    i = 0;
    s = (const unsigned char*)src;
    d = (unsigned char*)dest;
    while (i < size)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}