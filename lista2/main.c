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

    /*
    10. Fa�a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
    ideal, utilizando as seguintes f�rmulas (onde h corresponde � altura):
     Homens: (72,7 * h) � 58,0
     Mulheres: (62,1 * h) � 44,7

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
    11. Escreva um programa que leia um n�mero inteiro maior do que zero e devolva, na tela, a
    soma de todos os seus algarismos. Por exemplo, ao n�mero 251 corresponder� o valor 8 (2 + 5 + 1).
    Se o n�mero lido n�o for maior do que zero, o programa terminar� com a mensagem:
    �N�mero inv�lido�

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
    12. Ler um n�mero inteiro. Se o n�mero lido for negativo, escreva a mensagem �N�mero
    inv�lido�. Se o n�mero for positivo, calcular o logaritmo deste n�mero.


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
    13. Fa�a um algoritmo que calcule a m�dia ponderada das notas de 3 provas. A primeira e a
    segunda prova t�m peso 1 e a terceira tem peso 2. Ao final, mostrar a m�dia do estudante e
    indicar se o estudante foi aprovado ou reprovado. A nota para aprova��o deve ser igual ou
    superior a 60 pontos.


    float a,b,c,media;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    c = c* 2;

    media = (a + b + c)/4;

    if (media >= 60){
       printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }
    */
    /*
    14. A nota final de um estudante � calculada a partir de tr�s notas atribu�das entre o intervalo
    de 0 at� 10, respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um
    exame final. A m�dia das tr�s notas mencionadas anteriormente obedece aos pesos: Trabalho
    de Laborat�rio: 2; Avalia��o Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
    tela se o aluno est� reprovado (m�dia entre 0 e 2,9), de recupera��o (entre 3 e 4,9) ou se foi
    aprovado. Fa�a todas as verifica��es necess�rias.


    float a=0,b=0,c=0,media=0;

    scanf("%f",&a);
    while(a<0 || a>10){
        printf("Nota invalida\n");
        scanf("%f",&a);
    }
    scanf("%f",&b);
    while(b<0 || b>10){
        printf("Nota invalida\n");
        scanf("%f",&b);
    }
    scanf("%f",&c);
    while(c<0 || c>10){
        printf("Nota invalida\n");
        scanf("%f",&c);
    }

    media = (a+(b*2)+(c*3))/10;

     if (media == 0 && media <= 2.9){
        printf("%.2f\n",media);
       printf("Reprovado\n");
    }else if(media > 3 && media <=4.9){
        printf("%.2f\n",media);
        printf("Recuperacao\n");
    }else{
        printf("%.2f\n",media);
        printf("Aprovado\n");
    }
    */

    /*
    15. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da
    semana correspondente a este n�mero. Isto �, domingo se 1, segunda-feira se 2, e assim por
    diante.


    int a;
    scanf("%d",&a);
    while(a<=0 || a>7){
        printf("Dia invalido\n");
        scanf("%d",&a);
    }

    switch(a){
        case 1:printf("Domingo\n"); break;

        case 2:printf("Segunda-Feira\n");break;

        case 3:printf("Terca-Feira\n");break;

        case 4:printf("Quarta-Feira\n");break;

        case 5:printf("Quinta-Feira\n");break;

        case 6:printf("Sexta-Feira\n");break;

        case 7:printf("Sabado\n");break;

        default:printf("Numero invalido\n");break;
    }

    */

    /*
        16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o m�s
        correspondente a este n�mero. Isto �, janeiro se 1, fevereiro se 2, e assim por diante.


    int a;
    scanf("%d",&a);
    while(a<=0 || a>12){
        printf("Dia invalido\n");
        scanf("%d",&a);
    }

    switch(a){
        case 1:printf("Janeiro\n"); break;

        case 2:printf("Fevereiro\n");break;

        case 3:printf("Marco\n");break;

        case 4:printf("Abril\n");break;

        case 5:printf("Maio\n");break;

        case 6:printf("Junho\n");break;

        case 7:printf("Julho\n");break;

        case 8:printf("Agosto\n");break;

        case 9:printf("Setembro\n");break;

        case 10:printf("Outubro\n");break;

        case 11:printf("Novembro\n");break;

        case 12:printf("Dezembro\n");break;

        default:printf("Numero invalido\n");break;
    }
    */
   system("pause");
   return 0;
}
