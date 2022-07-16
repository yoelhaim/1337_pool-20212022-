/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 09:23:36 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/09/22 10:48:17 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	is_more(int first, int last)
{
	int	f1;
	int	f2;
	int	l1;
	int	l2;

	f1 = first / 10 + 48;
	f2 = first % 10 + 48;
	l1 = last / 10 + 48;
	l2 = last % 10 + 48;
	ft_putchar(f1);
	ft_putchar(f2);
	ft_putchar(' ');
	ft_putchar(l1);
	ft_putchar(l2);
	if ((first / 10 != 9) || (first % 10 != 8))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	f;
	int	l;

	f = 0;
	while (f <= 99)
	{
		l = f + 1;
		while (l <= 99)
		{
			is_more(f, l);
			l++;
		}
		f++;
	}
}
