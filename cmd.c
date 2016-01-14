#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio_ext.h>
#include <time.h>

//Cores
#include "colors.h"

//Login
void tela_cadastro(void);
void tela_login(void);
void tela_Alterar(void);

//Funções para Comandos de Telas
void telaPrincipal ();
void tPrincipal_comando();
void telaInicial ();
void telaAjuda ();
void comandos ();
void telaSobre ();
void telaContato ();
void limpar ();
void sair ();

//Função para menu do submenu ajuda
void subMenu_Ajuda();
//Todas as funçes do submenu ajuda
void telaAjuda1 ();
void telaAjuda2 ();
void telaAjuda3 ();
void telaAjuda4 ();
void telaAjuda5 ();
void telaAjuda6 ();
void telaAjuda7 ();
void telaAjuda8 ();
void telaAjuda9 ();
void telaAjuda10 ();
void telaAjuda11 ();
void telaAjuda12 ();
void telaAjuda13 ();
void telaAjuda14 ();
void telaAjuda15 ();
void telaAjuda16 ();
void telaAjuda17 ();
void telaAjuda18 ();
void telaAjuda19 ();
void telaAjuda20 ();
void telaAjuda21 ();
void telaAjuda22 ();
void telaAjuda23 ();
void telaAjuda24 ();
void telaAjuda25 ();
void telaAjuda26 ();
void telaAjuda27 ();
void telaAjuda28 ();
void telaAjuda29 ();
void telaAjuda30 ();
void telaAjuda31 ();
void telaAjuda32 ();
void telaAjuda33 ();
void telaAjuda34 ();
void telaAjuda35 ();
void telaAjuda36 ();
void telaAjuda37 ();
void telaAjuda38 ();
void telaAjuda39 ();
void telaAjuda40 ();
void telaAjuda41 ();
void telaAjuda42 ();
void telaAjuda43 ();
void telaAjuda44 ();
void telaAjuda45 ();
void telaAjuda46 ();
void telaAjuda47 ();
void telaAjuda48 ();
void telaAjuda49 ();
void telaAjuda50 ();
void telaAjuda51 ();
void telaAjuda52 ();
void telaAjuda53 ();
void telaAjuda54 ();
void telaAjuda55 ();
void telaAjuda56 ();
void telaAjuda57 ();
void telaAjuda58 ();
void telaAjuda59 ();
void telaAjuda60 ();
void telaAjuda61 ();
void telaAjuda62 ();
void telaAjuda63 ();
void telaAjuda64 ();
void telaAjuda65 ();
void telaAjuda66 ();
void telaAjuda67 ();
void telaAjuda68 ();
void telaAjuda69 ();
void telaAjuda70 ();
void telaAjuda71 ();
void telaAjuda72 ();
void telaAjuda73 ();
void telaAjuda74 ();
void telaAjuda75 ();
void telaAjuda76 ();
void telaAjuda77 ();
void telaAjuda78 ();
void telaAjuda79 ();
void telaAjuda80 ();
void telaAjuda81 ();
void telaAjuda82 ();
void telaAjuda83 ();
void telaAjuda84 ();
void telaAjuda85 ();
void telaAjuda86 ();
void telaAjuda87 ();
void telaAjuda88 ();
void mostrarMensagem();
void mostrarHora();
void trimEnd(char *);
void erro ();
void confirmaAjuda ();

//Struct do login com login e senha do usuario
struct dados
{
    char login[100];
    char senha[100];
};

struct dados pessoas[1];

int i; //Usa-se esse int i no login também.

/*Variavel global para usar na função subMenu_Ajuda da Ajuda*/
int opAjuda; //O numero que o usuario vai digitar dentro da tela ajuda, para ir para a tela do tema que mais interessa

//Declarando variaveis globais para tela principal
char cmd_ti[7] = "inicio"; //Se digitar inicio, vai para pagina inicial
char cmd_ajuda[6] = "ajuda"; //Se digitar ajuda, vai para pagina de ajuda
char cmd_comandos[9] = "comandos"; //Se digitar comandos, vai para pagina de comandos
char cmd_sobre[6] = "sobre"; //Se digitar sobre, vai para pagina de sobre
char cmd_contato[8] = "contato"; //Se digitar contato, vai para pagina de contato
char cmd_limpar[7] = "limpar"; //Se digitar limpar, limpa a tela
char cmd_sair[5] = "sair"; //Se digitar sair, termina o programa

//Declarando variaveis para Tela login/senha
char cmd_cadastrar[10] = "cadastrar";
char cmd_entrar[7] = "entrar";
char cmd_alterar[8] = "alterar";
//comando sair pode ser usado do comando acima cmd_sair

char sim[4] = "sim";
char nao[4] = "nao";

// Essa struct foi feia para variaveis constantes da tela login/cadastro/alterar
struct cmdLogin1
{

    char cmdVar[20];

};

struct cmdLogin1 cmdVar2;

FILE * fp;

