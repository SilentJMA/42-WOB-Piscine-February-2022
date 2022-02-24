/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:11:05 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/15 11:51:59 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = a / b;
	*mod = a % b;
}
int main(void)
{
	int a = 150, b = 9;
	int div;
	int mod;
	ft_div_mod(a,b, &div, &mod);
	printf("%d \t mod: %d\n", div, mod);

	
}