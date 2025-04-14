#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf ("Carta 1:\n");

        char Estado;
        char cg [10];
        char  Cidade [40];
        int Pop;
        float area;
        float PIB;
        int N;
        
        printf("Digite seu Estado:\n");
        scanf("%c", &Estado);
        
        printf("Digite o Código:\n");
        scanf ("%s" , &cg);
        
        printf("Nome da Cidade:\n");
        scanf("%s", &Cidade);
        
        printf("Número de habitantes da Cidade:\n");
        scanf("%d", &Pop);
        
        printf("Área da Cidade:\n");
        scanf("%f", &area);
        
        printf("Produto interno Bruto:\n");
        scanf("%f", &PIB);
        
        printf("Pontos Turísticos:\n");
        scanf("%d",&N);
        
        printf("Estado : %c\n", Estado);
        
        printf("Código: %s\n", cg);
        
        printf("Nome da Cidade: %s\n", Cidade);
        
        printf("População: %d\n", Pop);
        
        printf("Área: %f\n", area);
        
        printf("PIB: %f\n", PIB);
        
        printf("Pontos Turísticos: %d\n", N);
        
    return 0;
}
