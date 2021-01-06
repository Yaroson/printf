/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:44:29 by ysoroko           #+#    #+#             */
/*   Updated: 2021/01/06 14:37:48 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void			ft_putnbr_base(unsigned int nbr, char *str, char *b, int i)
{
	unsigned int n;

	n = nbr;
	if (n >= ft_strlen(b))
	{
		ft_putnbr_base(n / ft_strlen(b), str, b, i + 1);
		ft_putnbr_base(n % ft_strlen(b), str, b, i);
	}
	else
	{
		str[i] = b[n];
	}
}

static int			ft_count_mem(int m, size_t base_len)
{
	int mem_length;

	mem_length = 0;
	if (m < 0)
		mem_length++;
	else if (m == 0)
		return (1);
	while (m % base_len != 0 || m / base_len != 0)
	{
		m = m / base_len;
		mem_length++;
	}
	return (mem_length);
}

static char			*rev_str(char *str, int i)
{
	int		j;
	char	temp;
	int		middle;
	int		len;

	j = 0;
	len = ft_strlen(str);
	middle = len / 2 + i;
	while (i < middle)
	{
		temp = str[i];
		str[i] = str[len - j - 1];
		str[len - j - 1] = temp;
		i++;
		j++;
	}
	return (str);
}

char				*ft_itoa_base(int n, char *base)
{
	unsigned int	m;
	size_t			base_len;
	int				mem_length;
	int				i;
	char			*str;

	m = n;
	i = 0;
	base_len = ft_strlen(base);
	mem_length = ft_count_mem(n, base_len);
	if (!(str = malloc(sizeof(char) * (mem_length + 1))))
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		m *= -1;
		i++;
	}
	str[mem_length] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	ft_putnbr_base(m, str, base, i);
	return (rev_str(str, i));
}
