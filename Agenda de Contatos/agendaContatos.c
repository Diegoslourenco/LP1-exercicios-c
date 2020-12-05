/*
Criar uma agenda de contatados com o seguinte menu:

1. Cadastrar Contatos
2. Pesquisar contato pelo email
3. Pesquisar contato pelo nome
4. Alterar dados de um contato
5. Excluir um Contato pelo código
6. Sair

- A quantidade de contatos é indeterminada.
- Usar alocação dinâmica e realocação.
- Um contato deve ter as seguintes informações:

Codigo
Nome
Telefone
Endereço
Email
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define TEXTO 100
# define TELEFONE 13

typedef struct
{
    int codigo;
    char nome[TEXTO];
    char telefone[TELEFONE];
    char endereco[TEXTO];
    char email[TEXTO];
} Contato;

void flush_in(); //Limpa o buffer do teclado

void recebeContato(Contato*, int); //Recebe todos os dados de um contato
void pesquisaPorEmail(Contato*, int);
void pesquisaPorNome(Contato*, int);
void alteraDados(Contato*, int);
void excluiPorCodigo(Contato*, int*);

int main(void)
{
    int tamanhoAgenda = 0;
    char entradaUsuario;
    int comando = 0;
    int index = -1;
    Contato* contato;

    contato = (Contato*)malloc(tamanhoAgenda * sizeof(Contato));

    while (comando != 6)
    {
        printf("\n\nMenu Agenda\n");
        printf("1. Cadastrar contatos\n");
        printf("2. Pesquisar contato pelo email\n");
        printf("3. Pesquisar contato pelo nome\n");
        printf("4. Alterar dados de um contato\n");
        printf("5. Excluir um contato pelo codigo\n");
        printf("6. Sair\n\n");
        printf("Digite um numero para seguir: ");
        scanf("%c", &entradaUsuario);

        comando = (int)entradaUsuario - 48; //convertendo conforme valores da tabela ASCII

        if ((comando < 1) || (comando > 6))
        {
            printf("\nDigite um numero valido!\n\n");
            sleep(1);
        }
        else if (comando == 1)
        {
            index += 1;
            tamanhoAgenda += 1;
            contato = (Contato*)realloc(contato, tamanhoAgenda * sizeof(Contato));

            flush_in(); //Limpa o buffer do teclado
            recebeContato(contato, index);
        }
        else if (comando == 2)
        {
            pesquisaPorEmail(contato, tamanhoAgenda);
        }
        else if (comando == 3)
        {
            pesquisaPorNome(contato, tamanhoAgenda);
        }
        else if (comando == 4)
        {
            alteraDados(contato, tamanhoAgenda);
        }
        else if (comando == 5)
        {
            excluiPorCodigo(contato, &tamanhoAgenda);
        }
        else if (comando == 6)
        {
            free(contato);
            break;
        }
    }

    printf("\nAte breve!");
    return 0;
}

void recebeContato(Contato* contato, int index)
{
    printf("\n\n1. Cadastrar contatos\n");
    printf("\n\nCampos: Codigo, nome, telefone, endereco e email\n");
    contato[index].codigo = index;

    // Recebe nome
    while (strlen(contato[index].nome) <= 1)
    {
        printf("\nInserir nome do contato:        ");
        fgets(contato[index].nome, TEXTO, stdin);

        if (strlen(contato[index].nome) <= 1)
        {
            printf("\nNome deve ser preenchido\n");
        }
    }

    // Recebe endereco
    while (strlen(contato[index].endereco) <= 1)
    {
        printf("Inserir endereco do contato:    ");
        fgets(contato[index].endereco, TEXTO, stdin);

        if (strlen(contato[index].endereco) <= 1)
        {
            printf("\nEndereco deve ser preenchido\n");
        }
    }

    // Recebe telefone
    while (strlen(contato[index].telefone) <= 1)
    {
        printf("Inserir telefone do contato:    ");
        fgets(contato[index].telefone, TELEFONE, stdin);

        if (strlen(contato[index].telefone) <= 1)
        {
            printf("\nTelefone deve ser preenchido\n");
        }
    }

    // Recebe email
    while (strlen(contato[index].email) <= 1)
    {
        printf("Inserir email do contato:       ");
        fgets(contato[index].email, TEXTO, stdin);

        if (strlen(contato[index].email) <= 1)
        {
            printf("\nemail deve ser preenchido");
        }
    }

    printf("\nO Contato foi salvo com sucesso!\n");
    sleep(2);

    return;
}

void pesquisaPorEmail(Contato* contato, int tamanhoAgenda)
{
    printf("\n\n2. Pesquisar contato pelo email\n");

   if (tamanhoAgenda == 0)
    {
        printf("\nVocê ainda não tem contatos!\nDigite 1 na tela inicial para cadastrar!\n");
        sleep(3);
    }
    else
    {
        flush_in();
        char recebeEmail[100];

        printf("\nDigite o email do contato: ");
        fgets(recebeEmail, TEXTO, stdin);

        if (strlen(recebeEmail) <= 1)
        {
            printf("\nemail nao foi preenchido!");
            sleep(3);
        }
        else
        {
            int encontrado = 0;

            for (int i = 0; i < tamanhoAgenda; i++)
            {
                if (strcmp(recebeEmail, contato[i].email) == 0)
                {
                    encontrado = 1;
                    printf("\nCodigo:   %i", contato[i].codigo + 1);
                    printf("\nNome:     %s", contato[i].nome);
                    printf("Telefone: %s", contato[i].telefone);
                    printf("Endereco: %s", contato[i].endereco);
                    printf("email:    %s", contato[i].email);
                    sleep(3);
                }
            }

            // Aviso ao usuario caso o contato nao seja encontrado
            if (encontrado == 0)
            {
                printf("\nContato nao encontrado!");
                sleep(3);
            }
        }
    }

    return;
}

void pesquisaPorNome(Contato* contato, int tamanhoAgenda)
{
    printf("\n\n3. Pesquisar contato pelo nome\n");

    if (tamanhoAgenda == 0)
    {
        printf("\nVocê ainda não tem contatos!\nDigite 1 na tela inicial para cadastrar!\n");
        sleep(3);
    }
    else
    {
        flush_in();
        char recebeNome[100];

        printf("\nDigite o nome do contato: ");
        fgets(recebeNome, TEXTO, stdin);

        if (strlen(recebeNome) <= 1)
        {
            printf("\nNome nao foi preenchido!");
            sleep(3);
        }
        else
        {
            int encontrado = 0;

            for (int i = 0; i < tamanhoAgenda; i++)
            {
                if (strcmp(recebeNome, contato[i].nome) == 0)
                {
                    encontrado = 1;
                    printf("\nCodigo:   %i", contato[i].codigo + 1);
                    printf("\nNome:     %s", contato[i].nome);
                    printf("Telefone: %s", contato[i].telefone);
                    printf("Endereco: %s", contato[i].endereco);
                    printf("email:    %s", contato[i].email);
                    sleep(3);
                }
            }

            // Aviso ao usuario caso o contato nao seja encontrado
            if (encontrado == 0)
            {
                printf("\nContato nao encontrado!");
                sleep(3);
            }
        }
    }

    return;
}

void alteraDados(Contato* contato, int tamanhoAgenda)
{
    printf("\n\n4. Alterar dados de um contato\n");

    if (tamanhoAgenda == 0)
    {
        printf("\nVocê ainda não tem contatos!\nDigite 1 na tela inicial para cadastrar!\n");
        sleep(3);
    }
    else
    {
        char recebeCodigo[3];
        char* resto;
        int codigoAlterar = 0;
        int encontrado = 0;
        flush_in();

        printf("\nDigite o codigo do contato a ser modificado: ");
        fgets(recebeCodigo, 3, stdin);

        codigoAlterar = (int)strtol(recebeCodigo, &resto, 10) - 1;

        if (codigoAlterar == -1)
        {
            printf("\nCodigo nao foi preenchido!");
            sleep(3);
            return;
        }
        else
        {
            for (int i = 0; i < tamanhoAgenda; i++)
            {
                if (codigoAlterar == contato[i].codigo)
                {
                    encontrado = 1;
                    char entradaAlteracao;
                    int campoAlteracao = 0;

                    while(campoAlteracao != 5)
                    {
                        printf("\nO que deseja alterar?");
                        printf("\n1. Nome:     %s", contato[i].nome);
                        printf("2. Telefone: %s", contato[i].telefone);
                        printf("3. Endereco: %s", contato[i].endereco);
                        printf("4. email:    %s", contato[i].email);
                        printf("5. Sair\n");
                        scanf("%c", &entradaAlteracao);

                        campoAlteracao = (int)entradaAlteracao - 48;

                        if ((campoAlteracao < 1) || (campoAlteracao > 6))
                        {
                            flush_in();
                            printf("\nDigite um numero valido!\n\n");
                            sleep(1);
                        }
                        else if (campoAlteracao == 5)
                        {
                            flush_in();
                            break;
                        }
                        else if (campoAlteracao == 1)
                        {
                            flush_in();
                            strcpy(contato[i].nome, "");

                            // Recebe nome
                            while (strlen(contato[i].nome) <= 1)
                            {
                                printf("\nDigite o novo nome do contato: ");
                                fgets(contato[i].nome, TEXTO, stdin);

                                if (strlen(contato[i].nome) <= 1)
                                {
                                    printf("\nNome deve ser preenchido");
                                }
                            }
                        }
                        else if (campoAlteracao == 2)
                        {
                            flush_in();
                            strcpy(contato[i].telefone, "");

                            // Recebe telefone
                            while (strlen(contato[i].telefone) <= 1)
                            {
                                printf("\nInserir telefone do contato: ");
                                fgets(contato[i].telefone, TELEFONE, stdin);

                                if (strlen(contato[i].telefone) <= 1)
                                {
                                    printf("\nTelefone deve ser preenchido");
                                }
                            }
                        }
                        else if (campoAlteracao == 3)
                        {
                            flush_in();
                            strcpy(contato[i].endereco, "");

                            // Recebe endereco
                            while (strlen(contato[i].endereco) <= 1)
                            {
                                printf("\nInserir endereco do contato: ");
                                fgets(contato[i].endereco, TEXTO, stdin);

                                if (strlen(contato[i].endereco) <= 1)
                                {
                                    printf("\nEndereco deve ser preenchido");
                                }
                            }
                        }
                        else if (campoAlteracao == 4)
                        {
                            flush_in();
                            strcpy(contato[i].email, "");

                            // Recebe email
                            while (strlen(contato[i].email) <= 1)
                            {
                                printf("\nInserir email do contato: ");
                                fgets(contato[i].email, TEXTO, stdin);

                                if (strlen(contato[i].email) <= 1)
                                {
                                    printf("\nemail deve ser preenchido");
                                }
                            }
                        }
                    }
                }
            }
        }

        // Aviso ao usuario caso o contato nao seja encontrado ou que o contato foi alterado
        if (encontrado == 0)
        {
            printf("\nContato nao encontrado!");
            sleep(3);
        }
    }

    return;
}

void excluiPorCodigo(Contato* contato, int* tamanhoAgenda)
{
    printf("\n\n5. Excluir um contato pelo codigo");
    if (*tamanhoAgenda == 0)
    {
        printf("\nVocê ainda não tem contatos!\nDigite 1 na tela inicial para cadastrar!\n");
        sleep(3);
    }
    else
    {
        char entradaExcluir[3];
        char* resto;
        int codigoExcluir = 0;
        int encontrado = 0;
        flush_in();


        printf("\nDigite o codigo do contato: ");
        fgets(entradaExcluir, TEXTO, stdin);

        codigoExcluir = (int)strtol(entradaExcluir, &resto, 10) - 1;

        if (codigoExcluir == -1)
        {
            printf("\nCodigo nao foi preenchido!");
            sleep(3);
            return;
        }
        else
        {
            // Buscando pelo codigo
            for (int i = 0; i < *tamanhoAgenda; i++)
            {
                if (contato[i].codigo == codigoExcluir)
                {
                    encontrado = 1;
                    *tamanhoAgenda -= 1;

                    if (*tamanhoAgenda == 0)
                    {
                        contato = (Contato*)realloc(contato, *tamanhoAgenda * sizeof(Contato));
                    }
                    else
                    {
                        int ultimoIndex = *tamanhoAgenda;
                        contato[i].codigo = contato[ultimoIndex].codigo;
                        strcpy(contato[i].nome, contato[ultimoIndex].nome);
                        strcpy(contato[i].endereco, contato[ultimoIndex].endereco);
                        strcpy(contato[i].telefone, contato[ultimoIndex].telefone);
                        strcpy(contato[i].email, contato[ultimoIndex].email);

                        contato = (Contato*)realloc(contato, *tamanhoAgenda * sizeof(Contato));
                    }
                }
            }
        }

        if (encontrado == 0)
        {
            printf("\nNao foi possivel encontrar esse contato!");
            sleep(3);
        }
        else
        {
            printf("Contato excluido com sucesso!");
            sleep(3);
        }
    }

    return;
}

void flush_in()
{
   int ch;

   while(((ch = fgetc(stdin)) != EOF) && (ch != '\n'))
   {}
}