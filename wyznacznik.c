#include <stdio.h>

int mnoz(int a, int b)
	{
	return a*b;
	}
int dodaj(int a, int b)
	{
	return a+b;
	}
int odejmij(int a, int b)
	{
	return a-b;
	}
int dziel(int a, int b)
	{
	return a/b;
	}
int main(void)
	{

	int a,b;
	char wybor;
	printf("podaj wartosc a: ");
	scanf("%i",&a);
	printf("podaj wartosc b: ");
	scanf("%i", &b);
	printf("podaj dzialanie: ");
	scanf("\n%c",&wybor);
	if(wybor=='*')
	{
	printf("wynik mnozenia: %i\n",mnoz(a, b));
	}
		else
		{
		if(wybor=='+')
		{
		printf("Wynik dodawania: %i\n",dodaj(a, b));
		}
			else
			{
			if(wybor=='-')
			{
			printf("Wynik odejmowania: %i\n", odejmij(a, b));
			}
				else
				{
				if(wybor=='/')
				{
				printf("Wynik dzielenia: %i\n", dziel(a, b));
				}
				else
				{
				}
		}
			}
	};
	return 0;
}
