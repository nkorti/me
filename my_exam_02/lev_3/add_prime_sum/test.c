#include<unistd.h>
int ft_atoi(char *str)
{
	int res = 0;
	while(*str)
		res = res * 10 + *str++ - 48;
	return(res);
}

int is_prime(int nbr)
{
	int n = 2;
	if (nbr <= 1)
		return(0);
	while(n * n <= nbr)
	{
		if(nbr % n == 0)
			return(0);
		n++;
	}
	return(1);
}

void ft_putnbr(int sum)
{
	if(sum >= 10)
		ft_putnbr(sum / 10);
	char digit = sum % 10 + '0';
	write(1,&digit,1);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int nbr = ft_atoi(av[1]);
		int sum = 0;
		while(nbr > 0)
		{
			if(is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		ft_putnbr(sum);
	}
	write(1,"\n",1);
}