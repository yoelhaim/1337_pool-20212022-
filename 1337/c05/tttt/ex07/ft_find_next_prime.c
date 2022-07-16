/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:55:57 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/10/04 21:16:02 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int			i;
	long int	root;
	long int	num;

	num = nb;
	if (num <= 1)
		return (0);
	else if (num == 2)
		return (1);
	i = 2;
	root = 1;
	while (root * root <= num)
	{
		if (num % i == 0)
			return (0);
		root++;
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(12));

}*/
