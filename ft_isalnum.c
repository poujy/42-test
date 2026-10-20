#include "libft.h"
int	ft_isalnum(int c)
{
    if (c == ft_isalpha(c) || ft_isdigit(c))
        return(1);
    return(0);
}

#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_isalnum('5'));
}