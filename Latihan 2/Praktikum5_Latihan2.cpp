#include <iostream>

using namespace std;

int main()
{
 int A,B,C;

 cout << "Masukkan nilai A :";
 cin >> A;

 cout << "Masukkan nilai B :";
 cin >> B;

 cout << "Masukkan nilai C :";
 cin >> C;

 if ( (A+B==C) || (A+C==B) || (B+C==A))
 {cout << "BENAR";}

 else
 {cout << "SALAH";}

 return 0;
}
