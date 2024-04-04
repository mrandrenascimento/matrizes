#include<stdlib.h>
#include<stdio.h>
#define NOTAS 3
#define ALUNOS 4
int main(){
	//exercicio
	//crie um algaritmo que receba tres notas de quatro alunos e informe a media:
	//ex: marta silva
	
	int soma,i,j;
	float media[NOTAS],mediaTotal, notas[ALUNOS][NOTAS];
	char alunos[ALUNOS][200];
	
	for(i=0;i<ALUNOS;i++){
		
		printf ("\nDigite o %iº Nome: ",i+1);
		scanf("%s",&alunos[i]);
		
		for(j=0;j<NOTAS;j++){
			printf("Digite a %iª Nota: ",j+1);
			scanf("%f",&notas[i][j]);
			
			soma+=notas[i][j];
		}
		
	
		media[i]=soma/j;
		soma=0;
	}
			for(i=0;i<ALUNOS;i++){
		
		printf ("\nDigite o %iº Nome: %s\n",i+1, alunos[i]);
				
		for(j=0;j<NOTAS;j++){
			printf("Digite a %iª Nota: %.1f\n",j+1, notas[i][j]);
			
	}	printf("\n\tMedia do %iº Aluno: %.1f\n",i+1,media[i]);
		}
		
return 0;	
}
