/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:27:50 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/20 22:44:01 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	sqrn;

	sqrn = 1;
	while (nb >= sqrn * sqrn && nb > 0)
	{
		if (sqrn * sqrn == nb)
			return (sqrn);
		else if (sqrn >= 46341)
		{
			return (0);
		}
		sqrn++; // square of (25) = 5 / square (16) = 4
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	printf("%d\n",ft_sqrt(81));
}