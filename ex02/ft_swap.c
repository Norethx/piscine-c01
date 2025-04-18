/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:20:24 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/20 12:35:08 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*#include <stdio.h>

int	main(void)
{
	int num = 10;
	int num2 = 20;
	int *p1 = &num;
	int *p2 = &num2;


	printf("number1 : %d", *p1);
	printf("\nnumber2 : %d", *p2);
	ft_swap(p1, p2);
	printf("\nnumber1 : %d", *p1);
	printf("\nnumber2 : %d", *p2);
}*/