int main()
{

    char opSair[20];

    //Abrindo login.txt
    fp = fopen("login.txt", "a+");

    if (fp == NULL)
    {
        foreground(RED);
        printf("\nErro na criação da abertura do arquivo!");
        style(RESETALL);

    }
    else
    {

        do
        {


            foreground(GREEN);
            printf("\n\t------------------------------------------------------------");
            printf("\n\t!                                                          !");
            printf("\n\t!                    ESCOLHA UMA OPÇÃO                     !");
            printf("\n\t!                                                          !");
            printf("\n\t------------------------------------------------------------\n\n");
            style(RESETALL);

            printf("\n\tDigite..............................................Tela\n\n");
            printf("\n\tcadastrar.........................................Cadastro\n");
            printf("\n\tentrar...............................................Login\n");
            printf("\n\talterar......................................Alterar Login\n");
            printf("\n\tsair..................................................Sair\n");

            foreground(GREEN);
            printf("\n\n\tcmdC -> ");
            __fpurge(stdin);
            style(RESETALL);
            fgets(cmdVar2.cmdVar, 20, stdin); //Recebe o que foi digitado pelo usuario

            trimEnd(cmdVar2.cmdVar);

            if (strcmp(cmd_cadastrar, cmdVar2.cmdVar) == 0)
            {

                system("clear");
                //printf("%s", cmdVar2.cmdVar);
                tela_cadastro(); //Abre tela de Cadastro do Login

            }

            if (strcmp(cmd_entrar, cmdVar2.cmdVar) == 0)
            {

                system("clear");
                tela_login(); //Abre tela de de Login

            }

            if (strcmp(cmd_alterar, cmdVar2.cmdVar) == 0)
            {

                system("clear");
                tela_Alterar(); //Abre tela de Alterar login/senha do Login

            }

            if (strcmp(cmd_sair, cmdVar2.cmdVar) == 0)
            {

                system("clear");
                foreground(GREEN);
                printf("\n\t\tOBRIGADA PELA PREFERÊNCIA! \n\n");
                style(RESETALL);
                exit(0);

            }

            system("clear");

            // printf("%s = %s", cmd_cadastrar, cmdVar2.cmdVar);


            printf("\n\tDigite..............................................Tela\n\n");
            printf("\n\tsim.......................................Sair do Programa\n");
            printf("\n\tnao..................................Continuar no Programa\n");

            foreground(RED);
            printf("\n\tTem certeza que deseja sair?");
            style(RESETALL);
            foreground(GREEN);
            printf("\n\n\tcmdC -> ");
            style(RESETALL);
            fgets(opSair, 20, stdin); //Recebe o que foi digitado pelo usuario

            trimEnd(opSair);

            system("clear");

        }
        while ( (strcmp(nao, opSair) == 0) );

        system("clear");
        foreground(GREEN);
        printf("\n\t\tOBRIGADA PELA PREFERÊNCIA! \n\n");
        style(RESETALL);
        exit(0);


        fclose(fp);
        //Fecha login.txt

    }

    return(0);
}

void mostrarMensagem()
{

    //Mostra hora que o usuário entrou no sistema, assim  como dia mês e ano.
    mostrarHora();

    //Essa e uma tela simples para iniciar o usuario no programa
    foreground(GREEN);
    printf("\n\t------------------------------------------------------------");
    printf("\n\t!                                                          !");
    printf("\n\t!                         cmdC                             !");
    printf("\n\t!                                                          !");
    printf("\n\t!----------------------------------------------------------!");
    printf("\n\t!                                                          !");
    printf("\n\t!    APRENDENDO LINGUAGEM C COM UM PROGRAMA FEITO EM C     !");
    printf("\n\t!                                                          !");
    printf("\n\t------------------------------------------------------------\n");
    style(RESETALL);

    printf("\n\n\tDigite \"comandos\" para ficar ciente dos comandos do programa!\n\n");

}

//TELAS -------------------------------------------------------------------------------------------
void telaPrincipal ()
{

    int x=0;

    struct cmd1
    {

        char cmd[20];

    };

    struct cmd1 cmdd;

    foreground(GREEN);
    printf("\n\tcmdC -> ");
    style(RESETALL);
    __fpurge(stdin);
    fgets(cmdd.cmd, 20, stdin); //Recebe o que foi digitado pelo usuario

    trimEnd(cmdd.cmd);

    if (strcmp(cmd_ti, cmdd.cmd) == 0)   //compara pra ver se a variavel digitada no cmdd.cmd é igual a constante que foi declarada em cima
    {

        // cmdd.cmd == inicio --- ti = tela inicial
        system("clear");
        telaInicial ();
        x++;

    }

    if (strcmp(cmd_ajuda, cmdd.cmd) == 0)
    {

        // cmdd.cmd == ajuda
        system("clear");
        __fpurge(stdin);
        telaAjuda ();
        subMenu_Ajuda();
        x++;
    }

    if (strcmp(cmd_comandos, cmdd.cmd) == 0)
    {

        // cmdd.cmd == comandos
        system("clear");
        comandos ();
        x++;

    }

    if(strcmp(cmd_sobre, cmdd.cmd) == 0)
    {

        // cmdd.cmd == sobre
        system("clear");
        telaSobre ();
        x++;

    }

    if(strcmp(cmd_contato, cmdd.cmd) == 0)
    {

        // cmdd.cmd == contato
        system("clear");
        telaContato ();
        x++;

    }

    if (strcmp(cmd_limpar, cmdd.cmd) == 0)
    {

        //cmdd.cmd == limpar
        printf("\n");
        limpar ();
        x++;

    }

    if (strcmp(cmd_sair, cmdd.cmd) == 0)
    {

        system("clear");
        foreground(GREEN);
        printf("\n\t\tOBRIGADA PELA PREFERÊNCIA! \n\n");
        style(RESETALL);
        x++;
        exit(0);

    }

    if (x == 0)
    {

        erro ();
        /*Criei função erro, pois essa função é usada em mais de um lugar
        Essa mesma função é chamada no default do switch case*/

    }

}

