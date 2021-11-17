#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int check_str(char *str, int pos, char c)
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

int check_double(char *str, char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');	
	else
	{
		int i = 0;
		int j = 0;
		while (argv[1][i] != '\0')
		{
			if (check_double(argv[2], argv[1][i]) == 1 && check_str(argv[1], i, argv[1][i]) == 1)
			{
				ft_putchar(argv[1][i]);
			}
			i++;
		}
		
	}
}