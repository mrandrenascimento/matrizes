#include<stdlib.h>
#include<stdio.h>
#define NOTAS 3
#define DISCIPLINAS 2
int main(){
	//exercicio
	//crie um algaritmo que receba tres notas de duas disciplinas e informe a media:
	
	
	int soma,i,j;
	float media[NOTAS],notas[DISCIPLINAS][NOTAS];
	char disciplinas[DISCIPLINAS][200];
	
	for(i=0;i<DISCIPLINAS;i++){
		
		printf ("\nDigite o %iº Disciplina: ",i+1);
		scanf("%s",&disciplinas[i]);
		
		for(j=0;j<NOTAS;j++){
			printf("Digite a %iª Nota: ",j+1);
			scanf("%f",&notas[i][j]);
			
			soma+=notas[i][j];
		}
		
	
		media[i]=soma/j;
		soma=0;
	}
			for(i=0;i<DISCIPLINAS;i++){
		
		printf ("\n%iº Disciplina: %s\n",i+1, disciplinas[i]);
				
		for(j=0;j<NOTAS;j++){
			printf("\n%iª Nota: %.1f\n",j+1, notas[i][j]);
			
	}	printf("\n\tMedia da %iº Disciplina: %.1f\n",i+1,media[i]);
		}
		
return 0;	
}
