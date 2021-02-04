////////////////////////////////////////
///                                  ///
/// Autor: Diego S. Seabra           ///
/// Matricula: 0040251               ///
///                                  ///
////////////////////////////////////////

#include <iostream>

#define TAMANHO_ARRAY 10

using namespace std;

bool existeX(const int S[TAMANHO_ARRAY], int x)
{
//    int n1,n2;                                        // custo: 1

    for (int i = 0; i < TAMANHO_ARRAY; ++i)                    // custo: n+1
    {
        for (int j = 0; j < TAMANHO_ARRAY; ++j)                // custo: n * (n+1)
        {
            if (S[i] + S[j] == x)                               // custo: n * (n+1)
            {
//                n1 = S[i];
//                n2 = S[j];
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int S[TAMANHO_ARRAY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};     // custo: 1
    if (existeX(S, 12))                                      // custo: 1
    {
        cout << "Existem 2 valores que somados são iguais a x" << endl;
    }

    return 0;                                                  // custo: 1
}

// OBS.: Não funciona, O(n) = n^2; deveria ser n.log(n)!
