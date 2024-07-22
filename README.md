### Projeto de Algoritmos de Ordenação

Este projeto contém quatro programas que implementam e comparam os algoritmos de ordenação Insertion Sort e Selection Sort. Cada programa aceita um arquivo de entrada específico que contém os dados a serem ordenados e imprime o tempo de execução do(s) algoritmo(s) para o console. O projeto é voltado para um Exercício da cadeira de Estrutura de Dados, prof. Gilberto.

#### Programas

1. **insertion.exe**
   - **Descrição**: Executa o algoritmo de Insertion Sort no caso de teste especificado.
   - **Uso**: `insertion.exe [nome do arquivo]`
   - **Saída**: Imprime o tempo de execução do Insertion Sort para o console.

2. **selection.exe**
   - **Descrição**: Executa o algoritmo de Selection Sort no caso de teste especificado.
   - **Uso**: `selection.exe [nome do arquivo]`
   - **Saída**: Imprime o tempo de execução do Selection Sort para o console.

3. **ordenacoes.exe**
   - **Descrição**: Executa ambos os algoritmos Insertion Sort e Selection Sort no caso de teste especificado.
   - **Uso**: `ordenacoes.exe [nome do arquivo]`
   - **Saída**: Imprime o tempo de execução de ambos os algoritmos para o console, permitindo a comparação.

4. **main.exe**
   - **Descrição**: Executa ambos os algoritmos de ordenação em todos os casos de teste.
   - **Uso**: `main.exe`
   - **Saída**: Imprime uma tabela no console com os tempos de execução de todos os casos de teste, comparando os tempos de ambos os algoritmos.

### Como Compilar

Para compilar os programas, use o `make` com o Makefile fornecido. Execute o comando a seguir no terminal no diretório onde o Makefile está localizado:

```sh
make
```

Isso irá gerar os executáveis `insertion.exe`, `selection.exe`, `ordenacoes.exe` e `main.exe`.

### Como Executar

Para executar cada programa, utilize a linha de comando conforme descrito:

- **insertion.exe**:
  ```sh
  ./insertion.exe [nome do arquivo]
  ```
- **selection.exe**:
  ```sh
  ./selection.exe [nome do arquivo]
  ```
- **ordenacoes.exe**:
  ```sh
  ./ordenacoes.exe [nome do arquivo]
  ```
- **main.exe**:
  ```sh
  ./main.exe
  ```

### Limpeza

Para remover os arquivos executáveis gerados, utilize o comando:

```sh
make clean
```

Isso irá remover todos os arquivos `.exe` do diretório.

### Notas Adicionais

- Certifique-se de que os arquivos de entrada estejam no formato esperado pelos programas, que é o mesmo dos arquivos fornecidos pelo professor.
