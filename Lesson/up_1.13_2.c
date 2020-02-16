#include <stdio.h>
#define OUT 0  //снаружи слова
#define  IN 1  //внутри слова

int c, i;

/*
word - слов
symbol - символов
prev - предыдущий символ

*/
int w = 0;
int s = 0;
int p = 0;
int symbol[20];




int main()
{
for (i = 0; i < 20; ++i)
	symbol[i] = 0;

	while ((c = getchar()) != EOF)
		
		if (c == ' ' || c == '\t' || c == '\n')
		{
			++symbol[s - 1];
			p = OUT;
			w = s;
			s = 0;
		}

		else
			{
				p = IN;
				++s;
			}

	
//printf(" %d\n %d\n", s, w);

for (i = 0; i < 20; ++i)	
	printf("% d", symbol[i]);
	printf("\n");

}