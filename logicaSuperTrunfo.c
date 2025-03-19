#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
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
    

    int main(){
        printf("DESAFIO SUPER TRUNFO - PAÍSES \n");//CADASTRO DO TEMA DO JOGO
        
    
        char ESTADO1, ESTADO2;
        char CODIGO_LETRA1, CODIGO_LETRA2;
        int CODIGO_NUMERO1, CODIGO_NUMERO2;
        char NOME1[50], char NOME2[50];
        int POPULACAO1, POPULACAO2;
        float AREA1, AREA2;
        float PIB1, PIB2;
        int NUMEROPONTOSTURISTICOS1, NUMEROPONTOSTURISTICOS2;
    
        //CADASTRAR CARTA 1
        printf("CARTA 1\n");
        
        //USUÁRIO CADASTRA OS DADOS DA CARTA 1.
    
        // USUARIO CADASTRA A LETRA PARA O ESTADO DO PAÍS ESCOLHIDO
        printf("\n ESTADO (A-H):  ");    
        scanf(" %c",&ESTADO1);
    
    
        //USUÁRIO CADASTRA CODIGO DA CARTA 1.
        
        printf("\n CÓDIGO DA CARTA (A-H, 1-4):  ");
        scanf("%c%d",&CODIGO_LETRA1,&CODIGO_NUMERO1);
    
    
        //USUÁRIO CADASTRA O NOME DA CIDADE DO ESTADO ESCOLHIDO.
    
        printf("\n CIDADE: ");
        scanf(" %49s",NOME1);
        getchar();// limpar o buffer para evitar problemas na proxima leitura.
    
    
       //USUÁRIO CADASTRA INFORMAÇÕES DA CIDADE ESCOLHIDA.
    
        
        printf("\n POPULAÇÃO:  ");
        scanf(" %d",&POPULACAO1);
    
        printf("\n ÁREA (em km):  ");
        scanf(" %f",&AREA1);
    
        printf("\n PIB:  ");
        scanf(" %f",&PIB1);
    
        printf("\n NÚMERO PONTOS TURÍSTICOS:  ");
        scanf(" %d",&NUMEROPONTOSTURISTICOS1);
    
         //USUARIO RECEBE MENSAGEM DE CADASTRO CARTA 1 EFETUADO COM SUCESSO.
    
        printf("\n CARTA 1 CADASTRADA COM SUCESSO!\n");
    
        printf("\n");
    
        
        // CADASTRAR CARTA 2
    
        printf("\nCARTA 2\n");
    
        //USUÁRIO CADASTRA OS DADOS DA CARTA 2
        
        //USUÁRIO CADASTRA A LETRA PARA O ESTADO DO PAÍS ESCOLHIDO ESCOLHIDO.
        
        printf("\n ESTADO (A-H):  "); 
        scanf(" %c",&ESTADO2);
    
        //USUÁRIO CADASTRA CODIGO DA CARTA 2
    
        printf("\n CÓDIGO DA CARTA (A-H, 1-4):  ");
        scanf("%c%d",&CODIGO_LETRA2,&CODIGO_NUMERO2);
    
        //USUÁRIO CADASTRA O NOME DA CIDADE DO ESTADO ESCOLHIDO.
    
        printf("\n CIDADE:  ");
        scanf(" %49s",NOME2);
       
        //USUÁRIO CADASTRA INFORMAÇOES DA CIDADE ESCOLHIDA.
        
    
        printf("\n POPULAÇÃO:  ");
        scanf(" %d",&POPULACAO2);
    
        printf("\n ÁREA:  ");
        scanf(" %f",&AREA2);
    
        printf("\n PIB:  ");
        scanf(" %f",&PIB2);
    
        printf("\n NÚMEROS DE PONTOS TURÍSTICOS:  ");
        scanf(" %d",&NUMEROPONTOSTURISTICOS2);
    
        //USUÁRIO RECEBE MENSAGEM DE CARTA 2 CADASTRADA COM SUCESSO.
    
        printf("\n CARTA 2 CADASTRADA COM SUCESSO!\n");
        printf("\n");
    
        //EXIBIR CARTAS CADASTRADAS
        printf("CARTAS CADASTRADAS:\n");
    
        printf("\n CARTA 1");
        printf("\n ESTADO (A-H): %c, ESTADO1");
        printf("\n CÓDIGO DA CARTA (A-H, 1-): %c%d, CODIGO_LETRA1, CODIGO_NUMERO1");
        printf("\n CIDADE: %s, NOME1");
        printf("\n POPULAÇÃO: %d, POPULACAO1");
        printf("\n ÁREA: %.2f, AREA1");
        printf("\n PIB: %.2f, PIB1");
        printf("\n NÚMEROS DE PONTOS TURISTICOS: %d,NUMEROPONTOSTURISTICOS1");
        printf("\n");
    
        printf("\nCARTA 2");
        printf("\n ESTADO (A-H): %c, ESTADO2");
        printf("\n CÓDIGO DA CARTA (A-H, 1-4): %c%d, CODIGO_LETRA2, CODIGO_NUMERO2");
        printf("\n CIDADE: %s, NOME2");
        printf("\n POPULAÇÃO: %i, POPULACAO2");
        printf("\n ÁREA: %.2f, AREA2");
        printf("\n PIB: %.2f, PIB2");
        printf("\n NÚMEROS DE PONTOS TURISTICOS: %d, NUMEROPONTOSTURISTICOS2");
        printf("\n ---------------------------FIM---------------------------------");
    
            
     //FUNÇÃO PARA CALCULAR DENSIDADE POPULACIONAL E PIB PER CAPITA
    }
    
    //DADOS DA PRIMEIRA CARTA
    printf("DIGITE O NOME DO PRIMEIRO ESTADO: ");
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
