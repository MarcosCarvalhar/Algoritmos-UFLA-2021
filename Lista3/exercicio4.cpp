#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'} ;
    int n;
   
    cin >> n; 
   
    for(int i=0; i<n; i++){
		for(int j=0;j<=i;j++){
			cout << alfabeto[j] << ' ';
		}
		
		cout << endl;
	}
}


