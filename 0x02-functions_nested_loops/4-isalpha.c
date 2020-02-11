/**
 * _isalpha - Entry point
 *
 * @c: - is a parameter
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	char letter = 'a';
	int value = 0;

	while (letter <= 'z')
	{
		if (c == letter)
			value = 1;
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		if (c == letter)
			value = 1;
		letter++;
	}
	return (value);
}
