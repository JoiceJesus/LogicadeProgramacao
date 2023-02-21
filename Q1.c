#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Autor: joice de jesus
*Este programa simula uma calculadora: onde recebe valores e de acordo com a escolha do usuario realiza a operação matematica desejada.
*/
int adic(){
	int e,d,k;
	printf("Informe o valor 1:");
	scanf("%i",&e);
	printf("Informe o valor 2:");
	scanf("%i",&d);	
	k = e + d;
	printf("%i",k);
}
void sub(){
	int e,d,k;
	printf("Informe o valor 1:");
	scanf("%i",&e);
	printf("Informe o valor 2:");
	scanf("%i",&d);	
	k = e - d;
	printf("%i",k);
}
void mult(){
	int e,d,k;
	printf("Informe o valor 1:");
	scanf("%i",&e);
	printf("Informe o valor 2:");
	scanf("%i",&d);	
	k = e * d;
	printf("%i",k);
}
void divi(){
int e,d,k;
	printf("Informe o valor 1:");
	scanf("%i",&e);
	printf("Informe o valor 2:");
	scanf("%i",&d);	
	k = e / d;
	printf("%i",k);
}
void pot(){
	int e,d,k;
	printf("Informe o valor 1:");
	scanf("%i",&e);
	printf("Informe o valor 2:");
	scanf("%i",&d);	
	k = pow(d,e);
	printf("%i",k);
}
void rad(){
	int e,d,k;
	printf("Informe o valor:");
	scanf("%i",&d);	
	k = sqrt(d);
	printf("%i",k);
}



void main(){
		int a,resp;
		printf("1:adicao 2:subtracao 3:multiplicacao 4:divisao 5:potenciacao 6:radiciacao");
		scanf("%i",&resp);
		switch(resp){
	case 1:
		adic(a);break;
	case 2:
		sub(a);break;
	case 3:
		mult(a);break;
	case 4:
		divi(a);break;
	case 5:
		pot(a);break;
	case 6:
		rad(a);break;
	}
}
