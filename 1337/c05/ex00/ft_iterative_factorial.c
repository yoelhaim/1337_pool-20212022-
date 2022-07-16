/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 21:04:19 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/10/03 20:06:48 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		r = i * r;
		i++;
	}
	return (r);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(4));
}*/
