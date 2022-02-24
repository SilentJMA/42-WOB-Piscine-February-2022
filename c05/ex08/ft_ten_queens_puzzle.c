/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:51:42 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/21 13:31:13 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

void	ft_solve(char *tab, int queen, int *total)
{
	int	i;
	int	j;

	if (queen == 10)
	{
		queen = 0;
		while (queen < 10)
			ft_putchar(tab[queen++] + '0');
		ft_putchar('\n');
		(*total)++;
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		j = 0;
		while (j < queen && i != tab[j] && ft_abs(tab[j] - i) != queen - j)
			j++;
		if (j >= queen)
		{
			tab[queen] = i;
			ft_solve(tab, queen + 1, total);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		queen;
	char	tab[10];
	int		total;

	queen = 0;
	total = 0;
	ft_solve(tab, queen, &total);
	return (total);
}

int main()
{
	ft_ten_queens_puzzle();
}