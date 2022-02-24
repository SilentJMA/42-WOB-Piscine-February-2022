/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:23:15 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/20 22:47:04 by mjabane          ###   ########.fr       */
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

#include <stdio.h>
int	main()
{
	printf("%d\n",ft_is_prime(7));
}