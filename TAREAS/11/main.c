#include <stdio.h>
#include <stdlib.h>
//se va a usar una funcion llamada raiz
double raiz(double num, double tolerancia, double resultado){
	//declaramos las variables
	double division, diferencia;
	//algoritmo
	division = num/resultado;
	diferencia=resultado - division;
	diferencia = diferencia> 0? diferencia:-diferencia;
	//si la diferencia es menor o igual que la tolerancia se retorna
	//el candidato a resultado
	if (diferencia<=tolerancia){
		return resultado;
	}
	//si no
	else{
		//se obtiene un nuevo candidato
		resultado=(resultado + division)/2;
		return raiz(num, tolerancia, resultado);
	}
}
int main(int argc, char *argv[]){
	//declaramos las variables 
	double num,tolerancia, resultado;
	num=atof(argv[1];tolerancia=atof(argv[2]); resultado=atof(argv[3]);
	resultado=raiz(num, tolerancia, resultado);
	//y se muestra
	printf("%lf\n", resultado);
}