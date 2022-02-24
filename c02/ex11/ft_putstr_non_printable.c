/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:04:29 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/17 16:07:27 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int p)
{
	return (p >= 32 && p <= 126);
}

void	ft_base_hex(int base_i)
{
	char	*base_hex;

	base_hex = "0123456789abcdef";
	write(1, &base_hex[base_i / 16], 1);
	write(1, &base_hex[base_i % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_isprint(str[i])))
		{
			write(1, "\\", 1);
			ft_base_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
	i++;
	}
}

int	main(void)
{

	write(1, "Coucou\ntu vas bien ?", 20);
	write(1, "\n", 1);
	ft_putstr_non_printable("Coucou\ntu vas bien ?\t");
	write(1, "\n", 1);
}