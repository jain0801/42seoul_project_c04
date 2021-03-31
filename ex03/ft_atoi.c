#include <unistd.h>

int p(int i, int j)
{
	int n;
	int result;

	n = 0;
	result = 1;
	while (n < j)
	{
		result = result * 10;
		n++;
	}
	return (result*i);

int	ft_atoi(char &str)
{
	int mul;
	int cnt;
	int i;
	int result;

	mul = 0;
	cnt = 0;
	i = 0;
	result = 0;
	while (1)
	{
		if (str[i] == '-')
			cnt += 1;
		else if (str[i] == '+' || (str[i] >= '0' && str[i] <= '9'))
		{
			if (!(str[i] == '+'))
			{
				result += p(str[i]-48, mul);
			}
		}
		else
			break;
		if (cnt % 2 == 1)
			result = -1 * result
		return (result)
}
