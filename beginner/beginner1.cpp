#include <iostream>
using namespace std;

int luas(int a){
    return a * a;
}

int keliling(int b){
    return 4 * b;
}

int main(){
    int s,result,hasil;

    cout << "Masukkan sisi persegi: ";
    cin >> s;
    result = luas(s);
    hasil = keliling(s);
    cout << "Luas persegi: " << s << " x " << s << " = " << result << " \n";
    cout << "Keliling Persegi: " << " 4 " << " x " << s << " = " << hasil << endl;
  
    return 0;
}