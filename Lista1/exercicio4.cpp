#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   float bMaior, bMenor, area, h;
   
   cin >> bMaior; 
   cin >> bMenor;
   cin >> h;
   
   area = ((bMaior + bMenor) * h) / 2;
   
   //cout << fixed << setprecision(2);
    
   cout << area;
}


