#include <stdio.h>
int main() {
    
    printf("DESAFIO SUPER TRUNFO - PAÍSES\n");
    printf("DESENVOLVENDO A LÓGICA DO JOGO!\n");

 char codigo_letra1, codigo_letra2,estado1, estado2;
    int codigo_numero1, codigo_numero2, cidade1, cidade2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    // cadastro da carta 1
    printf("CADASTRO DA CARTA 1\n");
    printf("CÓDIGO DA CARTA 1- LETRA(A-H): ");
    scanf(" %c", &codigo_letra1);
    printf("CÓDIGO DA CARTA 1- NÚMERO(1-4): ");
    scanf(" %d", &codigo_numero1);
    printf("ESTADO(A-H): ");
    scanf(" %c", &estado1);
    printf("CIDADE(1-4): ");
    scanf(" %d", &cidade1);
    printf("POPULAÇÃO: ");
    scanf(" %d", &populacao1);
    printf("ÁREA(EM KM²): ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf(" %d", &pontos_turisticos1);
    printf("\n");

    // CADASTRO DA CARTA 2
    printf("CADASTRO DA CARTA 2\n");
    printf("CÓDIGO DA CARTA 2-LETRA(A-H): ");
    scanf(" %c", &codigo_letra2);
    printf("CÓDIGO DA CARTA 2- NÚMERO(1-4): ");
    scanf(" %d", &codigo_numero2);
    printf("ESTADO(A-H): ");
    scanf(" %c", &estado2);
    printf("CIDADE(1-4): ");
    scanf(" %d", &cidade2);
    printf("POPULAÇÃO: ");
    scanf(" %d", &populacao2);
    printf("ÁREA(EM KM²): ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf(" %d", &pontos_turisticos2);
    printf("\n");

    // EXIBIR AS CARTAS CADASTRADAS
    printf("CARTAS CADASTRADAS:\n");
    printf("CARTA 1\n");
    printf("CÓDIGO: %c%d\n",codigo_letra1, codigo_numero1);
    printf("ESTADO: %c\n", estado1);
    printf("CIDADE: %d\n", cidade1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("ÁREA: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos1);
    printf("CARTA 1 CADASTRADA COM SUCESSO!\n");
    printf("---------------------------------------------------------------\n");
    printf("CARTA 2 \n");
    printf("CÓDIGO: %c%d\n", codigo_letra2, codigo_numero2);
    printf("ESTADO: %c\n",estado2);
    printf("CIDADE: %d\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.2f\n",pib2);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos2);
    printf("CARTA 2 CADASTRADA COM SUCESSO!\n");
    printf("-----------------------------------------------------------------\n");


    return 0;
}


// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    

    
    
        
        //USUÁRIO CADASTRA OS DADOS DA CARTA 1.
    
        // USUARIO CADASTRA A LETRA PARA O ESTADO DO PAÍS ESCOLHIDO
        
    
    
        //USUÁRIO CADASTRA CODIGO DA CARTA 1.
        
        
    
    
        //USUÁRIO CADASTRA O NOME DA CIDADE DO ESTADO ESCOLHIDO.
    
        
    
    
       //USUÁRIO CADASTRA INFORMAÇÕES DA CIDADE ESCOLHIDA.
    
        
        
    
       
       
    
        
    
    
            
     //FUNÇÃO PARA CALCULAR DENSIDADE POPULACIONAL E PIB PER CAPITA
    }
    
    //DADOS DA PRIMEIRA CARTA
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
    }
  