void tPrincipal_comando ()
{

    /*Essa tPrincipal foi necessária fazer pois estava dando conflito com a função
    ajuda quando ela estava no main, então tive que criar ela apenas para colocar a
    telaPrincipal dentro dela e não haver mais confito*/

    telaPrincipal();

}

void erro ()   //Criei função erro, pois essa função é usada em mais de um lugar
{

    system("clear");

    printf("\n\tDigite..................................................Tela\n\n");
    printf("\n\tinicio..........................................Tela Inicial\n");
    printf("\n\tcontato..............................................Contato\n");
    printf("\n\tajuda.............................................Tela Ajuda\n");
    printf("\n\tsobre....................Tela Sobre Desenvolvedores/Programa\n");
    printf("\n\tlimpar...........................................Limpar Tela\n");
    printf("\n\tsair.....................................Para sair do Programa");

    foreground(RED);
    printf("\n\n\tVocẽ digitou um comando que não possuimos, tente novamente!");
    style(RESETALL);

    printf("\n\n");

    tPrincipal_comando ();
}


void telaInicial ()
{

    /*Também foi necessario criar essa tela, pois essa função estava dando conflito com a ajuda também.
    Por o programa ser baseado no Terminal do Linux, algumas funções estavam dando conflito, pois
    o usuario não digita numeros no programa para acessar uma tela, ele digita o nome da tela.
    Apenas no login é digitado numero, e por isso no login não deu problema de conflito de telas.*/

    foreground(GREEN);
    printf("\n\t------------------------------------------------------------");
    printf("\n\t!                                                          !");
    printf("\n\t!                     TELA INICIAL                         !");
    printf("\n\t!                                                          !");
    printf("\n\t------------------------------------------------------------");
    style(RESETALL);

    printf("\n\n\tPrepare-se para aprender a programar em C a partir de comandos");
    foreground(GREEN);
    printf("\n\n\tCOMANDOS PARA INICIALIZAÇÃO\n\n");
    style(RESETALL);

    printf("\n\tDigite.................................................Tela\n");
    printf("\n\tcomandos......................................Tela Comandos\n");
    printf("\n\tajuda............................................Tela Ajuda\n");
    printf("\n\tcontato.............................................Contato\n");
    foreground(GREEN);
    printf("\n\tDigite um dos comandos acima para ficar por dentro de\n\ttodos os comandos necessários deste terminal educativo!");
    style(RESETALL);
    printf("\n\n\t\tBONS ESTUDOS E QUE A FORÇA ESTEJA COM VOCÊ! ");

    printf("\n\n");

    telaPrincipal ();

}

void comandos ()
{

    /*Tela de Comandos criada para mostrar pro usuario quais comandos ele pode usar no programa
    e quais telas ele pode acessar.*/

    foreground(GREEN);
    printf("\n\t------------------------------------------------------------");
    printf("\n\t!                                                          !");
    printf("\n\t!                     COMANDOS                             !");
    printf("\n\t!                                                          !");
    printf("\n\t------------------------------------------------------------\n\n");
    style(RESETALL);

    printf("\n\tDigite..................................................Tela\n\n");
    printf("\n\tinicio..........................................Tela Inicial\n");
    printf("\n\tcomandos.......................................Tela Comandos\n");
    printf("\n\tajuda.............................................Tela Ajuda\n");
    printf("\n\tsobre....................Tela Sobre Desenvolvedores/Programa\n");
    printf("\n\tcontato..............................................Contato\n");
    printf("\n\tlimpar...........................................Limpar Tela\n");
    printf("\n\tsair...................................Para sair do Programa");

    printf("\n\n");

    telaPrincipal ();

}


