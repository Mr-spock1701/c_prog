#include <stdio.h>

int power(int fahr, int i);

/* temperature convertion program using power function */
main()
{

	int fahr, i;

	i = 1;
	for (fahr = 300; 0 <= fahr; fahr = fahr - 20)
		printf("%3d %6d\n", power(fahr, i), power((5.0/9.0) * (fahr 			-32), i));
	return 0;
}

int power(int base, int n)
{
	int i, p;

	p = 1; 
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}

