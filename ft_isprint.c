
int ft_isprint(int c)
{
    if ((c > 31 && c < 127) || (c < 14 && c > 8))
        return 1;
    return 0;
}
