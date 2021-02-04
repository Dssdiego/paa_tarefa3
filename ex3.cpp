////////////////////////////////////////
///                                  ///
/// Autor: Diego S. Seabra           ///
/// Matricula: 0040251               ///
///                                  ///
////////////////////////////////////////

#include <iostream>

#define TAMANHO_ARRAY 10

using namespace std;

// n >> tamanho
void insertionSort(int A[], int n)
{
    // Caso base
    if (n <= 1)
    {
        return;
    }

    // Ordena recursivamente A[1 .. n-1]
    insertionSort(A, n - 1);

    // Insere A[n] no arrajndo ordenado A[1..n-1]
    int chave = A[n - 1];
    int j = n - 2;

    while (j >= 0 && A[j] > chave)
    {
        A[j + 1] = A[j];
        j--;
    }
    A[j + 1] = chave;
}

void imprimeArray(int A[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Inicia o arranjo A com os inteiros
    int A[TAMANHO_ARRAY] = {10, 8, 2, 5, 3, 4, 1, 9, 6, 7}; // custo: 1

    cout << "Antes" << endl;
    imprimeArray(A, TAMANHO_ARRAY);

    insertionSort(A, TAMANHO_ARRAY);

    cout << "Depois" << endl;
    imprimeArray(A, TAMANHO_ARRAY);

    // Finaliza o programa
    return 0;                                    // custo: 1
}
