//Library
#include <iostream>
#include <math.h>
using namespace std;
//Calculating area of equilateral triangle
int main() {
double a, b, c, d, A;
b = 3;
cout << "To calculate the area of an equilateral triangle." << endl;
//Asking for input
cout <<"Enter length of side: ";
cin >> a;
//Calculating
c = sqrt(b);
d = pow(a,2);
A =  (c*d)/4;
//Displaying results
cout <<"The area of the equilateral triangle is " << A << " square units." << endl;
return 0;
}

