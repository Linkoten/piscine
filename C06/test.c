#include <stdio.h>
#include <unistd.h>

void ft_pustr(char *str)
{
	int i;
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int main(int argc, char **argv)
{
	if (argc > 1)
				


}
