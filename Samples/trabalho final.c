#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct dados{
    char nome[30];
    char matricula[10];
    char curso[15];
    char ano[4];
    char telefone[15];
    char classificacao[3];
};
int main()
{
    int a,b,d,h,j;
    char c[30],e[4],f[15],g[3],i[10];
    struct dados aluno[500];
    setlocale(LC_ALL,"portuguese");
    a=1;
    while(a==1){
        printf("1) Cadastrar\n");
        printf("2) Localizar\n");
        printf("3) Limpar\n");
        printf("Informe a função: ");
        scanf("%d",&b);
        system("cls");
        switch(b){
        case 1:
            printf("Informações do aluno------------------");
            printf("\nInforme o nome do aluno: ");
            setbuf(stdin,NULL);
            gets(c);
            printf("Informe o curso do aluno: \n");
            printf("1) Informática\n");
            printf("2) Administração\n");
            printf("3) Alimentos\n");
            printf("4) Fisíca\n");
            printf("5) Matemática\n");
            printf("Informe aqui: ");
            setbuf(stdin,NULL);
            scanf("%d",&d);
            printf("Informe o ano em que o aluno entrou: ");
            setbuf(stdin,NULL);
            gets(e);
            printf("Informe o telefone do aluno: ");
            setbuf(stdin,NULL);
            gets(f);
            printf("Informe a classificação do aluno: ");
            setbuf(stdin,NULL);
            gets(g);
            printf("Informe novamente: ");
            setbuf(stdin,NULL);
            scanf("%d",&h);

            strcpy(i,e);
            switch(d){
            case 1:
                strcat(i,"INFO");
                strcat(i,g);
                strcat(aluno[h].curso,"Informática");
                break;
            case 2:
                strcat(i,"ADM");
                strcat(i,g);
                strcat(aluno[h].curso,"Administração");
                break;
            case 3:
                strcat(i,"AMT");
                strcat(i,g);
                strcat(aluno[h].curso,"Alimentos");
                break;
            case 4:
                strcat(i,"FIS");
                strcat(i,g);
                strcat(aluno[h].curso,"Fisíca");
                break;
            case 5:
                strcat(i,"MAT");
                strcat(i,g);
                strcat(aluno[h].curso,"Matemática");
                break;
            }
            strcpy(aluno[h].nome,c);
            strcpy(aluno[h].ano,e);
            strcpy(aluno[h].telefone,f);
            strcpy(aluno[h].classificacao,g);
            strcpy(aluno[h].matricula,i);
            break;
        case 2:
            printf("Informe a classificação do aluno: ");
            setbuf(stdin,NULL);
            scanf("%d",&h);
            system("cls");
            printf("Informações do aluno------------------");
            printf("\nNome: %s",aluno[h].nome);
            printf("\nMatrícula: %s",aluno[h].matricula);
            printf("\nCurso: %s",aluno[h].curso);
            printf("\nAno de Entrada: %s",aluno[h].ano);
            printf("\nTelefone: %s",aluno[h].telefone);
            printf("\nClassificação: %s",aluno[h].classificacao);
            system("pause");
            break;
        case 3:
            printf("Informe a classificação do aluno: ");
            setbuf(stdin,NULL);
            scanf("%d",&h);
            system("cls");
            printf("Deseja apagar os dados de: %s\n",aluno[h].nome);
            printf("1) Sim\n");
            printf("2) Não\n");
            printf("Informe aqui: ");
            scanf("%d",&j);
            switch(j){
            case 1:
                strcat(aluno[h].nome," ");
                strcat(aluno[h].matricula," ");
                strcat(aluno[h].curso," ");
                strcat(aluno[h].ano," ");
                strcat(aluno[h].telefone," ");
                strcat(aluno[h].classificacao," ");
                break;
            case 2:
                break;
            }
            break;
        }
        system("cls");
        printf("Quer Continuar?\n");
        printf("1)Sim\n");
        printf("2)Não\n");
        printf("Informe aqui: ");
        scanf("%d",&a);
        system("cls");
    }
    system("cls");
    printf("FIM!\n");
    system("pause");
    return 0;
}
