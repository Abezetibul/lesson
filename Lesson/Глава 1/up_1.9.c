#include <stdio.h>

int main()
{
	int numer, pred, tek, ud, nm, simv; 
	numer = pred = tek = ud = nm = simv = 0;
	/*
	pred 		предыдущий символ
	tek  		тикущий символ
	simv 		хранится символ
	numer		кол-во символов
	ud			удаленые пробелы
	nm			количество символов 
	*/
	
	printf("\n\n Упражнение 1.9 (удаление двойных пробелов подсчет оставшихся пробелов и символов)\n\n");
	
	while ((simv = getchar()) != EOF)
	{	
		if (simv != ' ')
		{
			pred = 0; 
			putchar(simv);
			++nm;
		}
		if (simv == ' ' && pred != ' ')
		{
			putchar('_');
			pred = ' ';
			++nm;
			++numer;
		}
		if (simv == ' ' && pred == ' ')
		{
			//++numer;
			++ud;
		}

	}
	printf("\n\n всего пробелов - %d\n удалено пробелов - %d\n символов - %d\n", numer, ud-numer, nm-numer-1);
}