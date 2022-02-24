/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:36:09 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/21 00:53:53 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1 || (nb % 2 == 0 && nb != 2))
	{
		return (0);	
	}
	if (nb == 2)
	{
		return (1);
	}
	i = 3;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

#include <stdio.h>
int	main()
{
	printf("%d\n",ft_find_next_prime(12));
}