int	ft_str_is_alpha(char *str)
{
	int	x;
	int	letter;
	int	only_chars;

	x = 0;
	only_chars = 0;
	while (str[x] != '\0')
	{
		letter = str[x];
		if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
		{
			only_chars = 1;
		}
		else
		{
			only_chars = 0;
			return (0);
		}
		x++;
	}
	return (1);
}
