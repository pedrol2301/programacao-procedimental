#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
   13. Fa�a um programa que some todos os n�meros naturais abaixo de 1000 que s�o m�ltiplos
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
    14. Fa�a um programa que simula o lan�amento de dois dados, d1 e d2, n vezes, e tem como
    sa�da o n�mero de cada dado e a rela��o entre eles (>, <, =) de cada lan�amento.

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
    15. Fa�a um programa que leia um conjunto n�o determinado de valores, um de cada vez, e
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
            printf ("\nO num�ro ao cubo e: %.3f", c);
            printf("\nA raiz quadrada e: %.3f\n", r);
          }
    }

*/

    /*
    16. Fa�a um programa que apresente um menu de op��es para o c�lculo das seguintes
    opera��es entre dois n�meros:
    */


    system("pause");
    return 0;
}
