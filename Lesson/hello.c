#include <stdio.h>        // подключаем заголовочный файл stdio.h
int main(void)                  // определяем функцию main
{                               // начало функции
    int c = 127;
    printf("Hello World!\n");  // выводим строку на консоль
    putchar(c);
    printf("\n");
    return 0;                   // выходим из функции
}                               // конец функции