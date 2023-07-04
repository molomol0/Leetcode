int romanToInt(char * s)
{
	int i = 0;
	int res = 0;

	while (s[i])
	{
		if (s[i] == 'I')
		{
			if (s[i + 1] == 'V')
			{
				res = res + 4;
				i += 2;
			}
			else if (s[i + 1] == 'X')
			{
				res = res + 9;
				i += 2;
			}
			else
			{
				res = res + 1;
				i++;
			}
		}
		else if (s[i] == 'V')
		{
			res = res + 5;
			i++;
		}
		else if (s[i] == 'X')
		{
			if (s[i + 1] == 'L')
			{
				res = res + 40;
				i += 2;
			}
			else if (s[i + 1] == 'C')
			{
				res = res + 90;
				i += 2;
			}
			else
			{
				res = res + 10;
				i++;
			}
		}
		else if (s[i] == 'L')
		{
			res = res + 50;
			i++;
		}
		else if (s[i] == 'C')
		{
			if (s[i + 1] == 'D')
			{
				res = res + 400;
				i += 2;
			}
			else if (s[i + 1] == 'M')
			{
				res = res + 900;
				i += 2;
			}
			else
			{
				res = res + 100;
				i++;
			}
		}
		else if (s[i] == 'D')
		{
			res = res + 500;
			i++;
		}
		else if (s[i] == 'M')
		{
			res = res + 1000;
			i++;
		}
	}
	return (res);
}