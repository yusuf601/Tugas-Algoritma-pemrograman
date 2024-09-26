#include <iostream>
using namespace std;

int main(){
    int alas,tinggi,luas,keliling,s1,s2,s3;
    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    cout << "Masukkan sisi(s1) segitiga: ";
    cin >> s1 ;
    cout << "Masukkan sisi(s2) segitiga: ";
    cin >> s2;
    cout << "Masukkan sisi(s3) segitiga: ";
    cin >> s3;

    luas = (alas * tinggi) / 2; // rumus luas = 1/2 alas x tinggi
    keliling = s1 + s2 + s3;
    cout << "Luas segitiga: " << alas << " x " << " tinggi " << " = " << luas << endl;
    cout << "Keliling segitiga: " << s1 << " + " << s2 << " + "<< s3 << " = " << keliling << endl; 
    keliling = 
    cin.get();
    return 0;
}