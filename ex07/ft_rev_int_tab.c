/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:18:55 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/20 13:46:23 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i <= (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[(size - i - 1)];
		tab[(size - i - 1)] = aux;
		i++;
	}
}
/*#include <stdio.h>

int	main(void)
{
	int a[6] = {1,2,3,4,5,6};
	int i = 0;

	ft_rev_int_tab(a,6);
	while (i < 6)
	{
		printf("%d", a[i]);
		i++;
	}
}*/
