#include <stdbool.h>

int num(int x)
{
    long res = 100000000000;
	while (res > x)
		res = res / 10;
	return (res);
}

bool isPalindrome(int x)
{
	if (x < 0)
		return false;
	if (x < 10)
		return true;
	bool ret = true;
	long	rev = 0;
	long tmp = x;
	long size = num(x);
	while (tmp >= 1)
	{
		rev = rev + ((tmp % 10) * size);
		size = size / 10;
		tmp = tmp / 10;
	}
	if (rev == x)
		return true;
	else
		return false;
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", num(141));
	printf("%d", isPalindrome(1000000001));
	return 0;
}