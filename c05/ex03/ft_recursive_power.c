/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:33:54 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/21 01:16:50 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{	
	if (power < 1)
	{
		return (!power);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int	main()
{
	printf("%d\n",ft_recursive_power(2,4));
}