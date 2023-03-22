#include <iostream>
using namespace std;

int main() {
    int a[5];
    //menampilkan looping melakukan pengulangan atau iterasi pada setiap elemen yang terdapat pada Array.

    cout << "Mengisi Array" << endl;
    for (int i = 0;i < 5;i++) {
        cout << "data ke -" << (i + 1) << ": ";
        cin >> a[i];
    }
    cout << "Membaca  Array" << endl;
    for (int i = 0;i < 5;i++) {
        cout << "data ke-" << (i + 1) << " :" << a[i] << endl;
    }
}