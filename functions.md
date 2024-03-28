# O que é `functions.h`?

`functions.h` é um arquivo que contém informações sobre funções que podemos usar em nossos programas em linguagem C. É como um catálogo de ferramentas que podemos usar para construir coisas interessantes!

# Para que serve `functions.h`?

Esse arquivo serve para nos ajudar a organizar nosso código. Nele, podemos colocar todas as definições das nossas funções, como o nome das funções e os tipos de dados que elas recebem e retornam.

# Como usamos `functions.h`?

Quando queremos usar as funções definidas em `functions.h`, incluímos esse arquivo no nosso código usando uma instrução especial `#include`. Isso faz com que todas as informações sobre as funções contidas em `functions.h` sejam copiadas para o nosso programa.

## Exemplo:

Suponha que temos uma função chamada `add` que soma dois números. Podemos colocar a definição dessa função em `functions.h`:

```c
// functions.h

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int add(int a, int b); // Função para somar dois números

#endif /* FUNCTIONS_H */


Em seguida, podemos incluir functions.h em nosso programa principal (main.c), assim:

Copy code
// main.c

#include <stdio.h>
#include "functions.h" // Inclui as definições de funções

int main() {
    int result = add(5, 3); // Chamando a função add para somar 5 e 3
    printf("Resultado da soma: %d\n", result);
    return 0;
}
E é isso! Agora podemos usar a função add em nosso programa main.c.


# Pré-processamento em C

O pré-processamento em C é uma etapa importante do processo de compilação que ocorre antes da compilação real do código-fonte em C. Nesta etapa, o pré-processador, uma parte do compilador, processa as instruções especiais começando com `#`.

## Diretiva `#include`

A diretiva `#include` é usada para incluir o conteúdo de outros arquivos em nosso código-fonte. Por exemplo:

```c
#include <stdio.h>
```

Essa linha instrui o pré-processador a incluir o conteúdo do arquivo `stdio.h` no nosso programa. Isso permite que usemos as funções definidas em `stdio.h`, como `printf()`.

## Definições de Guarda

As definições de guarda (`#ifndef`, `#define` e `#endif`) são usadas para garantir que o conteúdo de um arquivo de cabeçalho seja incluído apenas uma vez em cada unidade de compilação. Isso evita a duplicação de definições e erros de redefinição.

Por exemplo, no arquivo de cabeçalho `functions.h`, podemos usar as definições de guarda para garantir que seu conteúdo seja incluído apenas uma vez:

```c
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Conteúdo do arquivo de cabeçalho

#endif /* FUNCTIONS_H */
```

Essas definições garantem que o conteúdo entre `#ifndef FUNCTIONS_H` e `#endif /* FUNCTIONS_H */` seja incluído apenas se `FUNCTIONS_H` não estiver definido anteriormente.

