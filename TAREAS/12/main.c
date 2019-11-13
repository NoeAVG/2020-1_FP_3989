#include <stdio.h>
int regresar(int x){
	//funcion
	int a, z=0;
	//variable de retur y contador
	for (a = 0; a < x ; ++a){
                z = z + a;
                //concatenar los valores
	            }
	return z;//regresa los saludos
}
int main(int argc, char *argv[]){
	    int personas, n;
    personas=atoi(argv[1]);
        n=regresar(personas);
        printf("%i\n", n);
	
	return 0;
}
