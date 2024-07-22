#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIRECTORY "instancias-num/" // Define o diretório dos casos de teste
#define MAX_NUMBERS 100000 // Defina um limite máximo para os números no array

int ler_arquivo(FILE *file, char *nome_arquivo, int *numeros) {
    int i = 0;
    char filepath[256];

    snprintf(filepath, sizeof(filepath), "%s%s", DIRECTORY, nome_arquivo);

    // Abrindo o arquivo para leitura
    file = fopen(filepath, "r");
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

void selection_sort(int *numbers, int arr_size) {
    int i, j, menor, temp;

    for (i = 0; i < arr_size; i++) {
        menor = i;
        for (j = i+1; j < arr_size; j++) {
            if (numbers[j] < numbers[menor]) {
                menor = j;
            }
        }

        temp = numbers[menor];
        numbers[menor] = numbers[i];
        numbers[i] = temp;
    }
}

int main(int argc, char *argv[]) {
    FILE *file;
    int numbers[MAX_NUMBERS];
    int arr_size;
    clock_t start;

    // Verificando se o nome do arquivo foi passado como argumento
    if (argc < 2) {
        printf("Uso: %s <nome_do_arquivo>\n", argv[0]);
        return 1;
    }

    // Abrindo o arquivo para leitura
    arr_size = ler_arquivo(file, argv[1], numbers);

    start = clock();

    // Ordena o array
    selection_sort(numbers, arr_size);

    printf("%.5f", (double)(clock() - start)/CLOCKS_PER_SEC);

    return 0;
}

