#include <stdio.h>
#define IN  1  //внутри слова
#define OUT 0  //снаружи слова

int main()
{
	int i, c, a, b, sum_a, state;
	int symbolget[10];
/*
		a - количество символов слове
		sum_a - общее количество символов
		b - количество слов
		state - тикущее положение курсива
		symbolget[] массив посторения количества символов
*/
	a = b = sum_a = 0;
	state = OUT;

	for (i = 0; i < 10; ++i)
		symbolget[i] = 0;

	while ((c = getchar()) != EOF)

		
		if (c == ' ' || c == '\n' || c == '\t')
			{
				state = OUT;

				if (a >= '0' && a <= '9')
				{
					++symbolget[a - '0'];
	
				}
				//a = 0;
			}
		else if (state == OUT)
			{
				state = IN;
				++b;	
			}

		else if (state == IN)
			{
				++a;
			}

		

		else
			++sum_a;

	printf(" слов из 0 по 10 символов =");
	for (i = 0; i < 10; ++i)
		printf(" %d", symbolget[i]);
	printf(",\n символов в слове = %d, слов = %d\n\n", a, b);	

}