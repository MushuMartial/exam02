#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int check_str(char *str, int pos , char c)
{
	int i = 0;
	while (pos > i)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
	}
	else
	{
		int i = 0;
		int pos = 0;
		while (argv[1][pos] != '\0')
		{
			if (check_str(argv[1], pos, argv[1][pos]) == 1)
				ft_putchar(argv[1][pos]);
			pos++;
		}
	
		while (argv[2][i] != '\0')
		{
			if (check_str(argv[1], pos, argv[2][i]) == 1)
			{
				if (check_str(argv[2], i, argv[2][i]) == 1)
				{
					ft_putchar(argv[2][i]);
				}
			}
			i++;
		}
		
	}
	return (0);
}