#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double X, t = 0, p = 1;
    int N, i;
   cout << "Введіть дійсне значення X = ";
   cin >> X;
   if (fabs(X) >= 1) {
        cout << "|X| повинно бути менше 1. Введіть коректне значення." << endl;
        return 0;
    }
   cout << "Введiть ціле число N: "; cin >> N;
  if (N <= 0) {
     cout << "N повинно бути більше 0. Введіть коректне значення." << endl;
     return 0;
    }
  for ( i = 1; i <= N; i++) {
   t += p / i;
    p *= X; 
    }
cout << "ln(1 + X) приблизно дорівнює: " << t << endl;
    return 0;
}

    
 







