/**
 * is_in_set - check if a character is in a given set
 * @c: candidate
 * @s: string
 *
 * Return: 1 if true, 0 otherwise
 */
int is_in_set(char c, char *s)
{
	while (*s)
		if (c == *(s++))
			return (1);
        return (0);
}
