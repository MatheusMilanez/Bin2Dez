<h1> Bin2Dez Conversor de números binários para decimais </h1>

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

