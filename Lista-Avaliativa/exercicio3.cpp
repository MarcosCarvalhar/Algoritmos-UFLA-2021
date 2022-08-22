#include <iostream>

using namespace std;

int main()
{
   int ***matriz = new int**[2];
   int linha, coluna, profundidade;
   
   for (linha = 0; linha < 2; linha++)
   {
      matriz[linha] = new int*[2];
      
      for (coluna = 0; coluna < 2; coluna++)
      {
         matriz[linha][coluna] = new int[3];

         for (profundidade = 0; profundidade < 3; profundidade++)
         {
            cin >> matriz[linha][coluna][profundidade];
         }
         
      }
   }

   int n, aux=0;
   cin >> n;

   for (linha = 0; linha < 2; linha++)
   {   
      for (coluna = 0; coluna < 2; coluna++)
      {
         for (profundidade = 0; profundidade < 3; profundidade++)
         {
            if(matriz[linha][coluna][profundidade] == n)
            {
               cout << linha << " " << coluna << " " << profundidade << endl;
               aux++;
            }
         }
         
      }
   }
   
   if(aux == 0)
   {
      cout << -1;
   }
   delete matriz;
}