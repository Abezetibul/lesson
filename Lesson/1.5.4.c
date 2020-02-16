#include<stdio.h>

#define IN  1  //снаружи слова
#define OUT 0  //внутри слова

int main()
{
	printf("\n\n Глава 1.5.4\n\n");
	
	int c, nl, nw, nc, state;
	/*
	nc - символы
	nl - строки
	nw - слова
	state - положение внутри слова или снаружи
	*/
	state = OUT;
	nl = nw = nc = 0;
	
	while ((c = getchar()) != EOF)
	{
		++nc;
		
		if (c == '\n')
			++nl;
		
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
					
				else if (state == OUT)
				{
					state = IN;
					++nw;
				}		
	}
	printf(" строк-%d\n слов-%d\n символов-%d\n", nl, nw, nc);
	
}