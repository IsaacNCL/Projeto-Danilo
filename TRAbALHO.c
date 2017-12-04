  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  #include <TIME.H>
void  sleep(time_t delay)
{
time_t timer0,timer1;
time(&timer0);
do{
time(&timer1);
}
while((timer1-timer0)<delay);
}
void menuemprestimo()
{
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°              EMPRESTIMOS                    °\n"
"\t\t°              1. NOVO EMPRESTIMO             °\n"
"\t\t°              2. CONFIRMAR DEVOLUCAO         °\n"
"\t\t°              3. CANCELAR EMPRESTIMO         °\n"
"\t\t°              4. LISTAR EMPRESTIMOS          °\n"
"\t\t°              4. VOLTAR                      °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°                                             °\n"
"\t\t°               DIGITE SUA OPCAO:             °\n"
"\t\t°                                             °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
}
void listaemprestimo()
{
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°              LISTAR EMPRESTIMOS POR:        °\n"
"\t\t°              1. LISTAR TODOS                °\n"
"\t\t°              2. LISTAR POR LIVRO            °\n"
"\t\t°              3. LISTAR POR ALUNO            °\n"
"\t\t°              4. VOLTAR                      °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°                                             °\n"
"\t\t°               DIGITE SUA OPCAO:             °\n"
"\t\t°                                             °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
}
void menu()
{
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°              MENU DE OPCOES                 °\n"
"\t\t°                1. ACERVO                    °\n"
"\t\t°                2. ALUNO                     °\n"
"\t\t°                3. EMPRESTIMO                °\n"
"\t\t°                4. SAIR                      °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°                                             °\n"
"\t\t°               DIGITE SUA OPCAO:             °\n"
"\t\t°                                             °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
}
void menuacervo()
{
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°                   ACERVO                    °\n"
"\t\t°             1. CADASTRAR LIVRO              °\n"
"\t\t°             2. EDITAR LIVRO                 °\n"
"\t\t°             3. REMOVER LIVRO                °\n"
"\t\t°             4. LISTA LIVROS                 °\n"
"\t\t°             5. VOLTAR                       °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°                                             °\n"
"\t\t°               DIGITE SUA OPCAO:             °\n"
"\t\t°                                             °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
}
void menuaalunos()
{
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°                   ALUNOS                    °\n"
"\t\t°             1. CADASTRAR ALUNO              °\n"
"\t\t°             2. REMOVER ALUNO                °\n"
"\t\t°             3. EDITAR ALUNO                 °\n"
"\t\t°             4. LISTAR ALUNOS                °\n"
"\t\t°             5. VOLTAR                       °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°                                             °\n"
"\t\t°               DIGITE SUA OPCAO:             °\n"
"\t\t°                                             °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
}
void carregar()
{
printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"
"\t\t°                                             °\n"
"\t\t°               LENDO OPCAO...                °\n"
"\t\t°                                             °\n"
"\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
sleep(3);
system("cls");
}
typedef struct{
char CLIVRO[50];
char NLIVRO[100];
char ALIVRO[100];
int Quant;
char area[50];
}LIVRO;
typedef struct{
char Nome[50];
int Matri;
int CPF;
}ALUNO;
main()
{
int opcao,opcao2;
    do
    {
        menu();

        scanf("%d",&opcao);
        system("cls");
        carregar();
            switch(opcao){

                case 1:{
                        do{
                            menuacervo();

                            scanf("%d",&opcao2);
                            system("cls");
                            carregar();
                                switch(opcao2){
                                    case 1:{
                                    printf("CADASTRO\n");
                                    system("cls");break;
                                    }break;
                                    case 2:{
                                    printf("EDITAR LIVRO\n");
                                    system("cls");}break;
                                    case 3:{
                                    printf("REMOVER LIVRO\n");
                                    system("cls");}break;
                                    case 4:{
                                    printf("LISTAR LIVROS CADASTRADOS");
                                    system("cls");}break;
                                    case 5:
                                    system("cls");break;}}
                        while(opcao2>=1&&opcao2<5);}break;
                case 2: {
                        do{
                            menuaalunos();
                            scanf("%d",&opcao2);
                            system("cls");
                            carregar();
                                switch (opcao2)
                                {
                                    case 1:{
                                     printf("CADASTRAR ALUNO\n");
                                     system("cls");}break;
                                    case 2:{
                                     printf("REMOVER ALUNO\n");
                                     system ("cls");}break;
                                    case 3:{
                                     printf("EDITAR ALUNO\n");
                                     system("cls");}break;
                                    case 4:{
                                     printf("LISTAR ALUNOS \n");
                                     system("cls");}break;
                                     case 5:{
                                     printf("VOLTAR\n");
                                     system("cls");}break;
                                }
                        }while(opcao2>=1&&opcao2<5);}
                case 3:  {do{
                          menuemprestimo();
                          scanf("%d",&opcao2);
                          system("cls");
                          carregar();
                            switch(opcao2)
                            {
                                    case 1:{
                                    printf("NOVO EMPRESTIMO\n");
                                    system("cls");}break;
                                    case 2:{
                                    printf("CONFIRMAR DEVOLUCAO\n");
                                    system("cls");}break;
                                    case 3:{
                                    printf("CANCELAR EMPRESTIMO\n");
                                    system("cls");
                                    }break;
                                    case 4:{
                                        do{
                                        listaemprestimo();
                                        scanf("%d",&opcao2);
                                        system("cls");
                                           switch(opcao2){
                                                case 1:{
                                                printf("LISTAR EMPRESTIMOS\n");
                                                system("cls");}break;
                                                case 2:{
                                                printf("LISTAR POR LIVRO:\n");
                                                system("cls");}break;
                                                case 3:{
                                                printf("LISTAR POR ALUNOS\n");
                                                system("cls");}break;
                                                case 4:{
                                                printf("VOLTAR");
                                                system("cls");break;}}
                                   }while(opcao2!=0);}

                                    case 5:{
                                    printf("VOLTAR\n");
                                    system("cls");
                                    }break;
                            }



                          }while(opcao2>=1&&opcao2<5);}
                case 4: {
                        printf("OPERACAO ENCERRADA\n");
                        system("cls");
                        }break;
    }
    }
while(opcao>=1&&opcao<4);

printf("OPCAO INVALIDA");

 }

