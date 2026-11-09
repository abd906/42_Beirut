void *ft_memcpy(void *dest, const void *src, int size)
{
    int i;
    unsigned char* d;
    const unsigned char* s;
    
    s = (const unsigned char*)src;
    d = ( unsigned char*)dest;
    if (d < s)
    {
        i = 0;
        while (i < size)
        {
            d[i] = s[i];
            i++;
        }
    }
    else if (s > d)
    {
        i = size - 1;
        while (i >= 0)
        {
            d[i] = s[i];
            i--;
        }
    }
    return dest;
}