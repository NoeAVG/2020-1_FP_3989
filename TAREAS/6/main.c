#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argu[]){
	int resultado;//resultado es el que se va imprimir 
	int argui[argc];//esta sera la lista donde se guarden los valores enteros
	//se necesitan 2 for uno para excluir el argu[i]
	for (int i = 1; i < argc; ++i){
		//resultado sera primero el neutro multiplicativo
		resultado=1;
		//el segundo for hara la operacion sin excluir a ninguno
		for (int i = 0; i < argc; ++j){
			argui[j]=atoi(argu[j]);
			//se saca el resultado sin excluir a argu[i]
			resultado=resultado*argui[j];
		}
		//una vez que se hizo el resultado se excluye a argu[i], con su inverso multiplicativo
		resultado=resultado/argui[i];
		printf("%i\n", resultado);
	}
	return 0;
}