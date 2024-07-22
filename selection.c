#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBERS 100000  // Defina um limite máximo para os números no array

int main(int argc, char *argv[]) {
    FILE *file;
    int numbers[MAX_NUMBERS];
    int i = 0;

    // Verificando se o nome do arquivo foi passado como argumento
    if (argc < 2) {
        printf("Uso: %s <nome_do_arquivo>\n", argv[0]);
        return 1;
    }

    // Abrindo o arquivo para leitura
    ler_arquivo(file, argv[1], numbers);

    return 0;
}

int ler_arquivo(FILE *file, char *nome_arquivo, int *numeros) {
    FILE *file;
    int i = 0;

    // Abrindo o arquivo para leitura
    file = fopen(nome_arquivo, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nome_arquivo);
        return 1;
    }

    // Lendo os números do arquivo e armazenando no array
    while (fscanf(file, "%d", &numeros[i]) != EOF && i < MAX_NUMBERS) {
        i++;
    }

    // Fechando o arquivo
    fclose(file);

    return i;
}