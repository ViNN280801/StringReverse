#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;
//Второй вариант : "развернуть" строку при копировании.То есть, если у нас есть "abcdef", 
//то после выполнения программы мы должны получить "fedcba".В качестве входных данных - 
//указатель на строку и можно воспользоваться strlen.
void Reverse()
{
	char str[] = "abcdef";
	int i, j, lenght = strlen(str), temp;
	printf("Строка содержит %d букв.\n", strlen(str));
	printf("Развернутая строка: \n");
	for (i = 0, j = lenght - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	cout << str << endl;
}