/* #include "../inc/push_swap.h"

t_stack    *parser(char **argv)
{
    t_stack *new;
    t_stack *a;
    int i;

    i = 0;
    while(argv[i])
    {
        new = ft_stacknew(argv[i]);
        ft_stackadd_back(&a, new);
        free(new);
        i++;
    }
    return (a);
} */