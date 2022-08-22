#include <iostream>

using namespace std;

int comparacao(char letra, int &opcao){
	if((letra == ('A'))||(letra == ('E'))||(letra == ('I'))||(letra == ('O'))||(letra == ('U')))
	{
		return opcao++;
	}
	else
	{
		return opcao = 0;	
	}
	
}

int main(){
	int n, opcao=0;
	cin >> n;

	char matriz[n][n];
	char subMatriz[2][2];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> matriz[i][j];
		}
	}

	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1; j++){
			comparacao(matriz[i][j], opcao);
				if(opcao != 0){subMatriz[0][0] = matriz[i][j];}
			comparacao(matriz[i][j+1], opcao);
				if(opcao != 0){subMatriz[0][1] = matriz[i][j+1];}
			comparacao(matriz[i+1][j], opcao);
				if(opcao != 0){subMatriz[1][0] = matriz[i+1][j];}
			comparacao(matriz[i+1][j+1], opcao);
				if(opcao != 0){subMatriz[1][1] = matriz[i+1][j+1];}

			if(opcao == 4){
				i = n;
				j = n;
			}else{opcao = 0;}
		}
	}	
	if(opcao == 4){
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				cout << subMatriz[i][j] << " ";
			}
			cout << endl;
		}
	}
	if(opcao != 4){
		cout << "submatriz nao encontrada";
	}

}
