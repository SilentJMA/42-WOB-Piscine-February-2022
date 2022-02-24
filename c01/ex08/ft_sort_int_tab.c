/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:26:13 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/16 12:32:26 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1 - i) 
// i switched from i < size to i < size - 1 -i why? because i found out when sorting the first time i is the highest and will be all the time in the right fellange
	{
		while (tab[i] > tab[i + 1])
		{		
			swap = tab[i]; // i create this temp variable to store the value i wanted to swap
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		i++;
	}
}
#include <stdio.h>
int main(void)
{
	int tab[]= { 10, 500, 6, 400, 290, 900 }, size = 6;
	ft_sort_int_tab(tab, size);
	int i = 0;

	while (i<size)
	{
	printf("%d\t", tab[i]);
	i++;

	}
}
