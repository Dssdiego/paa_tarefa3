////////////////////////////////////////
///                                  ///
/// Autor: Diego S. Seabra           ///
/// Matricula: 0040251               ///
///                                  ///
////////////////////////////////////////

#include <iostream>
#include "merge_sort.h"

#define TAMANHO_ARRAY 10

using namespace std;

bool existeX(const int S[TAMANHO_ARRAY], int x)   // custo total: O(n)
{
    // Divide o conjunto em dois lados (esquerda e direita)
    // p >> indice da esquerda / q >> indice da direita
    int p = 0;                      // custo: 1 (pseudo: p <- 1)
    int q = TAMANHO_ARRAY - 1;      // custo: 1 (pseudo: q <- tamanho[S])

    // Enquanto os indices nao forem iguais
    while (p < q)                   // custo: n
    {
        // Como o conjunto esta ordenado em ordem crescente,
        // se o valor da soma eh maior que o X passado,
        // diminui o indice da direita
        if (S[p] + S[q] > x)        // custo: n-1
        {
            q = q - 1;
        } else
        {
            if (S[p] + S[q] < x)
            {
                // Do contrario, aumenta o indice da esquerda
                p = p + 1;
            } else
            {
                // Se o valor da soma for exatamente igual a X,
                // para de rodar o loop (melhor caso)
                // No pior caso, o codigo nunca chegara
                // ate aqui e retornara false apos o while
                return true;
            }
        }
    }
    return false;                   // custo: 1
}

int main()
{
    // Inicia o conjunto S com os inteiros
    int S[TAMANHO_ARRAY] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; // custo: 1

    // Ordena usando o merge sort >> custo de n.log(n)
    mergeSort(S, 0, TAMANHO_ARRAY - 1);      // custo: n.log(n)

    // Verifica se existe o elemento X no conjunto S
    if (existeX(S, 23))                         // custo: n
    {
        cout << "Existem 2 valores que somados sao iguais a x" << endl;
    }

    // Finaliza o programa
    return 0;                                    // custo: 1
}
