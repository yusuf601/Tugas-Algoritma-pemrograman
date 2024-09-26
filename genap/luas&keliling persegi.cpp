#include <iostream>
using namespace std;

int main(){
    int panjang,lebar,keliling,luas;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    keliling << 2 * (panjang * lebar);
    luas = panjang * lebar;
    cout << "Luas persegi: " << panjang << " x " << lebar << " = " << luas << endl;
    cout << "keliling persegi: " << 2 << " x (" << panjang <<  " + " <<  lebar << " )"<< " = " << keliling << endl;
    cin.get();
    return 0;
}