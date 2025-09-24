#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){

     // inicializa a semente do rand()
    int escolhaJogador, escolhaComputador; 
    srand (time(0)); 

    printf("**JOGO DE JOKENPO**\n");
    printf("Escolha uma opção:\n");
    printf("1. PEDRA\n");
    printf("2. PAPEL\n");
    printf("3. TESOURA\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);


     // Gera jogada do computador (entre 1 e 3)
    escolhaComputador = rand() % 3 + 1; 

     // Mostra escolha do jogador
    switch (escolhaJogador)
    {
    case 1:
    printf("Jogador: pedra-\n");
    break;

     case 2:
    printf("Jogador: papel-\n");
    break;
    
    case 3:
    printf("Jogador: tesoura-\n");
    break;

    // sai do programa se o jogador digitou errado
    default:
    printf("Opção invalida.\n");
        break;
    }

    // Mostra escolha do computador
    switch (escolhaComputador)
    {

    case 1:
    printf("Computador: pedra-\n");
    break;
      
     case 2:
    printf("Computador: papel-\n");
    break;
    
    case 3:
    printf("Computador: tesoura-\n");
    break;

    }

    // Resultado
    if (escolhaComputador == escolhaJogador)
    {
        printf("***JOGO EMPATOU!***\n");
    } 
    
    else if ((escolhaJogador == 1) && (escolhaComputador == 3) || 
            (escolhaJogador == 2) && (escolhaComputador == 1) ||
            (escolhaJogador == 3) && (escolhaComputador == 2))
    {
       printf("***VOCÊ GANHOU!!***");
    }

    else{
        printf("VOCÊ PERDEU!");
    }
    

    return 0 ;
}