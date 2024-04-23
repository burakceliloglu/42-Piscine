int *ft_split(char *str, int *array)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            array[j] = str[i];
            j++;
        }
        i++;
    }
    return (array);
}
