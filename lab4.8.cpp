//Library
#include <iostream>
using namespace std;
//Calculating total, average and percentage of marks in five subjects
int main() {
double a, b, c, d, e, M, T, A, P;
cout << "To calculate the total, average and percentage of marks in five subjects." << endl;
//Asking for input
cout <<"Enter marks in five subjects: ";
cin >> a >> b >> c >> d >> e;
cout <<"Enter total maximum marks possible: ";
cin >> M;
//Calculating
T = a + b + c + d + e;
A = T/5;
P = (A/M)*100;
//Displaying results
cout <<"Total marks = " << T << ", average = " << A << " and percentage = " << P << "%." << endl;
return 0;
}
