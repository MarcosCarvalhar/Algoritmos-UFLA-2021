#include <iostream>
#include <string>

using namespace std;

int main()
{
   const int UMPRIMO = 37;
	const int M = 15;
	long hash = 0;

   int tam, soma=0;
   cin >> tam;

   for (int i = 0; i < tam; i++)
   {
      string palavra;
      cin >> palavra;

      for (int j = 0; j < (int(palavra.size())); j++) {
		   hash = (UMPRIMO * hash + palavra[j]) % M;   
		}

      cout << hash << " ";
      soma += hash;
      hash = 0;
   }

   cout << soma;
}