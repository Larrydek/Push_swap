/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:16:41 by jde-clee          #+#    #+#             */
/*   Updated: 2024/08/15 04:39:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		if ((str[i + 1] < '0' || str[i + 1] > '9'))
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number * sign);
}

long	ft_atol(char *str)
{
	long	i;
	long	sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		if ((str[i + 1] < '0' || str[i + 1] > '9'))
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return ((long)INT_MAX + 1);
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number * sign);
}

// int main()
// {
//     printf("%d\n", ft_atoi(" --123a-bc4"));
//     printf("%d", atoi(" --123a-bc4"));
//     return (0);
// }
