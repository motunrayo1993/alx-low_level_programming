 #include <stdio.h>

/**
 * main 
 * 
 * Return: Always (Success)
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char c;
	char ch = 'a';

	for (c = 'a'; c <= 'z'; c++)
	while (ch <= 'z')
	{
		putchar(c);
		if (ch != 'e' && ch != 'q')
		{

		   putchar(ch);
		}
		ch++;
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
