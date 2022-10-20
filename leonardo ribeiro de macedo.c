
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
       char questao, situacao;
       float a, b , hipotenusa , oposto, adjacente, seno; 
       char obra;
        int mesInicio, mesTermino, codigo;

    printf("Nome da disciplina: Algoritmo e programacao \n");
    printf("Professor(a): Joyce siqueira \n");
    printf("Nome do aluno: Leonardo Ribeiro e Macedo \n");
    printf("Matricula: UC22200681 \n");
    printf("Curso: Ciencia da computacao \n");
    printf("Link do repositorio do GitHub: https://github.com/Leoribeiro61/prova-algoritmos-ucb.git \n");
    printf("O software utilizado foi o DevC++ \n");

    printf("Digite a questao que deseja resolver: A, B ou C \n");
    scanf("%c", &questao);


    switch (questao)
    {
        case 'A':
        printf("Digite um valor para catOposto: \n");
        scanf("%f", &oposto );

        printf("Digite um valor para catAdjacente: \n");
        scanf("%f", &adjacente);
        	hipotenusa = sqrt ((oposto * oposto) + (adjacente * adjacente));
               
        printf("o valor da hipotenusa: %.3f \n", hipotenusa);

            seno = (oposto / hipotenusa;
        printf("O valor do seno e %.3f", seno);
        break;

        
        
        case 'C':
        printf("Qual o nome da obra? \n");
        scanf("%s", &obra);
        printf("Digite o mes de inicio da obra: \n");
        scanf("%d", &mesInicio);
        printf("Digite o mes do termino da obra: \n");
        scanf("%d", &mesTermino);
        printf("situacao da obra \n");
        printf("1 - Obra concluida \n");
        printf("2 - Problemas no projeto \n");
        printf("3 - Atraso nos repasses financeiros \n");
        printf("4 - Greve dos trabalhadores\n");
        printf("5 - Falta de materiais \n");
        printf("6 - Falta de equipamentos \n");
        printf("Digite o codigo referente a situacao da obra: \n");
        scanf("%d", &codigo);

            switch(situacao)
                case 1: printf("Obra concluida");break;
                case 2: printf("Problemas no projeto");break;
                case 3: printf("Atraso nos repasses financeiros");break;
                case 4: printf("Greve dos trabalhadores");break;
                case 5: printf("Falta de materiais");break;
                case 6: printf("Falta de equipamentos");break;

                printf("nome da obra: %s", &obra);break;
                printf("mes de inicio: %d", &mesInicio);break;
                printf("mes do termino: %s", &mesTermino);break;
                printf("situacao da obra", &codigo);break;



        default: printf("Opcao invalida!");



	}
}