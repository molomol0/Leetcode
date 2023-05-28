#include <stdio.h>

void clean(char *s)
{
	int i = 0;
	while (s[i])
	{
		s[i] = 0;
		i++;
	}
}

int is_in(char c, char * str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int lengthOfLongestSubstring(char * s)
{
	int current_max = 0;
	int i = 0;
	int j = 0;
	char tmp;
	char current_string[5000] = "";

	while (s[i])
	{
		if (is_in(s[i], current_string) == 1)
		{
			if (current_max < j)
			{
				current_max = j;
			}
			clean(current_string);
			tmp = s[i];
			// if (i > 0)
			// 	i = i - 1;
			while (s[i - 1] != tmp && i > 0)
			 	i--;
			j = 0;
		}
		else
		{
			current_string[j] = s[i];
			j++;
			i++;
		}
	}
	if (current_max < j)
	{
		current_max = j;
	}
	return (current_max);
}

int main(void)
{
	char *str = "dvdf";
	printf("%d", lengthOfLongestSubstring(str));
}