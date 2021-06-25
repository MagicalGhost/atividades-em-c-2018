#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados{
    char nome[50];
    char matri[15];
    char curso[20];
    float mensal[4], bimestral[4], media[4];
};

int main(){

    setlocale(LC_ALL, "Portuguese");

    struct dados aluno[5];

    int i, x, j, y;

    for(i = 0;i < 5; i++){
    setbuf(stdin, NULL);
        printf("informe o nome do aluno %dº: ", i+1);
        fgets(aluno[i].nome, 50, stdin);
        printf("informe a matricula do aluno %dº: ", i+1);
        fgets(aluno[i].matri, 15, stdin);
        printf("informe o curso do aluno %dº: ", i+1);
        fgets(aluno[i].curso, 20, stdin);
        system("cls");

        for(j = 0;j < 4; j++){
            printf("informe a nota mensal do aluno %dº: ", i+1);
            scanf("%f", &aluno[i].mensal[j]);
            printf("informe a nota bimestral do aluno %dº:", i+1);
            scanf("%f", &aluno[i].bimestral[j]);
            aluno[i].media[j] = (aluno[i].mensal[j]+aluno[i].bimestral[j])/2;
            }
        system("cls");
        printf("aluno %dº concluido!\n", i+1);
        system("pause");
        system("cls");
        }
    printf("voce deseja visualizar as notas de algum aluno?\n[1] Sim\n[!=1] Não\n");
    scanf("%d", &y);
    if(y == 1){
        printf("selecione o aluno que voce deseja visualizar as informaçoes\n[1] 1º aluno\n[2] 2º aluno\n[3] 3º aluno\n[4] 4º aluno\n[5] 5º aluno\n aluno: ");
        scanf("%d", &x);
    switch(x){
        case 1:
            printf("nome do aluno: %s\nmatricula: %s\ncurso: %s\nmedia 1: %f\nmedia 2: %f\nmedia 3: %f\nmedia 4: %f\n", aluno[0].nome, aluno[0].matri, aluno[0].curso, aluno[0].media[0], aluno[0].media[1], aluno[0].media[2], aluno[0].media[3]);
        break;
        case 2:
            printf("nome do aluno: %s\nmatricula: %s\ncurso: %s\nmedia 1: %f\nmedia 2: %f\nmedia 3: %f\nmedia 4: %f\n", aluno[1].nome, aluno[1].matri, aluno[1].curso, aluno[1].media[0], aluno[1].media[1], aluno[1].media[2], aluno[1].media[3]);
        break;
        case 3:
            printf("nome do aluno: %s\nmatricula: %s\ncurso: %s\nmedia 1: %f\nmedia 2: %f\nmedia 3: %f\nmedia 4: %f\n", aluno[2].nome, aluno[2].matri, aluno[2].curso, aluno[2].media[0], aluno[2].media[1], aluno[2].media[2], aluno[2].media[3]);
        break;
        case 4:
            printf("nome do aluno: %s\nmatricula: %s\ncurso: %s\nmedia 1: %f\nmedia 2: %f\nmedia 3: %f\nmedia 4: %f\n", aluno[3].nome, aluno[3].matri, aluno[3].curso, aluno[3].media[0], aluno[3].media[1], aluno[3].media[2], aluno[3].media[3]);
        break;
        case 5:
            printf("nome do aluno: %s\nmatricula: %s\ncurso: %s\nmedia 1: %f\nmedia 2: %f\nmedia 3: %f\nmedia 4: %f\n", aluno[4].nome, aluno[4].matri, aluno[4].curso, aluno[4].media[0], aluno[4].media[1], aluno[4].media[2], aluno[4].media[3]);
        break;
        default:
            printf("valor invalido!");
        break;
            }
        }
    else if(y!= 1){
        printf("aperte qualquer tecla para sair!");
    }
    return 0;
}
