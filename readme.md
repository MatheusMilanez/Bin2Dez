<h1> Bin2Dez Conversor de números binários para decimais </h1>

# Bin2Dec

**Tier:** 1-Beginner

Binary is the number system all digital computers are based on.
Therefore it's important for developers to understand binary, or base 2,
mathematics. The purpose of Bin2Dec is to provide practice and
understanding of how binary calculations.

Bin2Dec allows the user to enter strings of up to 8 binary digits, 0's
and 1's, in any sequence and then displays its decimal equivalent.

This challenge requires that the developer implementing it follow these
constraints:

-   Arrays may not be used to contain the binary digits entered by the user
-   Determining the decimal equivalent of a particular binary digit in the
    sequence must be calculated using a single mathematical function, for
    example the natural logarithm. It's up to you to figure out which function
    to use.

## User Stories

-   [ ] User can enter up to 8 binary digits in one input field
-   [ ] User must be notified if anything other than a 0 or 1 was entered
-   [ ] User views the results in a single output field containing the decimal (base 10) equivalent of the binary number that was entered

## Bonus features

-   [ ] User can enter a variable number of binary digits

## Useful links and resources

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

