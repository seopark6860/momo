/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seopark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:44:17 by seopark           #+#    #+#             */
/*   Updated: 2021/02/21 05:44:36 by seopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	up_down_row(int max_row)
{
	int	row;

	row = 0;
	while (row < max_row)
	{
		if (row == 0 || row == max_row - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		row++;
	}
}

void	mid_row(int max_row)
{
	int	row;

	row = 0;
	while (row < max_row)
	{
		if (row == 0 || row == max_row - 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		row++;
	}
}

void	rush(int max_row, int max_col)
{
	int col;

	col = 0;
	while (col < max_col)
	{
		if (col == 0 || col == max_col - 1)
		{
			up_down_row(max_row);
		}
		else
		{
			mid_row(max_row);
		}
		col++;
		ft_putchar('\n');
	}
}
