#include <iostream>
using namespace std;



int main(){
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    if(angka % 2 == 0){
        cout << "Bilangan genap " << endl;
    }else{
        cout << "Bilangan ganjil " << endl;
    }
}