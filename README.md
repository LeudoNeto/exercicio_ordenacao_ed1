### Projeto de Algoritmos de Ordenação

Este projeto contém quatro programas que implementam e comparam os algoritmos de ordenação Insertion Sort e Selection Sort. Cada programa aceita um arquivo de entrada específico que contém os dados a serem ordenados e imprime o tempo de execução do(s) algoritmo(s) para o console. O projeto é voltado para um Exercício da cadeira de Estrutura de Dados, prof. Gilberto.

#### Programas

1. **insertion.exe**
   - **Descrição**: Executa o algoritmo de Insertion Sort no caso de teste especificado.
   - **Uso**: `insertion.exe [nome do arquivo]`
   - **Saída**: Imprime o tempo de execução do Insertion Sort para o console. Exemplo:
    ```
    0.00088
    ```

2. **selection.exe**
   - **Descrição**: Executa o algoritmo de Selection Sort no caso de teste especificado.
   - **Uso**: `selection.exe [nome do arquivo]`
   - **Saída**: Imprime o tempo de execução do Selection Sort para o console. Exemplo:
    ```
    0.00132
    ```

3. **ordenacoes.exe**
   - **Descrição**: Executa ambos os algoritmos Insertion Sort e Selection Sort no caso de teste especificado.
   - **Uso**: `ordenacoes.exe [nome do arquivo]`
   - **Saída**: Imprime o tempo de execução de ambos os algoritmos para o console, permitindo a comparação. Exemplo:
    ```
    Selection x Insertion
    0.00070     0.00168
    ```

4. **main.exe**
   - **Descrição**: Executa ambos os algoritmos de ordenação em todos os casos de teste.
   - **Uso**: `main.exe`
   - **Saída**: Imprime uma tabela no console com os tempos de execução de todos os casos de teste, comparando os tempos de ambos os algoritmos. Exemplo:
   ```
    Selection x Insertion
    num.1000.1.in: 0.00094     0.00124
    num.1000.2.in: 0.00065     0.00155
    num.1000.3.in: 0.00064     0.00123
    num.1000.4.in: 0.00064     0.00141
    num.10000.1.in: 0.09160     0.15639
    num.10000.2.in: 0.08055     0.12119
    num.10000.3.in: 0.07112     0.12049
    num.10000.4.in: 0.07541     0.12927
    num.100000.1.in: 9.66665     14.20567
    num.100000.2.in: 8.88193     14.63092
    num.100000.3.in: 8.41695     15.07896
    num.100000.4.in: 7.92914     14.69483
    ```

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
