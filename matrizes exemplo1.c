#include <stdio.h>

int main(){
	int numeros[2][2];	//declarando matriz
	
	numeros[0][0] = 1;
	numeros[0][1] = 2;	
	numeros[1][0] = 3;					//atribuindo valores em uma matriz
	numeros[1][1] = 4;
	
	//exibindo os dados da matriz
	
	printf("Elemento 1: %d\n",numeros[0][0]);
	printf("Elemento 2: %d\n",numeros[0][1]);
	printf("Elemento 3: %d\n",numeros[1][0]);
	printf("Elemento 4: %d\n",numeros[1][1]);
	
return 0;	
}
