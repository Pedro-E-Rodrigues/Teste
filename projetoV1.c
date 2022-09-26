#include <stdio.h>
#include <stdlib.h>
#include "modulousuario.h"
#include "moduloemprestimos.h"
#include "modulodevolucoes.h"
#include "modulofuncionarios.h"
#include "modulolivros.h"
#include "modulosobre.h"


// Controle de telas 

char tela_inicial(void);
void tela_sobre(void);
void tela_equipe(void);

// Programa 

int main(void)
{
    char esc;
    do {
        esc = tela_inicial();
        switch(esc){
        case '1':
            menu_nav_usuario();
            break;
        case '2':
            menu_nav_livros();
            break;
        case '3':
            menu_nav_emprestimos();
            break;
        case '4':
            menu_nav_devolucoes();
            break;
        case '5':
            menu_nav_funcionarios();
            break;
        case '6':
            menu_nav_sobre();
            break;
        default:
            printf("Programa finalizado com Sucesso!\n");
            break;
        
        }   
        } while(esc != '0');

    return 0; 
}
   
// Funções 
char tela_inicial(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///                 Bacharelado Sistemas de Informação                      ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///               Projeto Sistema de Controle de Biblioteca                 ///\n");
    printf("///           Developed by @Pedro-E-Rodrigues and @ArturCandeia -- 2022     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            > > > >  Sistema de Controle de Biblioteca < < < <           ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Menu Usuários                                             ///\n");
    printf("///            2. Menu Livros                                               ///\n");
    printf("///            3. Menu Empréstimos                                          ///\n");
    printf("///            4. Menu Devoluções                                           ///\n");
    printf("///            5. Menu Funcionários                                         ///\n");
    printf("///            6. Menu Sobre                                                ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha o menu desejado:                                     ///\n");              
    scanf("%c", &op);
    getchar();             
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return op;
}

void tela_sobre(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            > > > > Sistema de Controle de Biblioteca < < < <            ///\n");
    printf("///                                                                         ///\n");
    printf("///  Este Programa tem como base servir para o controle e gestão para       ///\n");
    printf("///  uma biblioteca. Nessa versão do programa ele contem a ídeia básica     ///\n");
    printf("///  para o projeto que iremos desenvolver com o decorrer da disciplina     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_equipe(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            > > > > Sistema de Controle de Biblioteca < < < <            ///\n");
    printf("///                                                                         ///\n");
    printf("///            Projeto desenvolvido por:                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///      Alunos: Pedro Emanuel de Brito Rodrigues                           ///\n");
    printf("///      E-mail: pedro.rodrigues.129@ufrn.edu.br                            ///\n");
    printf("///      Redes sociais: @pedro__emanuel__                                   ///\n");
    printf("///      Git: https://github.com/Pedro-E-Rodrigues/Projeto-Biblioteca.git   ///\n");
    printf("///                                                                         ///\n");
    printf("///      Aluno: Artur Morais Candeia                                        ///\n");
    printf("///      E-mail: Artur.candeia.086@ufrn.edu.br                              ///\n");
    printf("///      Git: https://github.com/ArturCandeia/Projeto-Biblioteca.git        ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_livros(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///             > > > > Sistema de Controle de Biblioteca < < < <           ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///           Developed by @pedro__emanuel__ and @ArturCandeia --2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = =  Menu Livros = = = = = = = = =             ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Pesquisar livros                                          ///\n");
    printf("///            2. Escolher livros                                           ///\n");
    printf("///            3. Sobre Livros                                              ///\n");
    printf("///            0. Voltar ao menu principal                                  ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada:");
    scanf("%c", &op);
    getchar();   
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    
}

void tela_pesquisar_l(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            > > > > Sistema de Controle de Biblioteca < < < <            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///           Developed by @pedro__emanuel__ and @ArturCandeia --2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Pesquisar Livros = = = = = = = =             ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe o nome do livro:                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_escolher_l(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            > > > > Sistema de Controle de Biblioteca < < < <            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///           Developed by @pedro__emanuel__ and @ArturCandeia --2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Escolher Livro = = = = = = = =               ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe o nome do livro:                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_sobre_l(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            > > > > Sistema de Controle de Biblioteca < < < <            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///           Developed by @pedro__emanuel__ and @ArturCandeia --2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Sobre os Livros = = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe o nome do livro:                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_emprestimos(void){
    char op;
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///             > > > > Sistema de Controle de Biblioteca < < < <           ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///           Developed by @pedro__emanuel__ and @ArturCandeia --2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = =  Menu Emprestimos = = = = = = = = =        ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Emprestimos do úsuario                                    ///\n");
    printf("///            2. Prazos do úsuario                                         ///\n");
    printf("///            0. Voltar ao menu principal                                  ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada:");
    scanf("%c", &op);
    getchar();   
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    
}

void tela_emprestimos_u(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            > > > > Sistema de Controle de Biblioteca < < < <            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///           Developed by @pedro__emanuel__ and @ArturCandeia --2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Emprestimos do Úsuario = = = = = = = =       ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            Informe seu nome:                                            ///\n");
    printf("///            Informe o seu CPF:                                           ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_emprestimos_p(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            > > > > Sistema de Controle de Biblioteca < < < <            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///           Developed by @pedro__emanuel__ and @ArturCandeia --2022       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Prazo Emprestimos = = = = = = = =            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe seu nome:                                            ///\n");
    printf("///            Informe seu CPF:                                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
