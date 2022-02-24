/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:49:24 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/20 22:39:17 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb)
	{
		factorial *= nb--; // 5 x (5-1) x (5-2) .. x1
	}
	return (factorial);
}

#include <stdio.h>
int	main()
{
	printf("%d\n",ft_iterative_factorial(2));
}