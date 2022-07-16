/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yolehaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 08:11:53 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/09/28 08:25:27 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	r;

	i = 0;
	n = 1;
	r = 0;
	while (str[i] <= 32 || str[i] >= 127)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			n = -n;
		}
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r *= 10;
		r += str[i] - 48;
		i++;
	}
	return (r * n);
}
/*
#include <stdio.h>
int main(int c , char **av)
{
	printf("%d", ft_atoi(av[1]));
}
*/
