#include <iostream>
using namespace std;


int main(){
    float a,b,c,average;
    cout << "Masukkan angka pertama:";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Masukkan angka pertama: ";
    cin >> c;
    average = (a+b+c) / 3;
    cout << "Rata rata dari 3 bilangan adalah: " << average << endl;


    cin.get();
    return 0;
}