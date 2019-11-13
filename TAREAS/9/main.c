#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){
	//se declaran las variables
	int n1, x, resultado;
	//se convierten de caracter a entero
	n1 = atoi(argv[1]);
	//se guarda el valor en otra variable para usarse en el while
    x = n1;
    resultado = 0;
    //funcion
    while(x>0){
    	resultado = resultado + x%10;
    	x = x/10;
    }
    //se imprime el resultado
    printf("%i\n", resultado);
	return 0;
}