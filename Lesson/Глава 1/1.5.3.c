#include <stdio.h>

int main()
{
	int c, nl, nt, np;
	nl = 0; //��ப�
	nt = 0; //⠡�
	np = 0; //�஡���
	
	while ((c = getchar()) != EOF)
	{	
		if (c == '\n')
			++nl;
		if (c == ' ')
			++np;
		if (c == '\t')
			++nt;
	}
	printf ("��ப-%d\n�஡����-%d\n⠡��-%d\n", nl, np, nt);
}