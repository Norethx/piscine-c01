/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:48:10 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/20 13:52:50 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*#include <stdio.h>

int	main(void)
{
	int a[10] = {99,0,2,8,3,1,7,-2,-9,4};
	int i = 0;
	ft_sort_int_tab(a,10);
	while (i < 10)
	{
		printf("%d", a[i]);
		printf("\n");
		i++;
	}
}*/
