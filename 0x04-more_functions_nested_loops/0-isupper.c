/**
 * _isupper - Entry point
 *
 * @c: - lsdjfksd
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	int is_upper;

	is_upper = 0;
	if ((c > 64) && (c < 91))
	{
		is_upper = 1;
	}
	return (is_upper);
}
