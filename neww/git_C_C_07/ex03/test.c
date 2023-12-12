#include <unistd.h>

int main(int argv, char *argc[])
{
	int i = 0;
	if (argv == 2)
	{
		while (argc[1][i])
		{
			if (argc[1][i] <= 'Z' && argc[1][i] >= 'A')
				{
					argc[1][i] = (argc[1][i] + 13) % 90;
					if (argc[1][i] < 65)
					{
						argc[1][i] += 64;
					}
				}
				
			if (argc[1][i] <= 'z' && argc[1][i] >= 'a')
				{
					argc[1][i] = (argc[1][i] + 13) % 122;
					if (argc[1][i] < 98)
					{
						argc[1][i] += 96;
					}
				}
								
			write (1, &argc[1][i], 1);
			i++;
		}
	}
}