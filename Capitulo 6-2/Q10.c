#include <stdio.h>
#include <stdlib.h>

//define o numero de linhas e colunas
#define linha 3
#define coluna 10

int main() {
	
	int notas[linha][coluna]; //a matriz com as notas;
    int l, c; //auxiliares da matriz;
    int menor; //auxiliar para calculo da menor nota;
    int prova1, prova2, prova3; //auxiliar para contar as menores notas em prova;
    
    for (l = 0; l < linha; l++) {
        printf("\nNotas para a prova %d\n", l+1);
        for (c = 0; c < coluna; c++) {
            printf("Nota para o aluno %d = ", c+1);
            scanf("%d", &notas[l][c]);
        }
    }
    
    printf("\n\n=======================================");
    printf("\n\nRELATORIO: ");
    printf("\n=====================================\n");
    prova1 = prova2 = prova3 = 0;//zera os contadores de alunos com menores notas;
    
    for(c = 0; c < coluna; c++) {
        //para cada aluno mostra o numero, as notas, a menor nota;
        printf("\n\n\nPara o aluno %d as notas foram: \n\t", c+1);
        menor = 10; //marca a menor nota para reducao;   
        for (l = 0; l < linha; l++) {
            //identifica a menor nota;
            if(notas[l][c] <= menor)
                menor = notas[l][c];
            
            //imprime as notas
            printf("Nota para a prova %d foi = %d\n\t", l+1, notas[l][c]);
        }
        
        //imprime a menor nota
        printf("\n\tPara este aluno a MENOR nota foi: %d", menor);
        
        //conta o total de alunos com menores notas nas provas 1, 2 e 3
        for (l = 0; l < linha; l++) {
            if(menor == notas[l][c] && l == 0){
                prova1++;
                break;
            } else if(menor == notas[l][c] && l == 1) {
                prova2++;
                break;
            }else if(menor == notas[l][c] && l == 2) {
                prova3++;
                break;
            }
        }
    }
    
    //imprime o total de alunos que teriam a menor nota nas provas 1, 2, e 3;
    printf("\n\n\nQuantidade de alunos que tiveram menor notas na prova 1 foi de %d\n", prova1);
    printf("Quantidade de alunos que tiveram menor notas na prova 2 foi de %d\n", prova2);
    printf("Quantidade de alunos que tiveram menor notas na prova 3 foi de %d\n", prova3);
	
	return 0;
}
