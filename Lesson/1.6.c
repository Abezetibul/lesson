#include <stdio.h>

int main()
{
	int c, i, nwhide, nother;
	int ndigit[10];

	nwhide = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ ndigit[c-'0'];
		else if (c == ' ' || c == '\t' || c =='\n')
			++nwhide;
		else
			++nother;

	printf("повторение цифр =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", табуляций = %d, символов = %d\n", nwhide, nother);	

}