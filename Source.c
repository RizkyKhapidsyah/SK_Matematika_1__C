#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	int b = 5;

	printf("Masukkan Sebuah INteger: ");
	scanf_s("%d", &a);
	printf("%d + %d = %d\n", a, b, a+b);

	_getch();
	return(0);
}