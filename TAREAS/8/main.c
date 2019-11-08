#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argu[])
{
	//Asignamos variables
	int x;
	float c, f, resultado=0;
        //asignamos valores
	c = atof(argu[1]);
	x=c;
	f = atof(argu[2]);
	//Funcion
	switch(x){
		case 1:
		    resultado=f*1.8;
		    resultado= resultado+32;
			//Imprimimos el resultado de conversion de centigrados a fahrenheit
		    printf("%.2f\n", resultado);
		    break;
		case 2:
		    resultado=f-32;
		    resultado=resultado/1.8;
			//imprimimos el resultado de conversion de fahrenheit a centigrados
		    printf("%.2f\n", resultado);
		    break; 
		}
    return 0;
}
