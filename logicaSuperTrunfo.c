#include <stdio.h>

int main() {        
// primeira parte declaração de variaveis
	// variaveis para primeira carta
	char carta_1[500]; // define a primeira carta
	char Estado_1[3]; // Define a variavel para o estado da carta limitado a 2 caracteres.
	char Codigo_da_Carta_1[5]; // Define a variavel para o codigo da carta limitado a 3 caracteres.
	char Nome_da_Cidade_1[50]; // Define a variavel para o nome da carta limitado a 49 caracteres.
	float Populacao_1; // Define a variavel para população da carta em numeros inteiros.
	float Area_1; // Define a variavel para a área da carta em numeros decimais.
	float PIB_1; // Define a variavel para o pib da carta em numeros decimais.
	int Numero_de_Pontos_Turisticos_1; // Define a variavel para os pontos turisticos da carta em numeros inteiros.
	float Densidade_Populacional_1; // Define a variavel para a Densidade Populacional da carta em numeros decimais.
	float PIB_per_Capita_1; // Define a variavel para o PIB per Capita da carta em numeros decimais.
	float Super_Poder_1; // Define a variavel para o Super Poder da carta em numeros decimais.
	char campeao_1[500]; // variavel para carta vencedora
	char empate[500]; // variavel para empate

	// variaveis para segunda carta
	char carta_2[500]; // define a segunda carta
	char Estado_2[3]; // Define a variavel para o estado da carta limitado a 2 caracteres.
	char Codigo_da_Carta_2[5]; // Define a variavel para o codigo da carta limitado a 3 caracteres.
	char Nome_da_Cidade_2[50]; // Define a variavel para o nome da carta limitado a 49 caracteres.
	float Populacao_2; // Define a variavel para população da carta em numeros inteiros.
	float Area_2; // Define a variavel para a área da carta em numeros decimais.
	float PIB_2; // Define a variavel para o pib da carta em numeros decimais.
	int Numero_de_Pontos_Turisticos_2; // Define a variavel para os pontos turisticos da carta em numeros inteiros.
	float Densidade_Populacional_2; // Define a variavel para a Densidade Populacional da carta em numeros decimais.
	float PIB_per_Capita_2; // Define a variavel para o PIB per Capita da carta em numeros decimais.
	float Super_Poder_2; // Define a variavel para o Super Poder da carta em numeros decimais.
	char campeao_2[500]; // variavel para carta vencedora
	int escolha; // declara a escolha do usuário

//carta 1
	// coleta o estado da carta
	printf("Digite o Estado da sua primeira carta(Ex: \"RJ\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%2s", Estado_1); // limita o valor a dois caracteres.         
	getchar();                                                                                                                         

	// coleta o codigo da carta
	printf("Digite o Codigo da sua primeira carta(Ex: \"RJ01\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%4s", Codigo_da_Carta_1); // limita o valor a quatro caracteres.    
	getchar();                                                                                                                              
	
	// coleta o nome da carta
	printf("Digite o nome da sua primeira carta(Ex: \"Rio de janeiro\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	fgets(Nome_da_Cidade_1, 50, stdin); // limita o valor a quarenta e nove caracteres.                                                                                                                                                                                                                                                         
	
	// coleta a população da carta
	printf("Digite a população da sua primeira carta em milhões(Ex: \"6.2\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%f", &Populacao_1); // "%f" coleta o valor decimal                                                                                                                                   
	getchar();                                                                                                                         

	// coleta a área da carta
	printf("Digite a área da sua primeira carta em milhares de Km²(Ex: \"1.2\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%f", &Area_1); // "%f" coleta o valor decimal                                                                                                                         
	getchar();                                                                                                                         

	// coleta o PIB da carta
	printf("Digite o PIB da sua primeira carta em Bilhões(Ex: \"331.28\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%f", &PIB_1); // "%f" coleta o valor decimal                                                                                                                                    
	getchar();                                                                                                                         

	// coleta os pontos turísticos da carta
	printf("Digite os pontos turísticos da sua primeira carta(Ex: \"100\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%d", &Numero_de_Pontos_Turisticos_1);; // "%d" coleta o valor inteiro                                                                                                                                    
	getchar();                                                                                                                         

	Densidade_Populacional_1 =  Populacao_1 * 1000 / (Area_1 + 0.0001); // calcula a densidade

	PIB_per_Capita_1 = PIB_1 * 1000 / Populacao_1; // calcula o PIB per capita

	Super_Poder_1 = Populacao_1 + PIB_1 + Area_1 + Numero_de_Pontos_Turisticos_1 + (1 / Densidade_Populacional_1) + PIB_per_Capita_1; // calcula o poder


// Carta 2
	// coleta o estado da carta
	printf("Digite o Estado da sua segunda carta(Ex: \"RJ\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%2s", Estado_2); // limita o valor a dois caracteres.         
	getchar();                                                                                                                         

	// coleta o codigo da carta
	printf("Digite o Codigo da sua segunda carta(Ex: \"RJ01\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%4s", Codigo_da_Carta_2); // limita o valor a quatro caracteres.    
	getchar();                                                                                                                              
	
	// coleta o nome da carta
	printf("Digite o nome da sua segunda carta(Ex: \"Rio de janeiro\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	fgets(Nome_da_Cidade_2, 50, stdin); // limita o valor a quarenta e nove caracteres. "%s"                                                                                                                                                                                                                                                         
	
	// coleta a população da carta
	printf("Digite a população da sua segunda carta em milhões(Ex: \"6.2\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%f", &Populacao_2); // "%f" coleta o valor decimal                                                                                                                                   
	getchar();                                                                                                                         

	// coleta a área da carta
	printf("Digite a área da sua segunda carta em milhares de Km²(Ex: \"1.2\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%f", &Area_2); // "%f" coleta o valor decimal                                                                                                                         
	getchar();                                                                                                                         

	// coleta o PIB da carta
	printf("Digite o PIB da sua segunda carta em Bilhões(Ex: \"331.28\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%f", &PIB_2); // "%f" coleta o valor decimal                                                                                                                                    
	getchar();                                                                                                                         

	// coleta os pontos turísticos da carta
	printf("Digite os pontos turísticos da sua segunda carta(Ex: \"100\"): "); // a tabulação "\" entre as aspas permite seu uso                                                                                                                                                           
	scanf("%d", &Numero_de_Pontos_Turisticos_2); // "%d" coleta o valor inteiro                                                                                                                                    
	getchar();                                                                                                                         

	Densidade_Populacional_2 = Populacao_2 * 1000 / (Area_2 + 0.0001); // calcula a densidade
	
	PIB_per_Capita_2 = PIB_2 * 1000 / Populacao_2; // calcula o PIB per capita
	
	Super_Poder_2 = Populacao_2 + PIB_2 + Area_2 + Numero_de_Pontos_Turisticos_2 + (1 / Densidade_Populacional_2) + PIB_per_Capita_2; // calcula o poder	

	// Remove '\n' manualmente do nome da primeira carta
	for (int i = 0; Nome_da_Cidade_1[i] != '\0'; i++) {
		if (Nome_da_Cidade_1[i] == '\n') {
			Nome_da_Cidade_1[i] = '\0';
			break;
		}
	}

	// Remove '\n' manualmente do nome da segunda carta
	for (int i = 0; Nome_da_Cidade_2[i] != '\0'; i++) {
		if (Nome_da_Cidade_2[i] == '\n') {
			Nome_da_Cidade_2[i] = '\0';
			break;
		}
	}

	// apresenta a carta 1 quando chamada
	sprintf(carta_1, "\n\nCarta 1: \nEstado: %s\nCódigo: %s\nNome da Cidade: \n%sPopulação: %.2f Milhões\nÁrea: %.2f mil Km².\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km² \nPIB per Capita: %.2f reais\n\n",
					Estado_1,
					Codigo_da_Carta_1,
					Nome_da_Cidade_1,
					Populacao_1,
					Area_1,
					PIB_1,
					Numero_de_Pontos_Turisticos_1,
					Densidade_Populacional_1,
					PIB_per_Capita_1);
	
	// apresenta a carta 2 quando chamada
	sprintf(carta_2, "Carta 2: \nEstado: %s\nCódigo: %s\nNome da Cidade: %sPopulação: %.2f Milhões\nÁrea: %.2f mil Km².\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km² \nPIB per Capita: %.2f reais\n\n",
					Estado_2,
					Codigo_da_Carta_2,
					Nome_da_Cidade_2,
					Populacao_2,
					Area_2,
					PIB_2,
					Numero_de_Pontos_Turisticos_2,
					Densidade_Populacional_2,
					PIB_per_Capita_2);	

	sprintf(campeao_1, "A carta %s(%s) ganhou!", Nome_da_Cidade_1, Codigo_da_Carta_1);

	sprintf(campeao_2,"A carta %s(%s) ganhou!", Nome_da_Cidade_2, Codigo_da_Carta_2);

	sprintf(empate, "A carta %s e %s tem valores iguais, o combate empatou!", Nome_da_Cidade_1, Nome_da_Cidade_2);

// menuzin
	// o print mostra a comparação de resultados
	printf("Comparação de cartas Atributo: População: \nCarta 1 - %s - (%s): %.2f \n",Nome_da_Cidade_1,Codigo_da_Carta_1,Populacao_1);
	printf("Carta 2 - %s - (%s): %.2f \n\n",Nome_da_Cidade_2,Codigo_da_Carta_2,Populacao_2);
	printf("Escolha o atributo a ser comparado: \n1 - Nome do país  \n2 - População \n3 - Área \n4 - PIB  \n5 - Número de pontos turísticos \n6 - Densidade demográfica\n");

	do
	{
		scanf("%d", &escolha);
		printf("Escolha o atributo a ser comparado: \n1 - Nome do país  \n2 - População \n3 - Área \n4 - PIB  \n5 - Número de pontos turísticos \n6 - Densidade demográfica\n");
		switch (escolha)
			{
			case 1:
				printf("%s", carta_1);

				printf("%s", carta_2);

				printf("Escolha o atributo a ser comparado: \n1 - Nome do país  \n2 - População \n3 - Área \n4 - PIB  \n5 - Número de pontos turísticos \n6 - Densidade demográfica\n");

				break;
			
			case 2:
				printf("%s versus %s \nPopulação da carta %s: %.2f \nPopulação da carta %s: %.2f\n", Nome_da_Cidade_1, Nome_da_Cidade_2, Codigo_da_Carta_1, Populacao_1, Codigo_da_Carta_2, Populacao_2);
				// o if vai calcular o vencedor, a variavel campeao acumula as vitorias individuais para mostrar no final
				if (Populacao_1 > Populacao_2){
					printf("%s", campeao_1);
		
				}else if (Populacao_1 == Populacao_2)
				{
					printf("%s", empate);
				
				}
				else
				 {
					printf("%s", campeao_2);
					
				}
				
				break;

			case 3:
				printf("%s versus %s \nÁrea da carta %s: %.2f \nÁrea da carta %s: %.2f\n", Nome_da_Cidade_1, Nome_da_Cidade_2, Codigo_da_Carta_1, Area_1, Codigo_da_Carta_2, Area_2);
				// o if vai calcular o vencedor, a variavel campeao acumula as vitorias individuais para mostrar no final
				if (Area_1 > Area_2){
					printf("%s", campeao_1);
		
				}else if (Area_1 == Area_2)
				{
					printf("%s", empate);
				
				}
				else
				 {
					printf("%s", campeao_2);
					
				}
				
				break;

			case 4:
				printf("%s versus %s \nPIB da carta %s: %.2f \nPIB da carta %s: %.2f\n", Nome_da_Cidade_1, Nome_da_Cidade_2, Codigo_da_Carta_1, PIB_1, Codigo_da_Carta_2, PIB_2);
				// o if vai calcular o vencedor, a variavel campeao acumula as vitorias individuais para mostrar no final
				if (PIB_1 > PIB_2){
					printf("%s", campeao_1);
		
				}else if (PIB_1 == PIB_2)
				{
					printf("%s", empate);
				
				}
				else
				 {
					printf("%s", campeao_2);
					
				}
				
				break;

			case 5:
				printf("%s versus %s \nNúmero de Pontos turísticos da carta %s: %d \nNúmero de Pontos turísticos da carta %s: %d\n", Nome_da_Cidade_1, Nome_da_Cidade_2, Codigo_da_Carta_1, Numero_de_Pontos_Turisticos_1, Codigo_da_Carta_2, Numero_de_Pontos_Turisticos_2);
				// o if vai calcular o vencedor, a variavel campeao acumula as vitorias individuais para mostrar no final
				if (Numero_de_Pontos_Turisticos_1 > Numero_de_Pontos_Turisticos_2){
					printf("%s", campeao_1);
		
				}else if (Numero_de_Pontos_Turisticos_1 == Numero_de_Pontos_Turisticos_2)
				{
					printf("%s", empate);
				
				}
				else
				 {
					printf("%s", campeao_2);
					
				}
				
				break;

			case 6:
				printf("%s versus %s \nDensidade demográfica da carta %s: %.2f \nDensidade demográfica da carta %s: %.2f\n", Nome_da_Cidade_1, Nome_da_Cidade_2, Codigo_da_Carta_1, Densidade_Populacional_1, Codigo_da_Carta_2, Densidade_Populacional_2);
				// o if vai calcular o vencedor, a variavel campeao acumula as vitorias individuais para mostrar no final
				if (Densidade_Populacional_1 > Densidade_Populacional_2){
					printf("%s", campeao_1);
		
				}else if (Densidade_Populacional_1 == Densidade_Populacional_2)
				{
					printf("%s", empate);
				
				}
				else
				 {
					printf("%s", campeao_2);
					
				}
				
				break;
			
			default:
				printf("Opcao invalida, tente novamente.\n");
				break;
			}
	} while (escolha < 2 || escolha > 6);
	
	return 0;

}                                                                                                                                
