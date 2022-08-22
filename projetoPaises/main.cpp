#include <iostream>

using namespace std;

struct Paises(
    int id, populacao;
    string nome, idioma, descricao;
);

Paises *incluir(Paises *america, int tam);
Paises *alocar(Paises *america, int tam);
void excluir();
void listar();
void alterar();
void ordenar();
void sair();

int main(){
    int tam=0, opcao;
    Paises *america = new Paises[5];

    cout << "...MENU..." << endl;
    cout << "1. Inserir" << endl;
    cout << "2. Excluir" << endl;
    cout << "3. Listar"  << endl;
    cout << "4. Alterar" << endl;
    cout << "5. Ordenar" << endl;
    cout << "6. Sair"    << endl;

    cin >> opcao;

    switch (opcao)
    {
    case 1:
        rock = incluir();
        break;
    
    case 2:
        excluir();
        break;

    case 3:
        listar();
        break;

    case 4:
        alterar();
        break;

    case 5:
        ordenar();
        break;
    
    case 6:
        sair();
        break;
    }
}