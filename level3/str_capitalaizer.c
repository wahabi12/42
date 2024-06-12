#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
		write(1, &str[0], 1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' '
				|| str[i - 1] == '\t'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}