#include<stdio.h>
#include<stdlib.h>
/*Autor: joice de jesus
* Este programa recebe dia e mes de nascimento de uma pessoa e mostra qual o seu signo.
*/

void recebe(int *d, int *m){
	
	printf("Informe o dia de nascimento:");
	scanf("%i",d);
	printf("Informe o mes de nascimento:");
	scanf("%i",m);
}
void signo(int dia,int mes){

	switch(mes){
		case 1: if(dia>=22){
		printf("Aquario!");	
		}else{
		printf("capricornio");
		}break;
		case 2: if(dia>=19){
			printf("peixes!");
		}else{
			printf("Aquario!");
		}break;
		case 3: if(dia>=23){
			printf("Aries!");
		}else{
			printf("peixes!");
		}break;
		case 4: if(dia>=21){
			printf("Touro!");
		}else{
			printf("Aries!");
		}break;
		case 5: if(dia>=21){
			printf("gemeos!");
		}else{
			printf("Touro!");
		}break;
		case 6: if(dia>=21){
			printf("cancer!");
		}else{
			printf("gemios!");
		}break;
		case 7: if(dia>=22){
			printf("leao!");
		}else{
			printf("cancer!");
		}break;
		case 8: if(dia>=23){
			printf("virgem!");
		}else{
			printf("leao!");
		}break;
		case 9: if(dia>=23){
			printf("libra!");
		}else{
			printf("virgem!");
		}break;
		case 10: if(dia>=23){
			printf("escorpiao!");
		}else{
			printf("libra!");
		}break;
		case 11: if(dia>=22){
			printf("sargitario!");
		}else{
			printf("escorpiao!");
		}break;
		case 12: if(dia>=22){
			printf("capricornio!");
		}else{
			printf("sargitario!");
		}break;
	}
}
void saida(){
	int a,b;
	recebe(&a,&b);
	signo(a,b);
}

void main(){
	saida();	
}
