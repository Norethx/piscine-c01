/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:40:15 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/20 12:40:08 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	if (b != 0)
	{
		aux = *a % *b;
		*a = *a / *b;
		*b = aux;
	}
}
/*#include <stdio.h>

int	main(void)
{
	int num1 = 242;
	int num2 = 100;
	int *p1 = &num1;
	int *p2 = &num2;

	ft_ultimate_div_mod(p1, p2);
	printf("div : %d", *p1);
	printf("\nmod : %d", *p2);
}*/
