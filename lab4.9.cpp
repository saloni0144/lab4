//Library
#include <iostream>
using namespace std;
//Calculating simple interest when P, T and R are given
int main() {
double P, T, R, S;
cout << "To calculate the simple interest when P, T and R are given." << endl;
//Asking for input
cout <<"Enter Principal (P): ";
cin >> P;
cout <<"Enter Time (T in years): ";
cin >> T;
cout <<"Enter Interest Rate (R %): ";
cin >> R;
//Calculating
S = (P*T*R)/100;
//Displaying results
cout <<"Simple Interest, SI = " << S << "." << endl;
return 0;
}
