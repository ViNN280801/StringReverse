#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;
//������ ������� : "����������" ������ ��� �����������.�� ����, ���� � ��� ���� "abcdef", 
//�� ����� ���������� ��������� �� ������ �������� "fedcba".� �������� ������� ������ - 
//��������� �� ������ � ����� ��������������� strlen.
void Reverse()
{
	char str[] = "abcdef";
	int i, j, lenght = strlen(str), temp;
	printf("������ �������� %d ����.\n", strlen(str));
	printf("����������� ������: \n");
	for (i = 0, j = lenght - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	cout << str << endl;
}