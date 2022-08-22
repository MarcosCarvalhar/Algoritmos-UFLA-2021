#include <iostream>

using namespace std;

struct usuarios
{
   int id;
   string nome;
};


int main(){
   int tam;
   cin >> tam; 

   usuarios aluno[tam];

   for (int i = 0; i < tam; i++)
   {
      cin >> aluno[i].id;

      cin.ignore();
      getline(cin, aluno[i].nome);
      
   }

   int busca, inicio=0, resultado=0, meio=0, final=tam-1;
   cin >> busca;
   
   while ((inicio <= final) and (resultado != 1))
   {
      meio = (inicio + final) / 2;
      cout << aluno[meio].id << endl;
      if(aluno[meio].id == busca)
      {
         resultado = 1;
      }else{

      if(aluno[meio].id < busca)
      {
         inicio = meio + 1;
      }
      if(aluno[meio].id > busca)
      {
         final = meio-1;
      }
      }
   }
   
   if(resultado == 1)
   {
     cout << aluno[meio].nome;
   }
   
}