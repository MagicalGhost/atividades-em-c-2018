#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados{

    char nome[50];
    int idade;
    char endereco[50];
    char numero[50];

};

int main(){

    setlocale(LC_ALL, "Portuguese");

    struct dados gente[7];
    int i, x, y, z;

    for(i = 0; i < 7; i++){

        setbuf(stdin, NULL);

        printf("informe o numero da pessoa que voce deseja preencher os dados:\n[1] pessoa 1\n[2] pessoa 2\n[3] pessoa 3\n[4] pessoa 4\n[5] pessoa 5\n[6] pessoa 6\n[7] pessoa 7\n***SE ESCOLHER A MESMA PESSOA JA PREENCHIDA, IRA COBRIR OS DADOS JA SALVOS***\n");
        scanf("%d", &x);
        switch(x){

        case 1:

            setbuf(stdin, NULL);

            printf("informe o nome da 1º pessoa: ");
            fgets(gente[i].nome, 50, stdin);

            printf("informe a idade da 1º pessoa: ");
            scanf("%d", &gente[i].idade);

            setbuf(stdin, NULL);

            printf("informe o endereço da 1º pessoa: ");
            fgets(gente[i].endereco, 50, stdin);

            printf("informe o numero da 1º pessoa: ");
            fgets(gente[i].numero, 50, stdin);

            system("cls");

            break;
        case 2:
            setbuf(stdin, NULL);

            printf("informe o nome da 2º pessoa: ");
            fgets(gente[i].nome, 50, stdin);

            printf("informe a idade da 2º pessoa: ");
            scanf("%d", &gente[i].idade);

            setbuf(stdin, NULL);

            printf("informe o endereço da 2º pessoa: ");
            fgets(gente[i].endereco, 50, stdin);

            printf("informe o numero da 2º pessoa: ");
            fgets(gente[i].numero, 50, stdin);

            system("cls");

            break;
        case 3:
            setbuf(stdin, NULL);

            printf("informe o nome da 3º pessoa: ");
            fgets(gente[i].nome, 50, stdin);

            printf("informe a idade da 3º pessoa: ");
            scanf("%d", &gente[i].idade);

            setbuf(stdin, NULL);

            printf("informe o endereço da 3º pessoa: ");
            fgets(gente[i].endereco, 50, stdin);

            printf("informe o numero da 3º pessoa: ");
            fgets(gente[i].numero, 50, stdin);

            system("cls");

            break;
        case 4:
            setbuf(stdin, NULL);

            printf("informe o nome da 4º pessoa: ");
            fgets(gente[i].nome, 50, stdin);

            printf("informe a idade da 4º pessoa: ");
            scanf("%d", &gente[i].idade);

            setbuf(stdin, NULL);

            printf("informe o endereço da 4º pessoa: ");
            fgets(gente[i].endereco, 50, stdin);

            printf("informe o numero da 4º pessoa: ");
            fgets(gente[i].numero, 50, stdin);

            system("cls");

            break;
        case 5:
            setbuf(stdin, NULL);

            printf("informe o nome da 5º pessoa: ");
            fgets(gente[i].nome, 50, stdin);

            printf("informe a idade da 5º pessoa: ");
            scanf("%d", &gente[i].idade);

            setbuf(stdin, NULL);

            printf("informe o endereço da 5º pessoa: ");
            fgets(gente[i].endereco, 50, stdin);

            printf("informe o numero da 5º pessoa: ");
            fgets(gente[i].numero, 50, stdin);

            system("cls");

            break;
        case 6:
            setbuf(stdin, NULL);

            printf("informe o nome da 6º pessoa: ");
            fgets(gente[i].nome, 50, stdin);

            printf("informe a idade da 6º pessoa: ");
            scanf("%d", &gente[i].idade);

            setbuf(stdin, NULL);

            printf("informe o endereço da 6º pessoa: ");
            fgets(gente[i].endereco, 50, stdin);

            printf("informe o numero da 6º pessoa: ");
            fgets(gente[i].numero, 50, stdin);

            system("cls");

            break;
        case 7:
            setbuf(stdin, NULL);

            printf("informe o nome da 7º pessoa: ");
            fgets(gente[i].nome, 50, stdin);

            printf("informe a idade da 7º pessoa: ");
            scanf("%d", &gente[i].idade);

            setbuf(stdin, NULL);

            printf("informe o endereço da 7º pessoa: ");
            fgets(gente[i].endereco, 50, stdin);

            printf("informe o numero da 7º pessoa: ");
            fgets(gente[i].numero, 50, stdin);

            system("cls");

            break;
        default:
            printf("OPÇÃO INVALIDA!!!");
        }
    }
    printf("voce deseja visualizar os dados de alguma pessoa?\n[1] Sim\n[!=1] Não\n");
    scanf("%d", &y);
    if(y == 1){
        printf("selecione a pessoa que voce deseja visualizar as informaçoes\n[1] 1º pessoa\n[2] 2º pessoa\n[3] 3º pessoa\n[4] 4º pessoa\n[5] 5º pessoa\n[6] 6º pessoa\n[7] 7º pessoa\n ");
        scanf("%d", &z);
    switch(z){
        case 1:
            printf("nome da pessoa: %s\nidade: %d\nendereço: %s\nnumero : %s\n", gente[0].nome, gente[0].idade, gente[0].endereco, gente[0].numero);
        break;
        case 2:
            printf("nome da pessoa: %s\nidade: %d\nendereço: %s\nnumero : %s\n", gente[1].nome, gente[1].idade, gente[1].endereco, gente[1].numero);
        break;
        case 3:
            printf("nome da pessoa: %s\nidade: %d\nendereço: %s\nnumero : %s\n", gente[2].nome, gente[2].idade, gente[2].endereco, gente[2].numero);
        break;
        case 4:
            printf("nome da pessoa: %s\nidade: %d\nendereço: %s\nnumero : %s\n", gente[3].nome, gente[3].idade, gente[3].endereco, gente[3].numero);
        break;
        case 5:
            printf("nome da pessoa: %s\nidade: %d\nendereço: %s\nnumero : %s\n", gente[4].nome, gente[4].idade, gente[4].endereco, gente[4].numero);
        break;
        case 6:
            printf("nome da pessoa: %s\nidade: %d\nendereço: %s\nnumero : %s\n", gente[5].nome, gente[5].idade, gente[5].endereco, gente[5].numero);
        break;
        case 7:
            printf("nome da pessoa: %s\nidade: %d\nendereço: %s\nnumero : %s\n", gente[6].nome, gente[6].idade, gente[6].endereco, gente[6].numero);
        break;
        default:
            printf("valor invalido!");
        break;
            }
        }
    else if(y!= 1){
        printf("aperte qualquer tecla para sair!");
    }
}
