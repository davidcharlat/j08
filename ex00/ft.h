#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr (char *str)
{
	int cursor;

	cursor = 0;
	while (*(str + cursor) != '\0')
		ft_putchar (*(str + cursor++));
}

int		ft_strcmp(char *s1, char *s2)
{
	int cursor;

	cursor = 0;
	while (*(s1 + cursor) != '\0' && *(s1 + cursor) == *(s2 + cursor))
			cursor++;
	return ((char)*(s1+cursor)-(char)*(s2+cursor));
}

char	*ft_strcpy(char *dest, char *src)
{
	int cursor;

	cursor = 0;
	while (src[cursor] != '\0')
		dest[cursor] = src[cursor++];
	dest[cursor] = '\0';
	return (dest);
}

int	ft_strlen (char *str)

{
	int counter;

	counter = 0;
	while (*(str + counter) != '\0')
		counter++;
	return (counter);
}

void	ft_swap (int *a, int *b)
{
	int a_mem;

	a_mem = *a;
	*a = *b;
	*b = a_mem;
}
