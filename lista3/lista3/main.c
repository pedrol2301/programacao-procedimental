#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
   13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
    de 3 ou 5

    int a=0,c=0;

    while(a<=1000){
        if(a%3==0 || a%5==0){
            c = c+a;
        }
        a++;
    }
    printf("%d\n",c);
    */
    /*
    14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
    saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.

    int i, n, d1, d2;


    printf("Digite o numero de lancamentos dos dados: ");
    scanf("%d", &n);


    for(i=1; i<=n; i++){
        scanf("%d", &d1);
        scanf("%d", &d2);
        if (d1>d2){
            printf("Dado 1 \(%d\) > Dado 2 \(%d\)\n", d1, d2);
        }else if(d1<d2){
            printf("Dado 1 \(%d\) < Dado 2 \(%d\)\n", d1, d2);
        }else{
            printf("Dado 1 \(%d\) = Dado 2 \(%d\)\n", d1, d2);
        }
    }
    */

    /*
    15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
    escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada
    de dados com um valor negativo ou zero.

     float q, c, r;
     int entrada;
     while (entrada>0){
        printf("Digite um numero para que seja feito o seu quadrado, o cubo e a raiz ");
        printf("\nPara sair do programa digite um numero negativo ou zero.\n");
        scanf ("%d", &entrada);
          if (entrada>0) {
            q = pow (entrada,2);
            c = pow (entrada, 3);
            r = sqrt (entrada);
            printf("\nO numero ao quadrado e: %.3f", q);
            printf ("\nO numéro ao cubo e: %.3f", c);
            printf("\nA raiz quadrada e: %.3f\n", r);
          }
    }

*/

    /*
    16. Faça um programa que apresente um menu de opções para o cálculo das seguintes
    operações entre dois números:
    */


    system("pause");
    return 0;
}
