                     //QUESTÃO 0 - LISTA 1//
/*#include <stdio.h>

main(){
	//Declarar a variável do tipo inteiro pra guardar o tipo de dado pedido no enunciado.
	int num1;
	int num2;
	
	//printf: para imprimir na tela a frase desejada.
	printf("Digite o primeiro numero: ");
	scanf("%i", &num1);
	//scanf: para guardr a variável digitada.
	
	printf ("Digite o segundo numero: ");
	scanf("%i", &num2);
	
	//se o num1 for maior que o num2, imprimir o num2 primeiro, na ordem crescente.
	if(num1>num2){
		printf("%i %i", num2, num1);
	//senão, imprimir o num1 primeiro, na ordem crescente.
	}else{
		printf("%i %i", num1, num2);
	}
}*/

                       //QUESTÃO 1 - LISTA 1//
/*#include <stdio.h>
main(){
	
	// A variável float é utilizada quando tiver número decimal.
	float ValorFinal;
	
	//printf: para imprimir na tela a frase desejada.
	printf("Digite o valor final: ");
	scanf("%f", &ValorFinal);
	//scanf: para guardar a variável digitada.
	
	if(ValorFinal<100){
		printf("R$ %.2f", ValorFinal);
		
	}else if(ValorFinal>=100 && ValorFinal<=200){
		ValorFinal = ValorFinal*0.95;
		printf("R$ %.2f", ValorFinal);
		
	} else {
		ValorFinal = ValorFinal*0.90;
		printf("R$ %.2f", ValorFinal);
	}
}*/

                       //QUESTÃO 2 - LISTA 1//
/*#include <stdio.h> 
main(){
	
	int a;
	int b;
	
    printf("valor do a: \n");
	scanf("%i", &a);
	
    printf("valor do b: \n");
	scanf("%i", &b);
	
	printf("%i %i %i %i %i %i", a-1, a, a+1, b-1, b, b+1);
	
}*/

                        //QUESTÃO 3 - LISTA 2//
/*#include <stdio.h>
main(){

int a;
int b;
int c;

printf("Digite as medidas:\n");
scanf("%i %i %i", &a, &b, &c);

if((a+b)<=c){
	printf("nao forma\n");
	
  }else{
  }if(a==b && b==c && a==c){
        	printf("equilatero\n");
	
       } else if(a==b || b==c || a==c){
	        printf("isosceles\n");
	
       } else if(a!=b && b!=c && a!=c){
	        printf("escaleno\n");
	
}
}*/

                       //QUESTÃO 4 - LISTA 2//
/*#include<stdio.h>
main(){
	
	int a;
	int b;
	int c;
	
	printf("digite a primeira nota: \n");
	scanf("%i", &a);
	
	printf("digite a segunda nota: \n");
	scanf("%i", &b);
	
	printf("digite a terceira nota: \n");
	scanf("%i", &c);
	
	if (a==1 && b==1){
		printf("APROVADO COM A");
		
	}if (a==2 && b==2){
		printf("APROVADO COM B");
		
	}if (a==3 && b==3){
		printf("APROVADO COM C");
		
	}if (a==4 && b==4){
		printf("REPROVADO");
		
	}if (a!=b && b!=c){
    printf("INCONCLUSIVO");
  }
}*/

//QUESTÃO 5 - LISTA 2//
/*#include<stdio.h>
main(){
	
	int a;
	int b;
	
	printf("Digite o valor a: \n");
	scanf("%i", &a);
	
	printf("Digite o valor b: \n");
	scanf("%i", &b);
	
	if(a+2==b || a-2==b){
		printf("%i %i %i %i %i", a-1, a, a+1, b, b+1);

	}else if(a+1==b || a-1==b){
		printf("%i %i %i %i", a-1, a, b, b+1);

	}else if(a==b){
		printf("%i %i %i", a-1, a, a+1);

	}else{
		printf("%i %i %i %i %i %i", a-1, a, a+1, b-1, b, b+1);
	}
	
}*/