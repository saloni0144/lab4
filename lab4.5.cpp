//Library
#include <iostream>
using namespace std;
//Finding third angle of triangle when two angles are given
int main() {
double A, B, C;
cout << "To find the third angle of a triangle when two angles are given." << endl;
//Asking for input
cout <<"Enter two angles: ";
cin >> A >> B;
//Calculating
C = 180 - (A + B);
//Displaying results
cout <<"The third angle is " << C << "º." << endl;
return 0;
}



