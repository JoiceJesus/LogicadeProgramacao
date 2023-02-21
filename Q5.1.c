#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Autor: joice de jesus
* Este programa recebe um conjunto de numeros inteiros e mostra:
A quantidade de divisores. 
O fatorial dos numeros. 
Se os numeros são primos ou não. 
se o numero pertenci a sequencia de Fibonacci.
A quantidade de numeros primos entre 1 e o numero. 
*/
//Entrada de dados
void entrada(int *n){
	int numero;
	
	do{
		printf("Informe o valor: ");
		scanf("%i",n);
	}while(numero<0);
}
//Quantidade de divisores
int qdivisores(int n){
	int cont,divs=0;
	
	for(cont=1;cont<=n;cont++){
		if(n % cont == 0)
		divs = divs + 1;	
		}
		//printf("\ndivs = %i",divs);
		
		return divs;
}
// numero primo
int nprimo(int n){
	if(qdivisores(n)==2){
		printf("\no numero e primo!");
		return 1;
	}else{
		printf("\no numero não e primo!");
		return 0;
	}
}
void primosden(int n){
	int cont,d=0,c=0;
	for(cont=1;cont<=n;cont++){
		
		if(qdivisores(cont)==2)
		printf("\n%i",cont);
	}
	
}
void fatorial(int n){
	int cont,c=1;
	for(cont=1;cont<=n;cont++){
		c = c * cont;
	}
	printf("\nfatorial = %i",c);
}
int fibonacci(int n){
	int cont,f1=0,f2=1,f3;

	for(cont=f3;cont=f3<n;cont++){
		f3=f1+f2;
		if(n==f3){
		return 1;
		}
		f1=f2;
		f2=f3;
	}
}
void saida(){
	int numero,enc;
	do{
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	entrada(&numero);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\nQuantidade de divisores = %i",qdivisores(numero));
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	nprimo(numero);

	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\nNumeros primos entre 1 e %i:\n",numero);
	primosden(numero);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	fatorial(numero);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	
	if(fibonacci(numero)==1){
		printf("\n %i faz parte da serie de Fibonacci!",numero);
	}else{
		printf("\n %i não faz parte da serie de Fibonacci!",numero);	
	}
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n*Deseja encerrar o programa [digite 0] ou qualquer outro valor para continuar!*");
	scanf("%i",&enc);
	}while(enc!=0);
}
void main(){
	setlocale(LC_ALL,"portuguese");
	saida();
}
