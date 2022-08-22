#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream num("numeros.txt");
    ofstream pares("pares.txt");
    ofstream impares("impares.txt");

    int numero;

    if(num)
    {
        while(num >> numero)
        {
            if(numero % 2 == 0)
            {
                pares << numero << " ";
                
            }
            else
            {
                impares << numero << " ";
                
            }
        }

        num.close();
    }
    else
    {
        cout << " Nao abre! ";
    }
    
    return 0;
}
