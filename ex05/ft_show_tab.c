#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_put_unsigned_int(unsigned int nbr)
{	
	int i;
	int i_power;
	int nbrdup;
	int power;
	
	i = 0;
	nbrdup = nbr;
	while (nbrdup > 0)
	{
		nbrdup = nbrdup / 10;
		i++;
	}
	while (i > 0)
	{
		power = 1;
		i_power = i;
		while (i_power-- > 1)
			power = power * 10;
		ft_putchar((nbr / power) + 48);
		nbr = nbr - (nbr / power) * power;
		i--;
	}
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;
	
	i = 0;
	while (par[i].str)
	{
		j = 0;
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_put_unsigned_int(par[i].size_param);
		ft_putchar('\n');
		while ((par[i].tab)[j])
		{
			ft_putstr ((par[i].tab)[j]);
			ft_putchar('\n');
			j++;
		}
	i++;
	}
	ft_putchar('\n');
}
