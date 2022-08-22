#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int matricula, maiorNotaMatricula1, maiorNotaMatricula2;
	
	float nota, maiorNota1, maiorNota2;
	
	cin >> matricula >> nota;
	maiorNotaMatricula1 = matricula;
	maiorNota1 = nota;
	
	cin >> matricula >> nota;

	if(nota > maiorNota1){
		maiorNota2 = maiorNota1;
		maiorNotaMatricula2 = maiorNotaMatricula1;
		
		maiorNota1 = nota;
		maiorNotaMatricula1 = matricula;
	}else {
		maiorNota2 = nota;
		maiorNotaMatricula2 = matricula;
	}
	while(matricula != 0){
		cin >> matricula;
		
		if(matricula == 0){ break; } 
		cin >> nota;
		
		if(nota > maiorNota1){
			maiorNota2 = maiorNota1;
			maiorNotaMatricula2 = maiorNotaMatricula1;
		
			maiorNota1 = nota;
			maiorNotaMatricula1 = matricula;
		}else 
		if(nota > maiorNota2){
			maiorNota2 = nota;
			maiorNotaMatricula2 = matricula;
		}
	}
	
	cout << fixed << setprecision(1);
	
	cout <<  maiorNotaMatricula1 << ' ' << maiorNota1 << endl;
	cout <<  maiorNotaMatricula2 << ' ' << maiorNota2;
}
