/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:12:58 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/15 11:35:04 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp = *a;

	*a = *b;
	*b = tmp;
}
int main(void)
{
	int a = 4, b = 15;
	
	ft_swap(&a,&b);
	printf("%d %d\n", a, b);
}