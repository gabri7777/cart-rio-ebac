#include <stdio.h> //biblioteca de comunic��o com o usu�rio
#include <stdlib.h> // biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> // biblioteca de aloca��o de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar das string


int registro () // Fun��o responsavel por cadastrar os usu�rios no sistema
{
		//in�cio cria��o de vari�veis/string
		char arquivo[40];
		char cpf[40];
		char nome[40];
		char sobrenome[40];
		char cargo[40];
		// final da cria��o de vari�veis/string
		
		printf("digite o cpf a ser cadastrado: "); // coletando informa��o do usu�rio
		scanf("%s", cpf); //  %s refere-se a string
		
		strcpy(arquivo, cpf); // responsalve por copiar os valores das strings
		
		FILE *file; // cria o arquivo
		file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever
		fprintf(file, cpf); // salvo o valor da variavel
		fclose(file); // fecha o arquivo
		
		
		file = fopen(arquivo, "a");
		fprintf(file, ",");
		fclose(file);
		
		printf("digite o nome a ser cadastrado: ");
		scanf("%s", nome);
		
		file = fopen(arquivo, "a");
		fprintf(file,nome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("digite o sobrenome a ser cadastrado: ");
		scanf("%s", sobrenome);
		
		file = fopen(arquivo, "a");
		fprintf(file,sobrenome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file, ",");
		fclose(file);
		
		printf("digite o cargo a ser cadastrado:");
		scanf("%s", cargo);
		
		file = fopen(arquivo, "a");
		fprintf(file,cargo);
		fclose(file);
		
		system("pause");
		
				
		
		
}
int consulta ()
{
	
		setlocale(LC_ALL, "portuguese");
		char cpf[40];
		char conteudo[200];
		
		printf("digite o cpf a ser consultado:");
		scanf("%s", cpf);
		
		FILE *file;
		file = fopen(cpf,"r");
		
		if(file == NULL)
		{
			printf("n�o foi possivel abrir o arquivo, n�o localizado.\n");
		}
		
		while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
		system("pause");
}
int deletar ()
{
		char cpf[40];
		
		printf("Digiteo cpf a ser deletado: ");
		scanf("%s", cpf);
		
		remove(cpf);
		
		FILE *file;
		file = fopen(cpf,"r");
		
		if(file == NULL)
		{
			printf("O usu�rio n�o se encontra no sistema.\n");
			system("pause");
		
    	}
    	else 
    	{
    		printf("o usu�rio foi deletado.\n ");
    		system("pause");
		}
}			

int main() {
	
	int opcao=0; // Definindo vari�veis
	int laco=1;
	for(laco=1;laco=1;)
		{
		
		system("cls");
	
		setlocale(LC_ALL, "portuguese"); // Definindo linguagem
	
		printf("### cart�rio da Ebac ###\n\n"); // in�cio do menu
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1 - Registra nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n"); 
		printf("\t4 - Sair do sistema\n\n");
		printf("op��o: "); // fim do menu
	
		scanf("%d", &opcao); // armazenado a escolha do usu�rio
		
		system("cls"); // responsavel por limpar a tela
		
		switch(opcao) // in�cio da sele��a do menu
		{
			case 1:
			registro(); // chamada de fun��es
			break;
					
					case 2:
				    consulta();
					break;
						
						case 3:
						deletar();
						break;
							
							case 4:
								printf("Obrigado por utilizar sistema\n");
								return 0;
								break;
							
							default:
								printf("essa op�a� n�o est� disponivel\n");
								system("pause");
								break;
		} // fim da sele��o
		
		
		}
}
