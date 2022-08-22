#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   int n, t=0, a=1, j;
   
   cin >> n;
   // cout << a << endl << t;
   
   for (int i=0; i<n; i++){
	 cout << t << endl;
	 j=t;
	 t=t+a;
	 a=j;
		
	}
}



