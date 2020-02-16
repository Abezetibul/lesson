#include <stdio.h>

int main()
{
	int c, nl, nt, np;
	nl = 0; //строки
	nt = 0; //табы
	np = 0; //пробелы
	
	while ((c = getchar()) != EOF)
	{	
		if (c == '\n')
			++nl;
		if (c == ' ')
			++np;
		if (c == '\t')
			++nt;
	}
	printf ("строк-%d\nпробелов-%d\nтабов-%d\n", nl, np, nt);
}