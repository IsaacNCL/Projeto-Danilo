#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <TIME.H>
#include <conio.h>

FILE *pr;
int horario(da,ms,ao) //EDITADO funçao disponivel em
//pt.stackoverflow.com/questions/158195/como-pegar-hora-do-sistema-e-guardar-em-uma-vari%C3%A1vel
{
  time_t timer;
  struct tm *horarioLocal;

  time(&timer);
  horarioLocal = localtime(&timer);

  int dia = horarioLocal->tm_mday;
  int mes = horarioLocal->tm_mon + 1;
  int ano = horarioLocal->tm_year + 1900;

  int hora = horarioLocal->tm_hour;
  int min  = horarioLocal->tm_min;
  int sec  = horarioLocal->tm_sec;
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\tDATA DO EMPRESTIMO: %d/%d/%d\n",dia,mes,ano);

  return dia,mes,ano;
}
int horariodev(da,ms,ao) //EDITADO funçao disponivel em
//pt.stackoverflow.com/questions/158195/como-pegar-hora-do-sistema-e-guardar-em-uma-vari%C3%A1vel
{
  time_t timer;
  struct tm *horarioLocal;

  time(&timer);
  horarioLocal = localtime(&timer);

  int dia = horarioLocal->tm_mday+15;
  int mes = horarioLocal->tm_mon + 1;
  int ano = horarioLocal->tm_year + 1900;

    if(mes>=12){
    mes=(mes-12)+1;
    ano=ano+1;}
    else {
    if((mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)&&dia>31){
    dia=dia-31;
  }
  if((mes==4||mes==6||mes==9||mes==11)&&dia>30){
    dia=dia-30;
  }
  if((mes==2)&&dia>28){
    dia=dia-28;
  }
      }
  if((mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)&&dia>31){
    dia=dia-31;
  }
  if((mes==4||mes==6||mes==9||mes==11)&&dia>30){
    dia=dia-30;
  }
  if((mes==2)&&dia>28){
    dia=dia-28;
  }


  int hora = horarioLocal->tm_hour;
  int min  = horarioLocal->tm_min;
  int sec  = horarioLocal->tm_sec;
printf("\t\tDATA DA DEVOLUÇAO: %d/%d/%d\n",dia,mes,ano);

  return dia,mes,ano;
}
void  sleep(time_t delay) // EDITADO Disponivel em
//pt.wikihow.com/Fazer-um-Delay-em-C
{
    time_t timer0,timer1;
    time(&timer0);
    do
    {
        time(&timer1);
    }
    while((timer1-timer0)<delay);
}
void menuemprestimo() //VISUAL DO MENU
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
void listaemprestimo() //VISUAl DO MENU
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
void menu() //VISUAl DO MENU
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
void menuacervo() //VISUAL DO MENU
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
void menuaalunos() //VISUAL DO MENU
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
void carregar() //FUNÇAO PARA CRIAR  O DELAY
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
} EMPRESTIMO;
void cadastro(LIVRO *a)// CADASTRO DO LIVRO
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
    fwrite(a,sizeof(*a),1,pr);
    fclose(pr);
}
void editar(LIVRO *a) //EDIÇAO DO LIVRO
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
void lista(LIVRO *a) //LISTAR OS LIVRO
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
void remover(LIVRO *a) //REMOÇAO DO LIVRO
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
void cadastroALUNO(ALUNO *a) //CADASTRO DO ALUNO
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
void listaALUNO(ALUNO *a)//LISTAR ALUNO
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
void editarALUNO(ALUNO *a)// EDICAO DO ALUNO
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
void removerALUNO(ALUNO *a) //REMOVER ALUNo
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
void novoemprestimo(ALUNO *a,LIVRO *b, EMPRESTIMO *c)//REALIZAR EMPRESTIMO
{
    FILE *ph; //emp
    FILE *pt; //aluno
    FILE *pr; // livro
    int cod,i=0,j=0,d=0,m=0,n=0;
    char CODEDIG[50];
    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\tDIGITE SUA MATRICULA\n\t\t");
    scanf("%d",&cod);
    setbuf(stdin,NULL);
    pt=fopen("ALUNO.dat","rb");
    while(fread(a,sizeof(*a),1,pt)==1)
    {
        if(cod==a->Cod_A)
        {
            i++;
        }

    }
    fclose(pt);
    if(i==0)
    {
        printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t\tALUNO NAO CADASTRADO\n");
    }
    else
    {
        i=0;
        printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t\tDIGITE O CODIGO DO LIVRO\n\t\t");
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
        }
        fclose(pr);
        if(i==0)
        {
            printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            printf("\t\t LIVRO NAO CADASTRADO\n");
        }
        else
        {
            if(j==0)
            {
                printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                printf("\t\tNAO TEM LIVRO DISPONIVEL\n");
            }
            else
            {
                ph=fopen("EMPRESTIMO.dat","rb");
                i=0;
                while(fread(c,sizeof(*c),1,ph)==1)
                {
                    if(cod==c->EMPCA)
                    {
                        i++;
                    }
                }
                fclose(ph);
                if(i>=2)
                {
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\tALUNO POSSUI ACIMA DE 1 EMPRESTIMO\n");
                }
                else
                {
                    i=0;
                    rewind(ph);
                    ph=fopen("EMPRESTIMO.dat","w+b");
                    while(fread(c,sizeof(*c),1,ph)==1)
                    {
                        if(strcmp(CODEDIG,c->EMPCL))
                        {
                            i++;
                        }
                    }
                    fclose(ph);
                    if(i>=2)
                    {
                        printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                        printf("\t\tALUNO POSSUI ESSE LIVRO\n");
                    }
                    else
                    {
                        ph=fopen("EMPRESTIMO.dat","wb");
                        rewind(ph);
                        rewind(pr);
                        rewind(pt);
                        while(fread(c,sizeof(*c),1,ph)==0)
                        {
                            if(strcmp(CODEDIG,b->CLIVRO)==0)
                            {
                                strcpy(c->EMPCL,CODEDIG);
                                strcpy(c->EMPNL,b->NLIVRO);
                                c->EMPCA=cod;
                                horario(d,m,n);
                                fwrite(c,sizeof(*c),1,ph);
                            }
                        }
                        fclose(ph);
                        j=0;
                            pr=fopen("CAD.dat","ab");
                            while(fread(b,sizeof(*b),1,pr)==1)
                            {
                                j=fseek(pr,0,SEEK_CUR);
                                if(strcmp(CODEDIG,b->CLIVRO)==0)
                                {
                                    b->Quant=(b->Quant)-1;
                                    fwrite(b,sizeof(*b),1,pr);
                                    fseek(pr,0, SEEK_END);
                                }
                            }

                    }
                }
            }
        }

    }
    fclose(pt);
    fclose(ph);
    fclose(pr);
}
void listaremprestimo(EMPRESTIMO *c) //LISTAR EMPRESTIMO
{
    int d,m,a,dd,dm,da;
    FILE *ph;
    ph=fopen("EMPRESTIMO.dat","rb+");

    while(fread(c,sizeof(*c),1,ph)==1)
    {
        printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t\t MATRICULA DO ALUNO:%d\n",(c->EMPCA));
        printf("\t\t CODIGO DO LIVRO:%s\n",(c->EMPCL));
        printf("\t\t NOME DO LIVRO:%s\n",(c->EMPNL));
        horario(d,m,a);
        horariodev(dd,dm,da);
    }
    fclose(ph);
}
void listaremprestimoLIVRO(EMPRESTIMO *c)// LISTAR EMPRESTIMO POR LIVRO
{
FILE *pr;
char LIVRONOVO[100];
    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t DIGITE O LIVRO QUE DESEJA LISTAR:\t\t");
    setbuf(stdin,NULL);
    gets(LIVRONOVO);
    setbuf(stdin,NULL);
    pr=fopen("EMPRESTIMO.dat","rb");
    while(fread(c,sizeof(*c),1,pr)==1){
    if(strcmp(LIVRONOVO,c->EMPNL)==0){
        printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t\t MATRICULA DO ALUNO:%d\n",(c->EMPCA));
        printf("\t\t CODIGO DO LIVRO : %s\n",(c->EMPCL));
        printf("\t\t NOME DO LIVRO EMPRESTADO:%s\n",(c->EMPNL));
    }
    }
    fclose(pr);
}
void listaremprestimoALUNO(EMPRESTIMO *c) //LISTAR EMPRESTIMO POR ALUNO
{
FILE *ph;
int MATNOVO;
    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t DIGITE A MATRICULA DO ALUNO QUE DESEJA LISTAR:");
    setbuf(stdin,NULL);
    scanf("%d",&MATNOVO);
    setbuf(stdin,NULL);
    ph=fopen("EMPRESTIMO.dat","rb");
    while(fread(c,sizeof(*c),1,ph)==1){
    if(MATNOVO==(c->EMPCA)){
        printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\t\t MATRICULA DO ALUNO:%d\n",(c->EMPCA));
        printf("\t\t CODIGO DO LIVRO : %s\n",(c->EMPCL));
        printf("\t\t NOME DO LIVRO EMPRESTADO:%s\n",(c->EMPNL));
    }
    }
    fclose(ph);
}
void removerEMPRESTIMO(EMPRESTIMO *c) //REMOVER LIVRO
{
    FILE *ph;
    FILE *pt;
    char RMEMPRESTIMO[100];
    int CALUN;
    pt=fopen("remo.dat","w+b");
    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t DIGITE O  CODIGO DO ALUNO:\n\t\t");
    setbuf(stdin,NULL);
    scanf("%d",&CALUN);
    setbuf(stdin,NULL);
    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t\t DIGITE O NOME DO LIVRO:\n\t\t");
    setbuf(stdin,NULL);
    gets(RMEMPRESTIMO);
    setbuf(stdin,NULL);
    ph=fopen("EMPRESTIMO.dat","r+b");
    rewind(ph);
    while(fread(c,sizeof(*c),1,ph)==1)
    {
        if(CALUN==c->EMPCA&&(strcmp(RMEMPRESTIMO,c->EMPCL)==0))
         fwrite(c,sizeof(*c),1,pt);
        }
    fclose(ph);
    remove("EMPRESTIMO.dat");
    fclose(pt);
    rename("remo.dat","EMPRESTIMO.dat");
}
main() //FUNÇAO MAIN
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
        if(opcao>=1&&opcao<=4){
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
            if(opcao2<=1&&opcao2>5){
            printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            printf("\t\t°                   OPCAO INVALIDA                  °\n");
            printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            sleep(2);}
            system("cls");
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
            if(opcao2<=1&&opcao2>5){
            printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            printf("\t\t°                   OPCAO INVALIDA                  °\n");
            printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            sleep(2);}
            system("cls");
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
                    printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t°                   EMPRESTIMO REALIZADO            °\n");
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                            sleep(2);
                    system("cls");
                    carregar();
                }
                break;
                case 2:
                {
                    removerEMPRESTIMO(&c);
                    printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t°                 EMPRESTIMO CANCELADO              °\n");
                    printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    sleep(2);
                    system("cls");
                    carregar();
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
                            printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                            printf("\t\t°                   LISTA FINALIZADA                °\n");
                            printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                            sleep(2);
                            system("pause");
                            system("cls");
                            carregar();
                        }
                        break;
                        carregar();
                        case 2:
                        {
                            listaremprestimoLIVRO(&c);
                            printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                            printf("\t\t°                   LISTA FINALIZADA                °\n");
                            printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                            sleep(2);
                            system("pause");
                            system("cls");
                        }
                        break;
                        case 3:
                        {
                            listaremprestimoALUNO(&c);
                            printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                            printf("\t\t°                   LISTA FINALIZADA                °\n");
                            printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                            sleep(2);
                            system("pause");
                            system("cls");
                            carregar();
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

    else{
            printf("\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            printf("\t\t°                   OPCAO INVALIDA                  °\n");
            printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
            sleep(2);}
}
while(opcao>=1&&opcao<4);

}
