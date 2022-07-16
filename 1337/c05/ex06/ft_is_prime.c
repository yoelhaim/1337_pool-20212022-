/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:13:41 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/10/03 10:12:21 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb < 2)
		return (0);
	while (prime <= nb / 2)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(12));
}*/
