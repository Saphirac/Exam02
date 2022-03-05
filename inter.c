#include <unistd.h>

int	ft_checkdoubles(char c, char *tab)
{
	if (tab[c] == 0)
	{
		tab[c] = 1;
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	static char	tab[256] = {0};

	if (ac != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = -1;
	/*while (tab[i++])
		tab[i] = 0;*/
	i = 0;
	j = 0;
	while (av[1][i])
	{
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				if (ft_checkdoubles(av[1][i], tab) == 0)
					write(1, &av[1][i], 1);
			}
			j++;
		}
		if (av[1][i] == av[2][j])
		{
			if (ft_checkdoubles(av[1][i], tab) == 0)
			write(1, &av[1][i], 1);
		}
		i++;
		j = 0;
	}
	write(1, "\n", 1);
	return (0);
}
