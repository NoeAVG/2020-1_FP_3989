#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	double n1, n2, suma, resta, multiplicacion, division;

	n1 = atof(argv[1]);
	n2 = atof(argv[2]);
        suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	printf("%.2lf\n", suma);
	printf("%.2lf\n", resta);
	printf("%.2lf\n", multiplicacion);
	printf("%.2lf\n", division);

	return 0;
}
