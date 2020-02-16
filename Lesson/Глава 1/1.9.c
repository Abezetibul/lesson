#include <stdio.h>
#define MAXLINE 1000       //макс длинна строки в потоке

int getsline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;     //длина текущей строки
	int max;     //текущая макс длина

	char line[MAXLINE];    //текущая введеная строка
	char longest[MAXLINE]; //самая длиная строка из введеных

	max = 0;

	while ((len = getsline(line, MAXLINE)) > 0)
		if (len > max)
		{
			max = len;
			copy(longest, line);  // ???????????????
		}
	if (max > 0)
		printf("%s", longest);	
	return 0;
}


/////////////////////////	getline	  //////////////////////////////
//	считывает строку в s, возвращает ее длину
//
//
/////////////////////////////////////////////////////////////////

int getsline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}


/////////////////////////	copy   //////////////////////////////
//	копирует строку from в to 
//	длина to считается достаточной
//
/////////////////////////////////////////////////////////////////

void copy (char to[], char from[])
{
	int i;

	i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}
