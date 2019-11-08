#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argu[])
{
	int x;
	float c, f, resultado=0;

	c = atof(argu[1]);
	x=c;
	f = atof(argu[2]);
	switch(x){
		case 1:
		    resultado=f*1.8;
		    resultado= resultado+32;
		    printf("%.2f\n", resultado);
		    break;
		case 2:
		    resultado=f-32;
		    resultado=resultado/1.8;
		    printf("%.2f\n", resultado);
		    break; 
		}
    return 0;
}