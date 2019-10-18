#include <stdaio.h>
int main(int argc, char *argv[])
{
	int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

	scanf("%f", &n1);
	scanf("%f", &n2);

	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	printf("suma: %.2f\n", suma);
	printf("resta: %.2f\n", resta);
	printf("multiplicacion: %.2f\n", multiplicacion);
	printf("division: %.2f\n", division);

	return 0;
}
