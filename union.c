#include <unistd.h>

int	ft_checkdoubles(char c)
{
	static char	tab[256] = {0};

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
	
	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			if (ft_checkdoubles(av[1][i]) == 0)
				write(1, &av[1][i], 1);
			i++;
		}
		j = 0;
		while (av[2][j])
		{
			if (ft_checkdoubles(av[2][j]) == 0)
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
