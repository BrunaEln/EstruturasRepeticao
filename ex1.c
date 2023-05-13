#include <stdio.h>
#include <locale.h>

int main (){
	int num, c;
	c = 0;
	printf ("Digite um numero: ");
	scanf ("%d", &num);

	while (c<=num) {
	printf ("%d, ", c);
	c++;
}
}