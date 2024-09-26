#include <iostream>
using namespace std;


int main(){
    int s,keliling,luas;
    cout << "Masukkan nilai sisi \n";
    cin >> s;
    luas = s * s;
    keliling = 4 * s;
    cout << "Luas Persegi : " << s << " x " << s << " = " << luas << " \n";
    cout << "Keliling Persegi : " << " 4 " << " x " << s << " = " << keliling << endl;


    cin.get();
    return 0;
}