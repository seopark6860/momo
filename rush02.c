/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seopark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 04:56:24 by seopark           #+#    #+#             */
/*   Updated: 2021/02/21 05:54:19 by seopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_row(int max_row)
{
	int row;

	row = 0;
	while (row < max_row)
	{
		if (row == 0 || row == max_row - 1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		row++;
	}
}

void	mid_row(int max_row)
{
	int row;

	row = 0;
	while (row < max_row)
	{
		if (row == 0 || row == max_row - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		row++;
	}
}

void	last_row(int max_row)
{
	int row;

	row = 0;
	while (row < max_row)
	{
		if (row == 0 || row == max_row - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
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
		if (col == 0)
		{
			first_row(max_row);
		}
		else if (col == max_col - 1)
		{
			last_row(max_row);
		}
		else
		{
			mid_row(max_row);
		}
		col++;
		ft_putchar('\n');
	}
}