void telaAjuda ()
{

    /*Tela ajuda apenas imprime na tela os tópicos que o aluno pode estudar.*/
    foreground(GREEN);
    printf("\n\t------------------------------------------------------------");
    printf("\n\t!                                                          !");
    printf("\n\t!                        AJUDA                             !");
    printf("\n\t!                                                          !");
    printf("\n\t------------------------------------------------------------");
    style(RESETALL);

    printf("\n\n\tESTRUTURAS ESTATICAS\n\n");

    foreground(GREEN);
    printf("\n\t1. Conceitos Fundamentais..................................1\n");
    style(RESETALL);
    printf("\n\tModelo de um Computador....................................2\n");
    printf("\n\tCompilação de Programas....................................3\n");
    printf("\n\tExemplo de Código em C.....................................4\n");
    printf("\n\tCiclo de Desenvolvimento...................................5\n\n");

    foreground(GREEN);
    printf("\n\t2. Expressões..............................................6\n");
    style(RESETALL);
    printf("\n\tVariaveis..................................................7\n");
    printf("\n\tOperadores.................................................8\n");
    printf("\n\tEntrada e Saída básicas....................................9\n\n");

    foreground(GREEN);
    printf("\n\t3. Controle de Fluxo......................................10\n");
    style(RESETALL);
    printf("\n\tTomada de Decisão.........................................11\n");
    printf("\n\tConstruções com Laços.....................................12\n");
    printf("\n\tSeleção...................................................13\n\n");

    foreground(GREEN);
    printf("\n\t4. Funçoes................................................14\n");
    style(RESETALL);
    printf("\n\tDefinição de Funções......................................15\n");
    printf("\n\tPilha de Execução.........................................16\n");
    printf("\n\tPonteiro de Variaveis.....................................17\n");
    printf("\n\tVariaveis Globais.........................................18\n");
    printf("\n\tVariaveis Estaticas.......................................19\n");
    printf("\n\tRecursividade.............................................20\n");
    printf("\n\tPré-processador e macros..................................21\n\n");

    foreground(GREEN);
    printf("\n\t5. Vetores e Alocação Dinânica............................22\n");
    style(RESETALL);
    printf("\n\tVetores...................................................23\n");
    printf("\n\tAlocação Dinâmica.........................................24\n");
    printf("\n\tVetores Locais e Funções..................................25\n\n");

    foreground(GREEN);
    printf("\n\t6. Matrizes...............................................26\n");
    style(RESETALL);
    printf("\n\tAlocação estática versus dinâmica.........................27\n");
    printf("\n\tVetores Bidimencionais - matrizes.........................28\n");
    printf("\n\tMatrizes Dinâmicas........................................29\n");
    printf("\n\tOperaçoes com matrizes....................................30\n");
    printf("\n\tRepresentação de Matrizes Simétricas......................31\n\n");

    foreground(GREEN);
    printf("\n\t7. Cadeias de Caracteres..................................32\n");
    style(RESETALL);
    printf("\n\tCaracteres................................................33\n");
    printf("\n\tCadeias de Caracteres (String)............................34\n");
    printf("\n\tVetor de cadeia de caracteres.............................35\n\n");

    foreground(GREEN);
    printf("\n\t8. Tipos Estruturados.....................................36\n");
    style(RESETALL);
    printf("\n\tTipo Estrutura............................................37\n");
    printf("\n\tDefinição de \"novos\" tipos................................38\n");
    printf("\n\tAninhamento de Estruturas.................................39\n");
    printf("\n\tVetores de Estruturas.....................................40\n");
    printf("\n\tVetores de Ponteiros para estruturas......................41\n");
    printf("\n\tTipo união................................................42\n");
    printf("\n\tTipo enumeração...........................................43\n\n");

    foreground(YELLOW);
    printf("\n\tEXERCICIOS................................................44\n");
    style(RESETALL);

    printf("\t\n");

    foreground(GREEN);
    printf("\n\t9. Tipos abstratos de dados...............................45\n");
    style(RESETALL);
    printf("\n\tModulos e Compilação em Separado..........................46\n");
    printf("\n\tTipo abstrato de dados....................................47\n\n");

    foreground(GREEN);
    printf("\n\t10. Listas encadeadas.....................................48\n");
    style(RESETALL);
    printf("\n\tListas encadeadas.........................................49\n");
    printf("\n\tImplementações recursivas.................................50\n");
    printf("\n\tListas circulares.........................................51\n");
    printf("\n\tListas duplamente encadeadas..............................52\n");
    printf("\n\tListas de tipos estruturados..............................53\n\n");

    foreground(GREEN);
    printf("\n\t11. Pilhas................................................54\n");
    style(RESETALL);
    printf("\n\tInterface do tipo pilha...................................55\n");
    printf("\n\tImplementação de pilha com vetor..........................56\n");
    printf("\n\tImplementação de pilha com lista..........................57\n");
    printf("\n\tExemplo de uso: calculadora pos-fixada....................58\n\n");

    foreground(GREEN);
    printf("\n\t12. Filas.................................................59\n");
    style(RESETALL);
    printf("\n\tInterface do tipo fila....................................60\n");
    printf("\n\tImplementação de fila com vetor...........................61\n");
    printf("\n\tImplementação de fila com lista...........................62\n");
    printf("\n\tFila Dupla................................................63\n");
    printf("\n\tImplementação de fila dupla com lista.....................64\n\n");

    foreground(GREEN);
    printf("\n\t13. Arvores...............................................65\n");
    style(RESETALL);
    printf("\n\tArvores binarias..........................................66\n");
    printf("\n\tArvores com numero variavel de filhos.....................67\n\n");

    foreground(GREEN);
    printf("\n\t14. Estruturas genericas..................................68\n");
    style(RESETALL);
    printf("\n\tLista generica............................................69\n");
    printf("\n\tUso de callbacks..........................................70\n\n");

    foreground(YELLOW);
    printf("\n\tEXERCICIOS................................................71\n\n");
    style(RESETALL);

    printf("\n\n\tORDENAÇÃO E BUSCA\n\n");

    foreground(GREEN);
    printf("\n\t15. Arquivos...............................................72\n");
    style(RESETALL);
    printf("\n\tFunções para abrir e fechar arquivos.......................73\n");
    printf("\n\tArquivos em modo texto.....................................74\n");
    printf("\n\tEstruturação de dados em arquivos texto....................75\n");
    printf("\n\tArquivos em modo binario...................................76\n\n");

    foreground(GREEN);
    printf("\n\t16. Ordenação..............................................77\n");
    style(RESETALL);
    printf("\n\tOrdenação bolha............................................78\n");
    printf("\n\tOrdenação rapida...........................................79\n\n");

    foreground(GREEN);
    printf("\n\t17. Busca..................................................80\n");
    style(RESETALL);
    printf("\n\tBusca em Vetor.............................................81\n");
    printf("\n\tArvore binaria de busca....................................82\n\n");

    foreground(GREEN);
    printf("\n\t18. Tabelas de dispersão...................................83\n");
    style(RESETALL);
    printf("\n\tIdeia central..............................................84\n");
    printf("\n\tFunção de dispersão........................................85\n");
    printf("\n\tTratamento de colisão......................................86\n");
    printf("\n\tExemplo: numero de ocorrencias de palavras.................87\n\n");

    foreground(YELLOW);
    printf("\n\tEXERCICIOS.................................................88\n\n");
    style(RESETALL);
}

