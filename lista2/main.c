#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   /* 1. Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.
    int a,b;

   scanf("%d",&a);
   scanf("%d",&b);

   if(a > b){
    printf("%d", a);
   }else{
    printf("%d\n", b);
   }

   */

   /*
   2. Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz quadrada
    do n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.

   int a;

   scanf("%d",&a);

   if(a >= 0){
    printf("%.2f\n", sqrt (a));
   }else{
    printf("Numero invalido\n");
   }

    */
    /*
    3. Leia um n�mero real. Se o n�mero for positivo imprima a raiz quadrada. Do contr�rio, imprima
    o n�mero ao quadrado.



    float a;

   scanf("%f",&a);

   if(a >= 0){
    printf("%.2f\n", sqrt (a));
   }else{
    printf("%.2f\n", pow(a,2));
   }
    */

    /*
    4. Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
     O n�mero digitado ao quadrado
     A raiz quadrada do n�mero digitado



    float a;

   scanf("%f",&a);

   if(a >= 0){
    printf("A raiz do numero %.2f e %.2f\n",a, sqrt (a));
    printf("O quadrado do numero %.2f e %.2f\n",a, pow(a,2));
   }else{
    printf("Numero invalido\n");
   }

   */

    /*
    5. Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou �mpar.


    int a;

   scanf("%d",&a);

   if(a%2 == 0){
    printf("Par\n");
   }else{
    printf("Impar\n");
   }
    */
    /*
    6. Escreva um programa que, dados dois n�meros inteiros, mostre na tela o maior deles, assim
        como a diferen�a existente entre ambos.



    int a,b;

   scanf("%d",&a);
   scanf("%d",&b);


   if(a>b){
    printf("%d\n",a);
    printf("%d\n",a-b);
   }else{
    printf("%d\n",b);
    printf("%d\n",b-a);
   }
    */

    /*
    7. Fa�a um programa que receba dois n�meros e mostre o maior. Se por acaso, os dois n�meros
    forem iguais, imprima a mensagem: �N�meros iguais�


    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);


    if(a == b){
        printf("Numeros iguais\n");
    }else{
        if(a>b){
            printf("%d\n",a);
            printf("%d\n",a-b);
       }else{
            printf("%d\n",b);
            printf("%d\n",b-a);
       }
    }
    */
    /*
    8. Fa�a um programa que leia 2 notas de um aluno, verifique se as notas s�o v�lidas e exiba na
    tela a m�dia destas notas. Uma nota v�lida deve ser, obrigatoriamente, um valor entre 0.0 e
    10.0, onde caso a nota n�o possua um valor v�lido, este fato deve ser informado ao usu�rio e o
    programa termina.

    float a=0,b=0;
    scanf("%f",&a);
    if(a <= 0){
        printf("Numero invalido\n");
        system("pause");
        return 0;
    }
    scanf("%f",&b);
        if(b <= 0){
        printf("Numero invalido\n");
        system("pause");
        return 0;
    }
    printf("%.2f\n",(a+b)/2);

    */

    /*
    9. Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. Se a presta��o for
    maior que 20% do sal�rio imprima: �Empr�stimo n�o concedido�, caso contr�rio imprima:
    �Empr�stimo concedido�

    float a=0,b=0;
    scanf("%f",&a);
    scanf("%f",&b);

    if((a*20/100) >= b){
      printf("Emprestimo concedido\n");
    }else{
        printf("Emprestimo nao concedido\n");
    }
    */
   system("pause");
   return 0;
}
