#include <stdio.h>
#include <locale.h>

int main (){
	int num, c;
	printf ("Digite um numero: ");
	scanf ("%d", &num);
	c = num;

	while (c>=0) {
	printf ("%d, ", c);
	c--;
}
}