void subMenu_Ajuda ()
{

    /*Submenu_Ajuda foi criado apenas para receber o valor da Ajuda, e enviar para a opAjuda do switch case.*/

    opAjuda = 0;

    foreground(GREEN);
    printf("\n\tcmdC -> ");
    style(RESETALL);
    __fpurge(stdin);
    scanf("%i", &opAjuda);

    switch (opAjuda)   //88 Cases
    {

    case 1:
        system("clear");
        telaAjuda1 ();
        __fpurge(stdin); //fpurge e necessario em todos cases
        telaPrincipal (); //serve pro usuario poder digitar o numero da tela que ele quer ir
        break;

    case 2:
        system("clear");
        telaAjuda2 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 3:
        system("clear");
        telaAjuda3 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 4:
        system("clear");
        telaAjuda4 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 5:
        system("clear");
        telaAjuda5 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 6:
        system("clear");
        telaAjuda6 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 7:
        system("clear");
        telaAjuda7 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 8:
        system("clear");
        telaAjuda8 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 9:
        system("clear");
        telaAjuda9 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 10:
        system("clear");
        telaAjuda10 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 11:
        system("clear");
        telaAjuda11 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 12:
        system("clear");
        telaAjuda12 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 13:
        system("clear");
        telaAjuda13 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 14:
        system("clear");
        telaAjuda14 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 15:
        system("clear");
        telaAjuda15 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 16:
        system("clear");
        telaAjuda16 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 17:
        system("clear");
        telaAjuda17 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 18:
        system("clear");
        telaAjuda18 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 19:
        system("clear");
        telaAjuda19 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 20:
        system("clear");
        telaAjuda20 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 21:
        system("clear");
        telaAjuda21 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 22:
        system("clear");
        telaAjuda22 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 23:
        system("clear");
        telaAjuda23 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 24:
        system("clear");
        telaAjuda24 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 25:
        system("clear");
        telaAjuda25 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 26:
        system("clear");
        telaAjuda26 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 27:
        system("clear");
        telaAjuda27 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 28:
        system("clear");
        telaAjuda28 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 29:
        system("clear");
        telaAjuda29 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 30:
        system("clear");
        telaAjuda30 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 31:
        system("clear");
        telaAjuda31 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 32:
        system("clear");
        telaAjuda32 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 33:
        system("clear");
        telaAjuda33 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 34:
        system("clear");
        telaAjuda34 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 35:
        system("clear");
        telaAjuda35 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 36:
        system("clear");
        telaAjuda36 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 37:
        system("clear");
        telaAjuda37 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 38:
        system("clear");
        telaAjuda38 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 39:
        system("clear");
        telaAjuda39 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 40:
        system("clear");
        telaAjuda40 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 41:
        system("clear");
        telaAjuda41 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 42:
        system("clear");
        telaAjuda42 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 43:
        system("clear");
        telaAjuda43 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 44:
        system("clear");
        telaAjuda44 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 45:
        system("clear");
        telaAjuda45 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 46:
        system("clear");
        telaAjuda46 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 47:
        system("clear");
        telaAjuda47 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 48:
        system("clear");
        telaAjuda48 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 49:
        system("clear");
        telaAjuda49 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 50:
        system("clear");
        telaAjuda50 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 51:
        system("clear");
        telaAjuda51 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 52:
        system("clear");
        telaAjuda52 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 53:
        system("clear");
        telaAjuda53 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 54:
        system("clear");
        telaAjuda54 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 55:
        system("clear");
        telaAjuda55 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 56:
        system("clear");
        telaAjuda56 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 57:
        system("clear");
        telaAjuda57 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 58:
        system("clear");
        telaAjuda58 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 59:
        system("clear");
        telaAjuda59 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 60:
        system("clear");
        telaAjuda60 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 61:
        system("clear");
        telaAjuda61 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 62:
        system("clear");
        telaAjuda62 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 63:
        system("clear");
        telaAjuda63 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 64:
        system("clear");
        telaAjuda64 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 65:
        system("clear");
        telaAjuda65 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 66:
        system("clear");
        telaAjuda66 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 67:
        system("clear");
        telaAjuda67 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 68:
        system("clear");
        telaAjuda68 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 69:
        system("clear");
        telaAjuda69 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 70:
        system("clear");
        telaAjuda70 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 71:
        system("clear");
        telaAjuda71 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 72:
        system("clear");
        telaAjuda72 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 73:
        system("clear");
        telaAjuda73 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 74:
        system("clear");
        telaAjuda74 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 75:
        system("clear");
        telaAjuda75 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 76:
        system("clear");
        telaAjuda76 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 77:
        system("clear");
        telaAjuda77 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 78:
        system("clear");
        telaAjuda78 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 79:
        system("clear");
        telaAjuda79 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 80:
        system("clear");
        telaAjuda80 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 81:
        system("clear");
        telaAjuda81 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 82:
        system("clear");
        telaAjuda82 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 83:
        system("clear");
        telaAjuda83 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 84:
        system("clear");
        telaAjuda84 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 85:
        system("clear");
        telaAjuda85 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 86:
        system("clear");
        telaAjuda86 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 87:
        system("clear");
        telaAjuda87 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    case 88:
        system("clear");
        telaAjuda88 ();
        __fpurge(stdin);
        telaPrincipal ();
        break;

    default :
        opAjuda = 0;
        system("clear");
        confirmaAjuda ();
        /*Função de Confirmação - Se o usuario quiser sair dessa tela, ele terá que digitar o comando
        novamente para confirmar a saída.*/

    } //SWITCH CASE FIM

}

