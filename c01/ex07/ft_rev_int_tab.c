/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:02:18 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/16 12:57:04 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
#include <stdio.h>
int main(void)
{
	int tab[]= { 1, 2, 9, 5, 7 }, size = 5;
	ft_rev_int_tab(tab, size);
	int i = 0;

	while (i<size)
	{
	printf("%d\t", tab[i]);
	i++;

	}
}
