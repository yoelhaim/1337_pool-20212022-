/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:13:14 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/10/10 09:01:39 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*copy;
	int len;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	copy = (int *)malloc(len * sizeof(int));
	if (!copy)
		return (0);
	while (i < len)
	{
		copy[i] = min + i;
		i++;
	}
	return (copy);
}
#include <stdio.h>
int	main()
{
	int	min = -4;
	int max = 7;
	int *ran = ft_range(min, max);
	int i = 0;
	while (i < max - min)
	{
		printf("%d ,", ran[i]);
		i++;
	}
}
