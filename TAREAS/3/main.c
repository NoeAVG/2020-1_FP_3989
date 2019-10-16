#include <stdaio.h>
int main(int argc, char *argv[])
{
	int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

	scanf("%i", &n1);
	scanf("%i", &n2);

	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	printf("suma: %.2i\n", suma);
	printf("resta: %.2i\n", resta);
	printf("multiplicacion: %.2i\n", multiplicacion);
	printf("division: %.2i\n", division);

	return 0;
}