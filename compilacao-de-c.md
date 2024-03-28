# Compilação de C: Criar um Arquivo Executável Simples

Podemos demonstrar o processo de compilação C para criar um programa simples de linha de comando, através dos seguintes arquivos de origem:

- **app.c**: Núcleo do programa que conecta as funções definidas em outro arquivo

- **functions.c**: Implementação das funções usadas pelo programa

- **functions.h**: Declarações das funções

## 1. Compilando Arquivos de C para Objetos

Primeiro, transformamos cada arquivo .c em arquivos objeto (.o) compatíveis com o sistema:

gcc -c app.c -o app.o gcc -c functions.c -o functions.o


Nessas etapas, os arquivos .c (C source files) são transformados em arquivos objeto (object files) para uma arquitetura-alvo específica (x86-64, ARM etc.).

## 2. Vinculando Arquivos Objetos em um Arquivo Binário

Em seguida, vinculamos os arquivos objeto em um binário executável:

gcc app.o functions.o -o Bin2Dez.exe


A opção `-o` define o nome do binário de saída; nesse caso, **Bin2Dez.exe**.

Agora, possuímos um arquivo executável final, **Bin2Dez.exe**, que pode ser executado em ambientes suportados por C (como Linux, Windows, macOS, etc.).

Confidence: 90%