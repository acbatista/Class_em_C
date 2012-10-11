/* 
 * File:   tex.c
 * Author: nego
 *
 * Created on 1 de Outubro de 2012, 13:14
 */

#include <stdio.h>
#include <stdlib.h>

nt main(int argc, const char * argv[])
{    
    int n1, n2, n3, maior, menor;
    
    printf("Digite o primeiro nuemro: ");
    scanf("%d",&n1);
    
    maior = n1;
    menor = n1;
    
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    
    if (n2 > maior ){
        maior = n2;
    }
    if (n2 < menor){
        menor = n2;
    }
    
    printf("Digite o terceiro numero: ");
    scanf("%d",&n3);
    
    if (n3 > maior ){
        maior = n3;
    }
    if (n3 < menor){
        menor = n3;
    }
    
    printf("O Menor numero e: %d", menor);
    printf("\nO Maior numero e: %d", maior);
    
    return 0;
    
    
    
    
}
