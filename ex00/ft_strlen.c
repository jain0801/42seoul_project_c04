#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char c;
	char str[] = "12 345";

	c = '0';
	c += ft_strlen(str);
	write(1, &c, 1);
}
