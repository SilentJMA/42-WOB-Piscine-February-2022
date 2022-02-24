/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:47:08 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/20 19:24:12 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return(index);
	}
	return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
	// Xn = Xn-1 + Xn-2
	// 0 = 0 + 0 > 0
	// 1 = 0 + 1 > 1
	// 2 = 1 + 0 > 1
	// 3 = 1 + 1 > 2
	// 4 = 2 + 1 > 3
}


#include <stdio.h>
int	main()
{
	printf("%d\n",ft_fibonacci(4));
}