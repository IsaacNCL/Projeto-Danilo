#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <TIME.H>
#include <conio.h>

FILE *pr;
void  sleep(time_t delay)
{
    time_t timer0,timer1;
    time(&timer0);
    do
    {
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
           "\t\t°              3. LISTAR EMPRESTIMOS          °\n"
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
    sleep(2);
    system("cls");
}
typedef struct  //LIVRO
{
    char CLIVRO[50];
    char NLIVRO[100];
    char ALIVRO[100];
    int Quant;
    char area[50];
} LIVRO;
typedef struct  //ALUNO
{
    char Nome[50];
    int Cod_A;
    int CPF;
} ALUNO;
typedef struct  //EMPRESTIMO
{
    char EMPCL[50];
    int EMPCA;
    char EMPNL[100];
    int DATE;
    int DTDEV;
} EMPRESTIMO;
void cadastro(LIVRO *a)
{
    pr=fopen("CAD.dat","ab+");
    setbuf(stdin,NULL);
    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\tDIGITE O CODIGO DO LIVRO:");
    gets(a->CLIVRO);
    setbuf(stdin,NULL);
    printf("\t\tDIGITE O NOME DO LIVRO:");
    gets(a->NLIVRO);
    setbuf(stdin,NULL);
    printf("\t\tDIGITE O AUTOR DO LIVRO:");
    gets(a->ALIVRO);
    setbuf(stdin,NULL);
    printf("\t\tQUANTIDADE DE EXEMPLARES:");
    scanf("%d",&a->Quant);
    setbuf(stdin,NULL);
    printf("\t\tAREA DE CONHECIMENTO:");
    gets(a->area);
    setbuf(stdin,NULL);
    fwrite(a,sizeof(*a),1,pr);
    fclose(pr);
}
void editar(LIVRO *a)
{
    char LIVROAT[100];
    int se;
    setbuf(stdin,NULL);
    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t DIGITE O NOME DO LIVRO QUE DESEJA ALTERAR:");
    gets(LIVROAT);
    setbuf(stdin,NULL);
    pr=fopen("CAD.dat","rb+");
    while(fread(a,sizeof(*a),1,pr)==1)
    {
        se=fseek(pr,0,SEEK_CUR);
        if(strcmp(LIVROAT,(a->NLIVRO))==0)
        {
            printf("\t\t NOVO CODIGO DO LIVRO:");
            gets(a->CLIVRO);
            setbuf(stdin,NULL);
            printf("\t\t NOVO NOME DO LIVRO:");
            gets(a->NLIVRO);
            setbuf(stdin,NULL);
            printf("\t\t NOVO AUTOR DO LIVRO:");
            gets(a->ALIVRO);
            printf("\t\t NOVA QUANTIDADE DE EXEMPLARES:");
            scanf("%d",&a->Quant);
            setbuf(stdin,NULL);
            fseek(pr,ftell(pr)-sizeof(*a),SEEK_SET);
            fwrite(a,sizeof(*a),1,pr);
            fseek(pr,0,SEEK_END);
        }
    }
    fclose(pr);
}
void lista(LIVRO *a)
{
    pr=fopen("CAD.dat","rb+");

    while(fread(a,sizeof(*a),1,pr)==1)
    {
        printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t\t AUTOR DO LIVRO:%s\n",(a->ALIVRO));
        printf("\t\t CODIGO DO LIVRO:%s\n",(a->CLIVRO));
        printf("\t\t NOME DO LIVRO:%s\n",(a->NLIVRO));
        printf("\t\t AREA DO LIVROO:%s\n",(a->area));
        printf("\t\t QUANTIDADE DISPONIVEL:%d\n",(a->Quant));
    }
    fclose(pr);
}
void remover(LIVRO *a)
{
    FILE *pt;
    char RMLIVRO[100];
    pt=fopen("rem.dat","w+b");
    printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t DIGITE O NOME DO LIVRO QUE DESEJA REMOVER:");
    setbuf(stdin,NULL);
    gets(RMLIVRO);
    setbuf(stdin,NULL);
    pr=fopen("CAD.dat","r+b");
    rewind(pr);
    while(fread(a,sizeof(*a),1,pr)==1)
    {
        if(strcmp(RMLIVRO,a->NLIVRO)!=0)
        {
            fwrite(a,sizeof(*a),1,pt);
        }
    }
    fclose(pr);
    remove("CAD.dat");
    fclose(pt);
    rename("rem.dat","CAD.dat");
}
void cadastroALUNO(ALUNO *a)
{
    pr=fopen("ALUNO.dat","ab+");
    setbuf(stdin,NULL);
    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\tDIGITE O NOME DO ALUNO:");
    gets(a->Nome);
    setbuf(stdin,NULL);
    printf("\t\tDIGITE A MATRICULA DO ALUNO:");
    scanf("%d",&a->Cod_A);
    setbuf(stdin,NULL);
    printf("\t\tDIGITE O CPF DO ALUNO:");
    scanf("%d",&a->CPF);
    setbuf(stdin,NULL);
    fwrite(a,sizeof(*a),1,pr);
    fclose(pr);
}
void listaALUNO(ALUNO *a)
{
    pr=fopen("ALUNO.dat","rb+");

    while(fread(a,sizeof(*a),1,pr)==1)
    {
        printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t\t NOME DO ALUNO:%s",(a->Nome));
        printf("\n\t\t MATRICULA DO ALUNO:%d",(a->Cod_A));
        printf("\n\t\t CPF DO ALUNO:%d",(a->CPF));
        printf("\n");
    }
    fclose(pr);
}
void editarALUNO(ALUNO *a)
{
    char ALUNOAT[100];
    int se;
    setbuf(stdin,NULL);
    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\tDIGITE O NOME DO ALUNO QUE DESEJA ALTERAR:");
    gets(ALUNOAT);
    setbuf(stdin,NULL);
    pr=fopen("ALUNO.dat","rb+");
    while(fread(a,sizeof(*a),1,pr)==1)
    {
        se=fseek(pr,0,SEEK_CUR);
        if(strcmp(ALUNOAT,(a->Nome))==0)
        {
            printf("\t\tNOVO NOME DO ALUNO:");
            gets(a->Nome);
            setbuf(stdin,NULL);
            printf("\t\tNOVA MATRICULA DO ALUNO:");
            scanf("%d",&a->Cod_A);
            setbuf(stdin,NULL);
            printf("\t\tNOVO CPF DO ALUNO:");
            scanf("%d",&a->CPF);
            setbuf(stdin,NULL);
            fseek(pr,ftell(pr)-sizeof(*a),SEEK_SET);
            fwrite(a,sizeof(*a),1,pr);
            fseek(pr,0,SEEK_END);
        }
    }
    fclose(pr);
}
void removerALUNO(ALUNO *a)
{
    FILE *pt;
    char RMALUNO[100];
    pt=fopen("rema.dat","w+b");
    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t DIGITE O NOME DO ALUNO QUE DESEJA REMOVER:");
    setbuf(stdin,NULL);
    gets(RMALUNO);
    setbuf(stdin,NULL);
    pr=fopen("ALUNO.dat","r+b");
    rewind(pr);
    while(fread(a,sizeof(*a),1,pr)==1)
    {
        if(strcmp(RMALUNO,a->Nome)!=0)
        {
            fwrite(a,sizeof(*a),1,pt);
        }
    }
    fclose(pr);
    remove("ALUNO.dat");
    fclose(pt);
    rename("rema.dat","ALUNO.dat");
}
void novoemprestimo(ALUNO *a,LIVRO *b, EMPRESTIMO *c)
{
    FILE *ph; //emp
    FILE *pt; //aluno
    FILE *pr; // livro
    int cod,i=0,j=0;
    char CODEDIG[50];
    printf("DIGITE SUA MATRICULA");
    scanf("%d",&cod);
    setbuf(stdin,NULL);
    ph=fopen("EMPRESTIMO.dat","w+b");
    pt=fopen("ALUNO.dat","rb");
    while(fread(a,sizeof(*a),1,pt)==1)
    {
        if(cod==a->Cod_A)
        {
            i++;
        }

    }
    if(i==0)
    {
        printf("ALUNO NAO CADASTRADO\n");
    }
    else
    {
        i=0;
        printf("DIGITE O CODIGO DO LIVRO\n");
        gets(CODEDIG);
        setbuf(stdin,NULL);
        pr=fopen("CAD.dat","rb");
        while(fread(b,sizeof(*b),1,pr)==1)
        {
            if(strcmp(CODEDIG,b->CLIVRO)==0)
            {
                i++;
                j=b->Quant;
            }
         fclose(pr);
        }
        if(i==0)
        {
            printf("LIVRO NAO CADASTRADO\n");
        }
        else
        {
            if(j==0)
            {
                printf("NAO TEM LIVRO DISPONIVEL\n");
            }
            else
            {
                i=0;
                while(fread(c,sizeof(*c),1,ph)==1)
                {
                    if(cod==c->EMPCA)
                    {
                        i++;
                    }
                }
                if(i>=2)
                {
                    printf("ALUNO POSSUI ACIMA DE 1 EMPRESTIMO\n");
                }
                else
                {
                    i=0;
                    rewind(ph);
                    while(fread(c,sizeof(*c),1,ph)==1)
                    {
                        if(strcmp(CODEDIG,c->EMPCL))
                        {
                            i++;
                        }
                    }
                    if(i>=2)
                    {
                        printf("ALUNO POSSUI ESSE LIVRO\n");
                    }
                    else
                    {
                        rewind(ph);
                        rewind(pr);
                        rewind(pt);
                        while(fread(c,sizeof(*c),1,ph)==1)
                        {
                            if(strcmp(CODEDIG,b->CLIVRO)==0)
                            {
                                strcpy(c->EMPCL,CODEDIG);
                                strcpy(c->EMPNL,b->NLIVRO);
                                c->EMPCA=cod;
                                fwrite(ph,sizeof(*c),1,pr);
                            }
                        }
                        j=0;
                        i=0;
                        printf("VOCE DESEJA REALIZAR O EMPRESTIMO? Sim=1,Nao=2: ");
                        scanf("%d",&i);
                        if(i=1)
                        {
                            pr=fopen("CAD.dat","ab");
                            rewind(pr);
                            while(fread(b,sizeof(*b),1,pr)==1)
                            {
                                j=fseek(pr,0,SEEK_CUR);
                                if(strcmp(CODEDIG,b->CLIVRO)==0)
                                {
                                    printf("ENTRO AQUI\n");
                                    b->Quant=b->Quant-1;
                                    fseek(pr,j,SEEK_SET);
                                    fwrite(pr,sizeof(*b),1,pr);
                                    fseek(pr,0, SEEK_END);
                                }
                            }
                            printf(" \n EMPRESTIMO REALIZADO \n");
                        }

                    }
                }
            }
        }

    }
    fclose(pt);
    fclose(ph);
    fclose(pr);
    system("pause");
}
void listaremprestimo(EMPRESTIMO *c)
{
    FILE *ph;
    ph=fopen("EMPRESTIMO.dat","rb+");

    while(fread(c,sizeof(*c),1,ph)==1)
    {
        printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t\t MATRICULA DO ALUNO:%s\n",(c->EMPCA));
        printf("\t\t CODIGO DO LIVRO:%s\n",(c->EMPCL));
        printf("\t\t NOME DO LIVRO:%s\n",(c->EMPNL));
    }
    fclose(ph);
}
main()
{
    int opcao,opcao2,opcao3,erro;
    do
    {
        menu();
        LIVRO a;
        ALUNO b;
        EMPRESTIMO c;
        scanf("%d",&opcao);
        system("cls");
        carregar();
        switch(opcao)
        {

        case 1:
        {
            do
            {
                menuacervo();

                scanf("%d",&opcao2);
                system("cls");
                carregar();
                switch(opcao2)
                {
                case 1:
                {
                    cadastro (&a);

                    printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t°                 CADASTRO REALIZADO.               °\n");
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    sleep(2);
                    system("cls");
                    break;
                    carregar();
                }
                break;
                case 2:
                {
                    editar(&a);
                    printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t°                    LIVRO EDITADO.                 °\n");
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    sleep(2);
                    system("cls");
                }
                break;
                carregar();
                case 3:
                {
                    remover(&a);
                    printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t°                     LIVRO REMOVIDO                °\n");
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    sleep(2);
                    system("cls");
                    carregar();
                }
                break;
                carregar();
                case 4:
                {
                    lista(&a);
                    printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t°                   LISTA FINALIZADA                °\n");
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    system("pause");
                    system("cls");
                }
                break;
                carregar();
                case 5:
                {
                    system("cls");
                    break;
                }
                carregar();
                }
            }
            while(opcao2>=1&&opcao2<5);
        }
        break;
        case 2:
        {
            do
            {
                menuaalunos();
                scanf("%d",&opcao2);
                system("cls");
                system("cls");
                carregar();
                switch (opcao2)
                {
                case 1:
                {
                    cadastroALUNO(&b);
                    printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t°                 CADASTRO REALIZADO.               °\n");
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    sleep(2);
                    system("cls");
                }
                break;
                carregar();
                case 2:
                {
                    removerALUNO(&b);
                    printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t°                     ALUNO REMOVIDO                °\n");
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    sleep(2);
                    system ("cls");
                    carregar();
                }
                break;
                case 3:
                {
                    editarALUNO(&b);
                    printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t°                    ALUNO EDITADO.                 °\n");
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    sleep(2);
                    system("cls");
                    carregar();
                }
                break;
                carregar();
                case 4:
                {
                    listaALUNO(&b);
                    printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t°                   LISTA FINALIZADA                °\n");
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    system("pause");
                    system("cls");
                }
                break;
                carregar();
                case 5:
                {
                    system("cls");
                }
                break;
                carregar();
                }
            }
            while(opcao2>=1&&opcao2<5);
        }
        case 3:
        {
            do
            {
                menuemprestimo();
                scanf("%d",&opcao2);
                system("cls");
                carregar();
                switch(opcao2)
                {
                case 1:
                {
                    novoemprestimo(&b,&a,&c);
                    system("cls");
                    carregar();
                }
                break;
                case 2:
                {
                    printf("CONFIRMAR DEVOLUCAO\n");
                    system("cls");
                }
                break;
                case 3:
                {
                    do
                    {
                        listaemprestimo();
                        scanf("%d",&opcao3);
                        system("cls");
                        switch(opcao3)
                        {
                        case 1:
                        {
                            listaremprestimo(&c);
                            system("cls");
                            carregar();
                        }
                        break;
                        carregar();
                        case 2:
                        {
                            printf("LISTAR POR LIVRO:\n");
                            system("cls");
                        }
                        break;
                        case 3:
                        {
                            printf("LISTAR POR ALUNOS\n");
                            system("cls");
                        }
                        break;
                        case 4:
                        {
                            system("cls");
                            break;
                            carregar();
                        }
                        }
                    }
                    while(opcao3>=1&&opcao3<4);
                }

                case 4:
                {
                    system("cls");
                    carregar();
                }
                break;
                }



            }
            while(opcao2>=1&&opcao2<4);
        }
        case 4:
        {
            printf("OPERACAO ENCERRADA\n");
            system("cls");
        }
        break;

        }


    }
    while(opcao>=1&&opcao<4);
}
