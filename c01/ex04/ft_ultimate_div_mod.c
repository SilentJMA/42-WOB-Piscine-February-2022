/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:31:42 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/15 11:54:08 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
#include <stdio.h>
int main(void)
{
	int a = 150, b = 9;
	int div;
	int mod;
	ft_ultimate_div_mod(&a, &b);
	printf("%d \t mod: %d\n", a, b);

	
}