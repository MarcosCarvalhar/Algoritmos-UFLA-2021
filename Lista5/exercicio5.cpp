#include <iostream>
#include <string>

using namespace std;

int main()
{
	string palavra;
	int q=0;
	
	
	cin >> palavra;
	int tamanho = palavra.size();
	
	for (int i=0; i<tamanho; i++){
		if((palavra[i] == 'a')||(palavra[i] == 'e')||(palavra[i] == 'i')||(palavra[i] == 'o')||(palavra[i] == 'u')){
			q++;
		}
	}
	
	cout << q;
}



