#include<stdio.h>
#include<stdlib.h>
/*Autor: joice de jesus
* questão do livro-> Matematica para o 2° Grau volume 1, por (Gentil,Marcondes,Grecco,Bellotto,Sérgio):Capitulo 4 , questão 17 pagina 52.
*Se D={1,2,3,4,5} é dominio da função f(x) = (x-2)(x-4),então seu conjunto imagem tem?
a)1 elemento
b)3 elementos
c)5 elementos
d)2 elementos
e)4 elementos
*/

void entrada(int *dominio){
	int d;
	printf("Informe o Dominio: ");
	scanf("%i",&d);
	
	*dominio = d;
}

int funcao(int dominio){
		int fx;
		
		fx = (dominio - 2)*(dominio - 4);
	
		return fx;
}

int compara(){
	int d,cont,qd,c=0;
	
	for (cont=1;cont<=5;cont++){
	
	entrada(&d);
	
	if(cont==1){
	qd = funcao(d);
	}
	if(funcao(d)!=qd)
	c++;
	}
		
	return c;
}
int resposta(){
	
	switch(compara()){
		
		case 1: printf("a)1 elemento");break;
		case 2: printf("d)2 elementos");break;
		case 3: printf("b)3 elementos");break;
		case 4: printf("e)4 elementos");break;
		case 5: printf("c)5 elementos");break;
	}
}

void main(){
	
	resposta();
}
