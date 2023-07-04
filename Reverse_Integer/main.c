int reverse(int x)
{
	int unite = 10;
	long res = 0;
	int sign = 1;
	long new_x = x;

	if (new_x < 0)
	{
		new_x = -new_x;
		sign = -1;
	}
	while (new_x >= 1)
	{
		res = res * 10 + (new_x % unite);
		new_x = new_x / unite;
	}
	res = res * sign;
	if (res >= -2147483648 && res <= 2147483647)
		return (res);
	else
		return (0);
}

#include <stdio.h>

int main(void)
{
	int a = -2147483646;
	printf("val de reverse : %d\n", reverse(a));
	return (0);
}