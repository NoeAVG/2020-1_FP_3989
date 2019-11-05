#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argu[]){
    //Variables que van a ingresar
    float n1,n2;
    //asignamos valores
    n1= atof(argu[1]);
    n2= atof(argu[2]);
    //imprimimos el resultado de la elevacion
    printf("%.2f\n",pow(n1,n2));
    return 0;
}
