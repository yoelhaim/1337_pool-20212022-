/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:06:59 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/09/21 13:09:42 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	nb;

	nb = 48;
	while (nb <= 57)
	{
		write(1, &nb, 1);
		nb++;
	}
}