#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	Reverse();
}