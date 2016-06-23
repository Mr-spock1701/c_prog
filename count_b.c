#include <stdio.h>

int main()

{
	int nb, c;
		
	nb = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == ' ' || c == '\t' || c == '\r')
			++nb;
	}

	printf ("%d\n", nb);
}
				
