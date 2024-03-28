<h1> Bin2Dez Conversor de números binários para decimais </h1>

**Nível: 1** - Iniciante

O sistema binário é o sistema numérico em que todos os computadores digitais são baseados. Portanto, é importante para os desenvolvedores entenderem a matemática binária, ou base 2. O propósito do Bin2Dec é fornecer prática e compreensão de como são feitos cálculos binários.

Bin2Dec permite que o usuário insira strings de até 8 dígitos binários, 0's e 1's, em qualquer sequência e, em seguida, exibe seu equivalente decimal.

Este desafio requer que o desenvolvedor que o implementa siga estas restrições:

Matrizes não podem ser usadas para conter os dígitos binários inseridos pelo usuário.
Determinar o equivalente decimal de um dígito binário específico na sequência deve ser calculado usando uma única função matemática, por exemplo, o logaritmo natural. Depende de você descobrir qual função usar.

## Histórias de Usuário
 -   [ ]O usuário pode inserir até 8 dígitos binários em um campo de entrada
 -   [ ]O usuário deve ser notificado se algo diferente de 0 ou 1 foi inserido
 -   [ ]O usuário visualiza os resultados em um único campo de saída contendo o equivalente decimal (base 10) do número binário que foi inserido

## Recursos Bônus
 -   [ ]O usuário pode inserir um número variável de dígitos binários


## Links e Recursos Úteis

[Binary number system](https://en.wikipedia.org/wiki/Binary_number)
[GitHub repository](https://github.com/florinpop17/app-ideas/blob/master/Projects/1-Beginner/Bin2Dec-App.md?plain=1)

<h2>Compilar e Executar Programas C no Visual Studio Code usando TDM-GCC
Este guia fornece instruções passo a passo sobre como configurar o Visual Studio Code para compilar e executar programas C usando o TDM-GCC no Windows.</h2>

<h3>Pré-requisitos</h3>
<p>
Visual Studio Code: Um editor de código-fonte gratuito e de código aberto desenvolvido pela Microsoft. Download
TDM-GCC: Uma distribuição do GCC para Windows. Download
Extensão C/C++ para Visual Studio Code: Uma extensão que fornece suporte ao C/C++ para o VSCode. Pode ser instalada diretamente no VSCode.
</p>

**Passo 1:** Instalar o Visual Studio Code
Baixe e instale o Visual Studio Code a partir do site oficial: Visual Studio Code - Download

**Passo 2:** Instalar o TDM-GCC
Baixe e instale o TDM-GCC a partir do site oficial: TDM-GCC - Download

Durante a instalação, certifique-se de selecionar a opção para adicionar o TDM-GCC ao PATH do sistema.

**Passo 3:** Instalar a Extensão C/C++ para Visual Studio Code
Abra o Visual Studio Code.
Clique no ícone de extensões na barra lateral esquerda (ou pressione Ctrl+Shift+X).
Pesquise por "C/C++" e instale a extensão fornecida pela Microsoft.

**Passo 4:** Criar e Compilar um Programa C
Abra o Visual Studio Code.
Crie um novo arquivo e salve-o com a extensão ".c". Por exemplo, você pode nomeá-lo como "hello.c".
Escreva o código C no arquivo criado.
Abra o terminal integrado no Visual Studio Code (pressione `Ctrl+``).
Navegue até o diretório onde está o seu arquivo .c.

**Compile o programa usando o seguinte comando:**
Copy code
gcc hello.c -o hello.exe
Isso compilará hello.c e gerará um arquivo executável chamado hello.exe no mesmo diretório.

**Execute o programa compilado digitando o seguinte comando no terminal:**
Copy code
.\hello.exe

Isso executará o programa e mostrará a saída no terminal.

# Padrões de Commits (Commit Patterns)

A utilização do git no dia a dia dos Devs é essencial, seja para desenvolver projetos pessoais ou empresariais, todo código que será desenvolvido ou consumido por mais de uma pessoa, eventualmente será utilizado o git.

Portanto, é de muita importância que todos os envolvidos no projeto entendam as mudanças ocorridas e quais foram os contextos de alteração do código. Para isso, o git commit precisa ser utilizado apropriadamente.

Commits mal comentados podem ser muito danosos ao projeto, uma vez que não conseguimos entender a natureza das mudanças ocorridas e o contexto que se aplica, diante disso existe o Conventional Commits.

## O que é o Conventional Commits ?

O Conventional Commits é uma convenção simples de mensagens de commit, que segue um conjunto de regras e que ajuda os projetos a terem um histórico de commit explícito e bem estruturado.

O Conventional Commits deixará a linha do tempo de um projeto mais estruturada e fácil de entender. Quando documentados utilizando o Conventional Commits nos mostram quem alterou, quando, em qual contexto e qual tipo de alteração foi feita.

# Tipos de Commits

- **fix:** Corrige um problema no código.
- **feat:** Adiciona um novo recurso ou funcionalidade.
- **docs:** Atualizações na documentação.
- **style:** Alterações de formatação no código.
- **refactor:** Refatorações no código que não alteram seu comportamento.
- **build:** Mudanças relacionadas a build do projeto.
- **test:** Alterações ou adições em testes.
- **chore:** Atualizações de tarefas de build, configurações, etc.

## Emojis

Os emojis podem ser usados para indicar o tipo de commit de forma visual.

- **fix:** 🐛
- **feat:** ✨
- **docs:** 📚
- **style:** 💄
- **refactor:** ♻️
- **build:** 🔨
- **test:** ✅
- **chore:** 🔧

