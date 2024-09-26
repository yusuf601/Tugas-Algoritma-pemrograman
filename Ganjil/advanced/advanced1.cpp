#include <iostream>
#include <cstdlib>
using namespace std;

int luas(int a){
    return a * a;
}

int keliling(int b){
    return 4 * b;
}

int main(){
    int s,result,hasil;
    int pil;
    bool choice = true;
    while(choice){
        system("cls");
        cout << "Masukkan sisi persegi: ";
        cin >> s;
        result = luas(s);
        hasil = keliling(s);
        cout << "Luas persegi: " << s << " x " << s << " = " << result << " \n";
        cout << "Keliling Persegi: " << " 4 " << " x " << s << " = " << hasil << endl;
        cout <<  "**************************************************************** \n";
        cout << "Pilihan yang tersedia \n";
        cout << "1.ya \n";
        cout << "2.tidak \n";
        cout << "Apakah anda ingin melanjutkan program ini?";
        cin >> pil;
        while(pil < 1 || pil > 2){ //tambahkan logika OR untuk mengecek nilai pil apakah kurang dari 1 atau lebih dari 2
            cout << "Masukkan input lagi! ";
            cin >> pil;
       }
       if(pil == 1){
        choice = true;
       }else if(pil == 2){
        break;
       }
    }
    cin.get();
    return 0;
}