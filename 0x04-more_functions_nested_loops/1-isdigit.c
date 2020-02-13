/**
 * _isdigit - Entry point
 *
 * @c: - lsdjfksd
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	int is_digit;

	is_digit = 0;

	if ((c > 47) && (c < 58))
		is_digit = 1;

	return (is_digit);
}
