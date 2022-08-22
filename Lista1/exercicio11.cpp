#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   float x1, x2, y1, y2, x, y, m, q;
   
   cin >> x1; 
   cin >> y1; 
   cin >> x2;
   cin >> y2;
   
   x = (x2-x1);
   
   y = (y2-y1);
   
   m = y/x;
	
   q = y1 - (m*x1);
   
   cout << m << endl << q;
}
