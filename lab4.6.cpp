//Library
#include <iostream>
using namespace std;
//Finding area of triangle when base and heightare given
int main() {
double b, h, A;
cout << "To find the area of a triangle when its base and height are given." << endl;
//Asking for input
cout <<"Enter base: ";
cin >> b;
cout <<"Enter height: ";
cin >> h;
//Calculating
A = (b*h)/2;
//Displaying results
cout <<"The area of the triangle is " << A << " square units." << endl;
return 0;
}
