//Library
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
//Calculating compound interest when P, T and R are given
int main() {
double P, T, R, N, X, Y, Z, C;
cout << "To calculate the compound interest when P, T and R are given." << endl;
//Asking for input
cout <<"Enter Principal (P): ";
cin >> P;
cout <<"Enter Time (T years): ";
cin >> T;
cout <<"Enter Interest Rate (R %): ";
cin >> R;
cout <<"Enter number of times interest is Compounded per year (N): ";
cin >> N;
//Calculating
X = (1 + (R/N));
Y = N*T;
Z = pow(X,Y);
C = P*Z;
//Displaying results
std::cout << std::setprecision(100) <<"Compound Interest, CI = " << C << "." << endl;
return 0;
}

