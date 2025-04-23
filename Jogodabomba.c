#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

int inteiro(const char *str){
    if(str == NULL || *str == '\0') return 0;

    while (*str){
        if(!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

int MenuCampo()
{
    int slc_tam, verif = 0;
    char input[100];

    printf("-------- Bem vindo ao Jogo da Bomba --------\n");
    printf("Escolha o tamanho do campo minado\n");
    printf("1 -> 4 x 4\n");
    printf("2 -> 5 x 5\n");
    printf("3 -> 6 x 6\n");
    printf("4 -> 7 x 7\n");
    printf("5 -> 8 x 8\n");
    do{
        printf("Digite sua opcao(1-5): ");
        if(fgets(input, sizeof(input), stdin) == NULL){
            continue;
        }
        input[strcspn(input, "\n")] = '\0';

        if(inteiro(input)){
            slc_tam = atoi(input);

            if(slc_tam >= 1 && slc_tam <= 5){
                verif = 1;
            } else {
                printf("ERRO!! Digite um numero entre 1 e 5.\n");
            }
        } else {
            printf("ERRO!! Digite apenas um numero inteiro.\n");
        }
    }while(verif == 0);
    
    switch(slc_tam){
        case 1:
            printf("Voce escolheu o campo 4 x 4");
            return 4 ;
        case 2:
            printf("Voce escolheu o campo 5 x 5");
            return 5;
        case 3:
            printf("Voce escolheu o campo 6 x 6");
            return 6;
        case 4:
            printf("Voce escolheu o campo 7 x 7");
            return 7;
        case 5:
            printf("Voce escolheu o campo 8 x 8");
            return 8;
        default: 
            return 5;
    }
}

int DecideQntBombas(int campo , int dif)
{
    int qnt = 0;
    if(dif == 4){
        qnt = campo*campo - campo;
    } else {
        qnt = campo/2 * dif;
    }
    return qnt;
}

int MenuDificuldade(int campo)
{
    int slc_dif, verif = 0;
    char input[100];
    printf("Escolha a dificuldade do campo minado\n");
    printf("1 -> Facil\n");
    printf("2 -> Medio\n");
    printf("3 -> Dificil\n");
    printf("4 -> Ultra Dificil\n");
    do{
        printf("Digite sua opcao(1-5): ");
        if(fgets(input, sizeof(input), stdin) == NULL){
            continue;
        }
        input[strcspn(input, "\n")] = '\0';

        if(inteiro(input)){
            slc_dif = atoi(input);

            if(slc_dif >= 1 && slc_dif <= 4){
                verif = 1;
            } else {
                printf("ERRO!! Digite um numero entre 1 e 5.\n");
            }
        } else {
            printf("ERRO!! Digite apenas um numero inteiro.\n");
        }
    }while(verif == 0);
    
    switch(slc_dif){
        case 1:
            printf("Voce escolheu a dificuldade Facil");
            return DecideQntBombas(campo, 1);
        case 2:
            printf("Voce escolheu a dificuldade Medio");
            return DecideQntBombas(campo, 2);
        case 3:
            printf("Voce escolheu a dificuldade Dificil");
            return DecideQntBombas(campo, 3);
        case 4:
            printf("Voce escolheu a dificuldade Ultra Dificil");
            return DecideQntBombas(campo, 4);
        default:
            return DecideQntBombas(campo, 2);
    }
}



char **SorteiaBomba(char **campo, int l,int dif)
{
    int c = 0, i, j;
    srand(time(NULL));
    while(c < dif){
        i = rand() % l;
        j = rand() % l;
        if(campo[i][j] == '+'){
            continue;
        } else {
            campo[i][j] = '+';
        }
        c++;
    }
    return campo;
}

char **PreencheCampo(char **campo, int l)
{
    printf("\n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            campo[i][j] = '-';
        }
    }
    return campo;
}

char **CriaCampo(int l)
{
    char **campo;
    campo = malloc(l * sizeof(char*));
    if(campo == NULL){
        printf("\nErro ao alocar memoria!!\n");
        exit(1);
    }

    for(int i = 0; i < l; i++){
        campo[i] = malloc(l * sizeof(char)); 
        if(campo[i] == NULL){
            printf("\nErro ao alocar memoria!!\n");
            exit(1);
        }
    }
    return campo;
}

void jogar(char **campo)
{
    

}


int main()
{
    int slc_campo, slc_dif;
    char **campo;
    slc_campo = MenuCampo();
    slc_dif = MenuDificuldade(slc_campo);
    campo = CriaCampo(slc_campo);
    campo = PreencheCampo(campo, slc_campo);
    campo = SorteiaBomba(campo, slc_campo, slc_dif);
    
    printf("\n");
    for(int i = 0; i < slc_campo; i++){
        for(int j = 0; j < slc_campo; j++){
            printf("%c ", campo[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}