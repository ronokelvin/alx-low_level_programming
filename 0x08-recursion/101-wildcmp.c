#include "main.h"
/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical,
 * otherwise return 0.
 * @q1: the normal string
 * @q2: the special string containing "*"
 *
 * Return: 1 if identical, else 0
 */
int wildcmp(char *q1, char *q2)
{
	if (*q2 == '\0' && *q1 == '\0')
		return (1);

	if (*q2 == '*' && *(q2 + 1) != '\0' && *q1 == '\0')
		return (0);

	if (*q1 == *q2)
		return (wildcmp(q1 + 1, q2 + 1));

	if (*q2 == '*')
		return (wildcmp(q1, q2 + 1) || wildcmp(q1 + 1, q2));

	return (0);
}
