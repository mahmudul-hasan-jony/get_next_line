/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <mhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:05:17 by mhasan            #+#    #+#             */
/*   Updated: 2019/11/04 14:44:22 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	k;

	k = n;
	if (k > 2147483647 || k < -2147483648)
		return ;
	if (k < 0)
	{
		k = k * -1;
		ft_putchar('-');
	}
	if (k >= 10)
	{
		ft_putnbr(k / 10);
		k = k % 10;
	}
	if (k < 10)
	{
		ft_putchar(k + '0');
	}
}
