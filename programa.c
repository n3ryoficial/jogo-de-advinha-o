#include <stdio.h>

int main(){
    // imprimindo o cabeçalho do jogo 
    printf("*************\n");
    printf("Bem vindo ao nosso jogo!\n");
    printf("*************\n");

    //variavel int
    int numerosecreto = 42;
   
    
    // numeos decimais com virgula 
    double pontos = 1000;
    
    int chute;

    //repetição loop 
        for(int i = 1; i <= 3; i++){

        printf("qual é numero?");
        scanf("%d", &chute);
        printf("Seu chute é : %d\n", chute);

        if (chute < 0)
        {
            printf("NÃO É  PERMITIDO NUMEROS NEGATIVOS\n");
        }
        


        // condição if e else 
        if (chute == numerosecreto)
        {
            printf("PARABENS VOCE ACERTOU :) \n");
            printf("YOU WIN\n");

            break;
        }
        else{
            if (chute > numerosecreto)
            {
                printf("seu nuemro foi maior! \n");
            }
            if (chute < numerosecreto)
            {
                printf("seu foi menor! \n ");
            }
            
            printf("VOCE ERROU :(  \n");
            printf("try again! \n");
        }
        
        double pontosperdidos = (chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
    printf("GAME OVER !!\n ");
    printf("***TOTAL SCORE***: %.1f\n", pontos);


    return 0;
}
