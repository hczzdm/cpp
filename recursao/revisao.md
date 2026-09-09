#1. O que realmente é recursão?

Recursão acontece quando uma função resolve um problema utilizando uma versão menor do próprio problema. 

Exemplo clássico:

[n! = n(n-1)!] e [0! = 1] 

#2. As três perguntas fundamentais

Antes de escrever qualquer função recursiva, responda:

##1. Qual é o estado?

O que caracteriza uma instância do problema?

Exemplos:

solve(n)
solve(i)
solve(l, r)
solve(row, col)
solve(index, sum)
solve(node)

##2. Qual é o caso base?

Quando o problema fica simples o suficiente para ser respondido diretamente?

Exemplo:

if (n == 0)
    return 1;

#3. Como o problema diminui?

A próxima chamada precisa caminhar em direção ao caso base.

Correto:

solve(n - 1);

Suspeito:

solve(n);

Perigoso:

solve(n + 1);

quando o caso base é n == 0. 

# 3. Regra de Ouro 
Se você não consegue provar que a função caminha para um caso base, existe risco de recursão infinita. 

#4. Pilha de chamadas

Cada chamada recursiva cria um novo frame na call stack.

Considere:

void f(int n) {
    if (n == 0)
        return;

    cout << n << '\n';
    f(n - 1);
}

Chamando:

f(3);

Temos:

f(3)
f(2)
f(1)
f(0) 
======================================
Observe:

void f(int n) {
    if (n == 0)
        return;

    cout << n << " ";
    f(n - 1);
}

Saída:

5 4 3 2 1

Agora:

void f(int n) {
    if (n == 0)
        return;

    f(n - 1);
    cout << n << " ";
}

Saída:

1 2 3 4 5

Esse detalhe aparece constantemente em:

árvores;
DFS;
pós-ordem;
construção de respostas;
backtracking. 

