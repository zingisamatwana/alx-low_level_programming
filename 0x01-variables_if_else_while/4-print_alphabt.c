#include <stdio.h>

int main(void)
{
	char i;
	int e;
	int q;

	e=101;
	q=113;

	for (i=97; i<123; i++)
	{
		if (i==e)
		{
			;
		}
		else if (i==q)
		{
			;
		}
		else
		{
			putchar(i);
		}
	 }
	putchar('\n');
	return (0);
}