void confirmaAjuda ()   //Criei função erro, pois essa função é usada em mais de um lugar
{

    system("clear");

    printf("\n\tDigite..................................................Tela\n\n");
    printf("\n\tinicio..........................................Tela Inicial\n");
    printf("\n\tcontato..............................................Contato\n");
    printf("\n\tajuda.............................................Tela Ajuda\n");
    printf("\n\tsobre....................Tela Sobre Desenvolvedores/Programa\n");
    printf("\n\tlimpar...........................................Limpar Tela\n");
    printf("\n\tsair.....................................Para sair do Programa");

    foreground(RED);
    printf("\n\n\tTem certeza que deseja sair dessa tela?");
    printf("\n\n\tPara validar sua saída, digite o comando novamente!");
    style(RESETALL);

    printf("\n\n");

    tPrincipal_comando ();

}


void telaAjuda1 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda1.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda2 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda2.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler
            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);


}

void telaAjuda3 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda3.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);


}

void telaAjuda4 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda4.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda5 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda5.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda6 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda6.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda7 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda7.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda8 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda8.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda9 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda9.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda10 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda10.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda11 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda11.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda12 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda12.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda13 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda13.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda14 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda14.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda15 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda15.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda16 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda16.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda17 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda17.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda18 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda18.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda19 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda19.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda20 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda20.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda21 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda21.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda22 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda22.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda23 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda23.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda24 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda24.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda25 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda25.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda26 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda26.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda27 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda27.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda28 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda28.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda29 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda29.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda30 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda30.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda31 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda31.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda32 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda32.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda33 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda33.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda34 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda34.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda35 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda35.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda36 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda36.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda37 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda37.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda38 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda38.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda39 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda39.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda40 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda40.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda41 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda41.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda42 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda42.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda43 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda43.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda44 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda44.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda45 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda45.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda46 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda46.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda47 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda47.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda48 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda48.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda49 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda49.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda50 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda50.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda51 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda51.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda52 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda52.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda53 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda53.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda54 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda54.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda55 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda55.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda56 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda56.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda57 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda57.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda58 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda58.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda59 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda59.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda60 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda60.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda61 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda61.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda62 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda62.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda63 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda63.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda64 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda64.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda65 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda65.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda66 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda66.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda67 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda67.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda68 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda68.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda69 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda69.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda70 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda70.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda71 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda71.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda72 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda72.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda73 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda73.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda74 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda74.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda75 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda75.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda76 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda76.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda77 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda77.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda78 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda78.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda79 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda79.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda80 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda80.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda81 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda81.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda82 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda82.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda83 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda83.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda84 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda84.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda85 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda85.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda86 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda86.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda87 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda87.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaAjuda88 ()
{

    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    system("clear");
    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("telaAjuda88.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    i = 1;
    while (!feof(arq))
    {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler

            printf("\t%s",Linha);
        i++;
    }
    fclose(arq);

}

void telaSobre ()
{

    foreground(GREEN);
    printf("\n\t------------------------------------------------------------");
    printf("\n\t!                                                          !");
    printf("\n\t!                    SOBRE O SISTEMA                       !");
    printf("\n\t!                        cmdC                              !");
    printf("\n\t!                                                          !");
    printf("\n\t------------------------------------------------------------");
    style(RESETALL);

    printf("\n\n\tO cmdC (Aprender a Programar em C a partir de comandos em C)\n");
    printf("\tfoi desenvolvido para o projeto final do primeiro semestre\n");
    printf("\tde Análise e Desenvolvimento de Sistemas da Fatec Cruzeio.\n\n");
    printf("\tAula: Algoritmo\n");
    printf("\n\tProfessor: Carlos Henrique L. Feichas\n");

    printf("\n");

    foreground(GREEN);
    printf("\n\t------------------------------------------------------------");
    printf("\n\t!                                                          !");
    printf("\n\t!                 SOBRE OS DESENVOLVEDORES                 !");
    printf("\n\t!      ALUNOS: MARCIELLI OLIVEIRA, VINICIUS PEIXOTO        !");
    printf("\n\t!                                                          !");
    printf("\n\t------------------------------------------------------------");
    style(RESETALL);

    printf("\n");

    printf("\n\tLivro base:\n\tIntrodução a Estruturas de Dados.");
    printf("\n\tC Completo e Total");

    printf("\n");

    telaPrincipal ();

}

void telaContato ()
{

    foreground(GREEN);
    printf("\n\t------------------------------------------------------------");
    printf("\n\t!                                                          !");
    printf("\n\t!                        CONTATO                           !");
    printf("\n\t!                                                          !");
    printf("\n\t------------------------------------------------------------");
    style(RESETALL);

    printf("\n\n\tDESENVOLVEDORES: \n\n");

    printf("\n\tMarcielli Oliveira.........................................!\n");
    printf("\n\tEmail: marciellileticiaol@gmail.com........................!\n");
    printf("\n");

    printf("\n\tVinicius Peixoto...........................................!\n");
    printf("\n\tEmail: vinipeix42@gmail.com................................!\n");
    printf("\n");

    foreground(GREEN);
    printf("\n\t\tCURSO: ANÁLISE E DESENVOLVIMENTO DE SISTEMAS\n");
    printf("\t\t  FATEC CRUZEIRO - PROFESSOR WALDOMIRO MAY\n\n\n");
    style(RESETALL);

    telaPrincipal ();

}

void limpar ()
{

    system("clear");
    telaPrincipal(); //Tem que deixar a tela principal aqui, senão em varios ifs quando pede ele não limpa a tela

}

void mostrarHora ()
{
    //Imprime a data e o dia do ano na tela
    foreground(YELLOW);
    printf("\n\t\t\t\t\t\t\tData: %s \n\t\t\t\t\t\t\tHora: %s",__DATE__,__TIME__);
    style(RESETALL);
    printf("\n\n");

}

//Tela de Login
void tela_cadastro(void)
{
    foreground(GREEN);
    printf("\n\t------------------------------------------------------------");
    printf("\n\t!                                                          !");
    printf("\n\t!                CADASTRAR LOGIN E SENHA                   !");
    printf("\n\t!                                                          !");
    printf("\n\t------------------------------------------------------------\n");
    style(RESETALL);

    FILE *fp;
    fp = fopen("login.txt", "w+");

    if (fp == NULL)
    {
        foreground(RED);
        printf("\nO arquivo não foi aberto!");
        style(RESETALL);
        exit(0);

    }

    char login[100], senha[100], string2[100],string3[100];
    int i, op;

    printf("\n\tLOGIN........: ");
    __fpurge(stdin);
    scanf("%s", login);

    printf("\n\tSENHA........: ");
    __fpurge(stdin);
    scanf("%s", senha);

    printf("\n");

    strcpy(string2, login);
    strcpy(string3, senha);

    fprintf(fp, "%s\n", login); //precisa do \n porque estou pegando com o scanf

    fprintf(fp, "%s", senha);

    fclose(fp);

    system("clear");
    foreground(GREEN);
    printf("\n\tCADASTRADO COM SUCESSO!\n");
    printf("\n\tSEU LOGIN: %s\n\tSUA SENHA: %s", login, senha);
    style(RESETALL);

    printf("\n");

    printf("\n\tDigite..............................................Tela\n\n");
    printf("\n\tcadastrar.........................................Cadastro\n");
    printf("\n\tentrar...............................................Login\n");
    printf("\n\talterar......................................Alterar Login\n");
    printf("\n\tsair..................................................Sair\n");
    foreground(GREEN);
    printf("\n\n\tcmdC -> ");
    style(RESETALL);
    __fpurge(stdin);
    fgets(cmdVar2.cmdVar, 20, stdin); //Recebe o que foi digitado pelo usuario

    trimEnd(cmdVar2.cmdVar);

    if (strcmp(cmd_cadastrar, cmdVar2.cmdVar) == 0)
    {

        system("clear");
        tela_cadastro(); //Abre tela de Cadastro do Login

    }

    if (strcmp(cmd_entrar, cmdVar2.cmdVar) == 0)
    {

        system("clear");
        tela_login(); //Abre tela de de Login

    }

    if (strcmp(cmd_alterar, cmdVar2.cmdVar) == 0)
    {

        system("clear");
        tela_Alterar(); //Abre tela de Alterar login/senha do Login

    }

    if (strcmp(cmd_sair, cmdVar2.cmdVar) == 0)
    {

        system("clear");
        foreground(GREEN);
        printf("\n\t\tOBRIGADA PELA PREFERÊNCIA! \n\n");
        style(RESETALL);
        exit(0);

    }

}

//Usado para ver se tem  algum texto salvo no login.txt
int get_size(const char* file_name)
{
    FILE *file = fopen(file_name, "r");

    if(file == NULL)
        return 0;

    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fclose(file);

    return size;
}

//Tela de Login
void tela_login(void)
{
    foreground(GREEN);
    printf("\n\t------------------------------------------------------------");
    printf("\n\t!                                                          !");
    printf("\n\t!                          LOGIN                           !");
    printf("\n\t!                                                          !");
    printf("\n\t------------------------------------------------------------\n");
    style(RESETALL);

    FILE *fp;
    fp = fopen("login.txt", "r");

    if (fp == NULL)
    {
        foreground(RED);
        printf("\nO arquivo não foi aberto!");
        style(RESETALL);
        exit(0);

    }

    char login[100], senha[100], string2[100],string3[100];
    int i;

    printf("\n\tLOGIN........: ");
    scanf("%s", login);

    printf("\n\tSENHA........: ");
    scanf("%s", senha);

    printf("\n");

    strcpy(string2, login);
    strcpy(string3, senha);

    while( (fscanf(fp, "%s %s", string2, string3)) != EOF )
    {

        if ( (strcmp(login, string2) == 0) && (strcmp(senha, string3) == 0) )
        {

            system("clear");
            __fpurge(stdin);
            mostrarMensagem();
            telaPrincipal();

        }
        else
        {

            for (i=1; i<=3; i++)
            {
                foreground(RED);
                printf("\n\tSeu login ou senha estão errados!\n");
                style(RESETALL);

                printf("\n\tLOGIN........: ");
                scanf("%s", login);

                printf("\n\tSENHA........: ");
                scanf("%s", senha);

                if ( (strcmp(login, string2) == 0) && (strcmp(senha, string3) == 0) )
                {

                    system("clear");
                    __fpurge(stdin);
                    mostrarMensagem();
                    telaPrincipal();
                    break;

                }
                else if ((strcmp(login, string2) != 0) && (strcmp(senha, string3) != 0) && i>=3)
                {
                    foreground(RED);
                    printf("\n\n\tVocê errou 3 vezes. \n\tTente novamente em alguns minutos!\n\n");
                    style(RESETALL);

                }

            }

        }

    }


    fclose(fp);

}

//Tela de Login
void tela_Alterar(void)
{

    foreground(GREEN);
    printf("\n\t------------------------------------------------------------");
    printf("\n\t!                                                          !");
    printf("\n\t!                  ALTERAR LOGIN E SENHA                   !");
    printf("\n\t!                                                          !");
    printf("\n\t------------------------------------------------------------\n");
    style(RESETALL);

    FILE *fp;
    fp = fopen("login.txt", "w+");

    if (fp == NULL)
    {
        foreground(RED);
        printf("\nO arquivo não foi aberto!");
        style(RESETALL);
        exit(0);

    }

    char login[100], senha[100], string2[100],string3[100];
    int i, op;

    printf("\n\tNOVO LOGIN........: ");
    __fpurge(stdin);
    scanf("%s", login);

    printf("\n\tNOVA SENHA........: ");
    __fpurge(stdin);
    scanf("%s", senha);

    printf("\n");

    strcpy(string2, login);
    strcpy(string3, senha);

    fprintf(fp, "%s\n", login); //precisa do \n porque estou pegando com o scanf

    fprintf(fp, "%s", senha);

    fclose(fp);

    system("clear");
    foreground(GREEN);
    printf("\n\tALTERADO COM SUCESSO!\n");
    printf("\n\tNOVO LOGIN: %s\n\tNOVA SENHA: %s", login, senha);
    style(RESETALL);

    printf("\n");

    printf("\n\tDigite..............................................Tela\n\n");
    printf("\n\tcadastrar.........................................Cadastro\n");
    printf("\n\tentrar...............................................Login\n");
    printf("\n\talterar......................................Alterar Login\n");
    printf("\n\tsair..................................................Sair\n");
    foreground(GREEN);
    printf("\n\n\tcmdC -> ");
    style(RESETALL);
    __fpurge(stdin);
    fgets(cmdVar2.cmdVar, 20, stdin); //Recebe o que foi digitado pelo usuario

    trimEnd(cmdVar2.cmdVar);

    if (strcmp(cmd_cadastrar, cmdVar2.cmdVar) == 0)
    {

        system("clear");
        tela_cadastro(); //Abre tela de Cadastro do Login

    }

    if (strcmp(cmd_entrar, cmdVar2.cmdVar) == 0)
    {

        system("clear");
        tela_login(); //Abre tela de de Login

    }

    if (strcmp(cmd_alterar, cmdVar2.cmdVar) == 0)
    {

        system("clear");
        tela_Alterar(); //Abre tela de Alterar login/senha do Login

    }

    if (strcmp(cmd_sair, cmdVar2.cmdVar) == 0)
    {

        system("clear");
        foreground(GREEN);
        printf("\n\t\tOBRIGADA PELA PREFERÊNCIA! \n\n");
        style(RESETALL);
        exit(0);

    }

}

//AÇÕES -------------------------------------------------------------------------------------------

void trimEnd(char *str)   //Tira o \n que o fgets lê junto com a variavel pra ir para a ultima linha
{
    char *end = str + strlen(str) - 1;
    while (end > str && isspace(*end)) end--;
    end++;
    *end = 0;
}
