#include<stdio.h>
#include<stdlib.h>

/*Autor: joice de jesus
* Este programa recebe dois valores x ,y caso x >= y retorna o resultado da divisão(x por y):(o calculo e feito sem o operador de divisao)
e o resultado da multiplicacao(x por y):(o calculo e feito sem o operador de multiplicacao).
*/
void entrada(int *a, int *b){
	int x,y;
	printf("Informe o numero:");
	scanf("%i",&x);
	printf("Informe o numero:");
	scanf("%i",&y);

	*a = x;
	*b = y;
	
	
}

void divisao(int x,int y){
	int  cont,d=0;
	
	for(cont=1;cont<=x;cont++){

		if((cont * y)<=x){
			d=cont;
		}
		}
		printf("\nDivisao = %i",d);
}
void multiplicacao(int x, int y){
	int cont,d=0;
	for(cont=x;cont>=x;cont++){
		
		if(((cont % y)==0) && ((cont / y)==x))
		printf("\nMultiplicacao = %i",cont);
	}
}

void saida(){
	int x,y;
	entrada(&x,&y);
	if(x >= y){
	divisao(x,y);
	multiplicacao(x,y);
	}
}
void main(){
	
	saida();
}



