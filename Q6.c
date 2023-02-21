#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
/*Autor: joice de jesus
*Este programa recebe um conjunto de numero inteiros e mostra o sucessor primo do maior numero primo informado.
*/
//entrada de dados
void entrada(int *n){
	printf("Informe o valor:");
	scanf("%i",n); getchar();
}
//verifica primo
int numeroprimo(int m){
	int quardaprimo;
	int cont,c;
	c=0; quardaprimo=0;
	for(cont=1;cont<=m;cont++){
		if(m%cont==0){
			c++;
		}
		}
		if(c==2){
		quardaprimo = quardaprimo + m;
		return quardaprimo;
		}else{
		quardaprimo = 0;
		return 0;
		}
		
}
//recebe valores e verifica o primo e o maior entre os numeros primos
int maiorprimo(int *qp2){
	int n,cont,c,qp=0,quarda,d=1,encerra[30];
	do{
	entrada(&n);
	printf("deseja encerrar o programa? [sim ou nao]");
	scanf("%[^\n]s",encerra); getchar();
	numeroprimo(n);
	if(d==1){
	qp = n;
	}
	if(n>qp){
	qp = n;
	}
	d++;
    }while(strcmp(encerra,"sim")!=0);
	//printf("\n maior primo digitado %i",qp);
	*qp2=qp;
	return 1;
}
//sucessor do maior primo
int sucessor(int m){
	int c,d,qp;
	c=(m+1);
	qp=0;
	while (qp==0){
	if((numeroprimo(c))>=1)	
	qp = c;
	c++;
    }
printf("\nSucessor primo do maior numero primo informado = %i",qp);
}
//programa principal
void main(){
	int n,m,o,qp;
	maiorprimo(&n);
	sucessor(n);
}
