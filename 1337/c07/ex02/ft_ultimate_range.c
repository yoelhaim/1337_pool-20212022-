/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:33:09 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/10/05 19:08:54 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*copy;
	int	size;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	copy = (int *)malloc(size * sizeof(int));
	if (!copy)
		return (0);
	while (i < size)
	{
		copy[i] = min + i;
		i++;
	}
	*range = copy;
	return (size);
}
#include <stdio.h>
int main()
{
	int min = -4;
	int max = 7;
	int *range;
	int ran = ft_ultimate_range(&range,min, max);
	int i = 0;
	while (i < max - min)
	{
		printf("%d ,", range[i]);
		i++;
	}

}
