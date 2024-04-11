#include<stdio.h>
#include<locale.h>

#define DISCIPLINA 2
#define NOTAS 2

int main(){
	
	int i,j,somaNotas= 0 , quantidadeNotas= 0 ,pesoNotas= 0 ,notas[DISCIPLINA][NOTAS] , notasIguais=0;
	char disciplinas[DISCIPLINA][200];
	float mediaPonderada[NOTAS] ;
	
	for(i=0;i<DISCIPLINA;i++){
		
		printf("Digite a %iª Disciplina: ",i+1);
		scanf("%s",&disciplinas[i]);
			
			for(j=0;j<NOTAS;j++){
				
				printf("Digite a %iiª Nota: ",j+1);
				scanf("%d",&notas[i][j]);
				
				quantidadeNotas++;
				
				somaNotas+=notas[i][j];
				
				//if(notas[i]==notas[j]){
					
					//printf("iguais: %d\n",notas[i]);
				do{
					
					if(notas[i][j]<0||notas[i][j]>10){
						
						printf("Digite a %iiª Nota: ",j+1);
						scanf("%d",&notas[i][j]);
					}
	
	
				}while(notas[i][j]<0||notas[i][j]>10);
				
					//calculando o peso
				
					
			if(notas[i][j]<=7){
				
				pesoNotas=4;
			
			}else{
				
				pesoNotas=3;
			} 		
			
			//calculando a media ponderada
			
				
			}
	}		
			mediaPonderada=(somaNotas*pesoNotas)/pesoNotas;	
			
			somaNotas=0;	
			
			//resultados print
			
	for(i=0;i<DISCIPLINA;i++){
		
		printf("%iª Disciplina: %s\n",i+1,disciplinas[i]);
			
			for(j=0;j<NOTAS;j++){
				
				printf("%iª Nota: %d\n",j+1,notas[i][j]);
			}//printf("iguais: %d\n",i+1,notasIguais);
			
			printf("Média Ponderada: %.1f\n",i+1,mediaPonderada);
	}			
	

return 0;	
}
