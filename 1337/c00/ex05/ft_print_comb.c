/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:47:51 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/09/22 13:11:32 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	is_display(int f, int s, int l)
{
	ft_putchar(f + 48);
	ft_putchar(s + 48);
	ft_putchar(l + 48);
	if (!(f == 7 && s == 8 && l == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	last;

	first = 0;
	while (first <= 7)
	{
		second = first + 1;
		while (second <= 8)
		{
			last = second + 1;
			while (last <= 9)
			{
				is_display(first, second, last);
				last++;
			}
			second++;
		}
		first++;
	}
}
