#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int matrizA[n][n], matrizB[n][n], matrizproduto[n][n];
    int soma;
    bool inverte = true;
    int i, j, k;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> matrizA[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> matrizB[i][j];
        }
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            soma = 0;
            for (k = 0; k < n; k++)
            {
                soma = soma + matrizA[i][k] * matrizB[k][j];
            }
            matrizproduto[i][j] = soma;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == i)
            {
                if (matrizproduto[i][j] != 1)
                {
                    inverte = false;
                    break;
                }
            }
            else
            {
                if (matrizproduto[i][j] != 0)
                {
                    inverte = false;
                    break;
                }
            }
        }
    }

    if (inverte)
    {
        cout << "SIM" << endl;
    }
    else
    {
        cout << "NAO" << endl;
    }

    return 0;
}
