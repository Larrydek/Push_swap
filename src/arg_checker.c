int arg_checker(char **argv)
{
    while(argv)
    {
        if ()
    }
}

char *arg_cleaner(char **argv)
{
    char **numbers;
    char *aux;
    int i;

    i = 0;

    while(argv[i])
    {
        aux = ft_strjoin(aux, argv[i]);
        aux = ft_strjoin(aux, " ");
    }
    return (aux);
}
