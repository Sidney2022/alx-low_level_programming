#include <stdio.h>

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
			printf("%d\n", i);
	}
}
