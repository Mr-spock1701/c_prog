#include <stdio.h>

/* temperature convertion program using power function */

float power(float fahr, float i);

main()
{
	printf("Fahr - Cels conversion table\n");

	float fahr, i;

	i = 1;
	for (fahr = 300; 0 <= fahr; fahr = fahr - 20)
		printf("%8.2f %8.2f\n", power(fahr, i), power((5.0/9.0) * (fahr 			-32.0), i));
	return 0;
}

float power(float base, float n)
{
	float i, p;

	p = 1; 
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}

