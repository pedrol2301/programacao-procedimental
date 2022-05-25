#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   /* 1. Faça um programa que receba dois números e mostre qual deles é o maior.
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
   2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
    do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.

   int a;

   scanf("%d",&a);

   if(a >= 0){
    printf("%.2f\n", sqrt (a));
   }else{
    printf("Numero invalido\n");
   }

    */
    /*
    3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima
    o número ao quadrado.



    float a;

   scanf("%f",&a);

   if(a >= 0){
    printf("%.2f\n", sqrt (a));
   }else{
    printf("%.2f\n", pow(a,2));
   }
    */

    /*
    4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
     O número digitado ao quadrado
     A raiz quadrada do número digitado



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
    5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.


    int a;

   scanf("%d",&a);

   if(a%2 == 0){
    printf("Par\n");
   }else{
    printf("Impar\n");
   }
    */
    /*
    6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
        como a diferença existente entre ambos.



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
    7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
    forem iguais, imprima a mensagem: “Números iguais”


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
    8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
    tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
    10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
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
    9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
    maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
    “Empréstimo concedido”

    float a=0,b=0;
    scanf("%f",&a);
    scanf("%f",&b);

    if((a*20/100) >= b){
      printf("Emprestimo concedido\n");
    }else{
        printf("Emprestimo nao concedido\n");
    }
    */

    /*
    10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
    ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
     Homens: (72,7 * h) – 58,0
     Mulheres: (62,1 * h) – 44,7

        float a=0;
        char b;
        printf("Digite sua altura => ");
        scanf("%f",&a);
        printf("Homem (H) ou Mulher (M)? => ");
        scanf(" %c",&b);

        if(b == "b"){
          printf("peso ideal => %.2f\n",(72.7 * a)- 58.0);
        }else{
           printf("peso ideal => %.2f\n",(62.1 * a)- 44.7);
        }
    */
    /*
    11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
    soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1).
    Se o número lido não for maior do que zero, o programa terminará com a mensagem:
    “Número inválido”

    int a,soma=0;
   scanf("%d",&a);
   if(a>0){
       while(a>0){
       soma=soma+a%10;
       a=a/10;
       }
   printf("%d\n",soma);
   }else{
       printf("Numero invalido\n");
   }
    */

    /*
    12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
    inválido”. Se o número for positivo, calcular o logaritmo deste número.


    int a;
    float b=0.00;
   scanf("%d",&a);
   if(a>0){
        b = log(a);
       printf("%.2f\n",b);
   }else{
       printf("Numero invalido\n");
   }
    */

    /*
    13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
    segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
    indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
    superior a 60 pontos.

    */
   system("pause");
   return 0;
}
