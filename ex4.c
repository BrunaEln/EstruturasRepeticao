#include <stdio.h>


main () {
	int i = 0, c = 0;

	while (c <= 5) {
		if (i % 3 ==0) {
			printf ("%d\n", i);
			c++;
		}
		i++;
	}
}