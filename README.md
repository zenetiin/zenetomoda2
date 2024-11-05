# ZenetoModa

ZenetoModa é um sistema de gerenciamento de usuários e itens, onde os usuários podem se registrar, fazer login, e interagir com uma lista de itens disponíveis. O sistema utiliza listas encadeadas para gerenciar os usuários e os itens de forma eficiente.

## Funcionalidades

- Cadastro de usuários com validação de e-mail e idade.
- Login de usuários.
- Listagem de itens em promoção e outros disponíveis.
- Opções adicionais após o login, como verificar preço e quantidade de itens, editar, excluir, adicionar ao carrinho e finalizar a compra.
- Implementação de listas encadeadas para gerenciar usuários e itens.

## Estrutura do Projeto

O projeto consiste em dois arquivos principais:

- `main.c`: Contém a lógica principal do sistema.
- `store.c`: Implementa as funções de gerenciamento de usuários e itens.

## Compilação

Para compilar o projeto, utilize o seguinte comando no terminal:

```bash
gcc main.c store.c -o loja.exe
