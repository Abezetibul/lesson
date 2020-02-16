#include <stdio.h>

#define IN  1
#define OUT 0


int main()
{
	printf("\n\n Упражнение 1.12 \n\n");
	
	int c, state;
	/*
	c
	state - пложение внутри слова или вне
	*/
	
	while((c = getchar()) != EOF)
		
		if (state == OUT && c == ' ' || c == '\n' || c == '\t')
		{
			state = IN;
			printf("\n");
			//putchar(c);
		}
		else 
			{
			state = OUT;
			putchar(c);
			}
		
		
	
}