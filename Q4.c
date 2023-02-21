#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Autor: joice de jesus
* Este programa recebe um conjunto de numeros reais  que correspondem a angulos em graus e mostra o seno do angulo.
*/

void recebe(float *x){
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Informe o angulo:");
	scanf("%f",x);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
float rad(float x){
	float pi = 3.1414592;
	float rad;
	
	rad = (x * pi) / 180;
	
	return rad;
}
int fatorial(int n){
	int cont,c=1;
	for(cont=1;cont<=n;cont++){
		c = c * cont;
	}
	return c;
}
float calculo(float a){
	float e1,e2,e3,e4,e5,e6,e7,s=0.0;
	int cont,qp;
	
	setlocale(LC_ALL,"portuguese");
	
	for(cont=0;cont<6;cont++){
		e1 = pow((-1),cont);
		e2 = (2*cont) + 1;
		e3 = fatorial(e2);
		e4 = rad(a);
		e5 = pow(e4,e2);
		e6 = e1 / e3;
		e7 = e6 * e5;
		s = s + e7;
	}
	return s;	
}
void saida(float a,float s){
	printf("\nSeno de [%3.0f° ] = %f",a,s);
}
void main(){
	int qp;
	float a,s;
	setlocale(LC_ALL,"portuguese");
	do{
	recebe(&a);
	s = calculo(a);
	saida(a,s);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\n*Deseja encerrar o programa [digite 0] ou qualquer outro valor para continuar!*");
	scanf("%i",&qp);
}while(qp!=0);
}

