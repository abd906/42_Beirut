
void *ft_memset( void *s, int c, unsigned int n)
{
    unsigned int i;
    unsigned char  *p;

    p = (unsigned char *) s;
    i = 0;
    while (i < n)
    {
       p[i] = c;
       i++;
    }
    return s;
}