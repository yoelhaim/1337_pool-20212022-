/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:01:22 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/10/05 12:06:44 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	root;
	long int	num;

	num = nb;
	if (num < 0)
		return (0);
	root = 1;
	while (root * root <= num)
	{
		if (root * root == num)
			return (root);
		root++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(16));
}*/
