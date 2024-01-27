/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:59:16 by jde-clee          #+#    #+#             */
/*   Updated: 2024/01/27 21:52:30 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != (char)c && str[i])
		i++;
	if (str[i] == (char)c)
		return (str + i);
	else
		return (NULL);
}

// int main()
// {
//     const char *s = "abcdefghijk";
//     int c;

//     c = '\0';

//     printf("%s", ft_strchr(s, c));

//     return (0);
// }