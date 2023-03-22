#include <iostream>
using namespace std;

float LuasPersegi(float p, float l) {
    return p * l;
}

float LuasLingkaran(float r) {
    return 3.14 * r * r;
}

float LuasSegitiga(float a, float t) {
    return 0.5 * a * t;
}

int main() {
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    cout << "==============" << endl;
    cout << "====M E N U====" << endl;
    cout << "==============" << endl;
    cout << "1. luas Persegi Panjang" << endl;
    cout << "2. luas Lingkaran" << endl;
    cout << "3. luas Segitiga" << endl;
    cout << "4. Exit" << endl;
    cout << "\nPilihan (1/2/3/4) : " << endl;
    cin >> pilihan;

    switch (pilihan) {
    case 1:
        cout << "Masukan panjang = ";
        cin >> panjang;
        cout << "Masukan lebarnya = ";
        cin >> lebar;
        cout << "Luas Persegi Panjang = " << LuasPersegiPanjang(panjang, lebar);
        break;
    case 2:
        cout << "Masukan jari-jari = ";
        cin >> jejari;
        cout << "Luas lingkaran = " << luasLingkaran(jejari);
        break;
    case 3:
        cout << "Masukan alas = ";
        cin >> alas;
        cout << "Masukan tinggi = ";
        cin >> tinggi;
        cout << "Luas Segitiga = " << LuasSegitiga(alas, tinggi);
        break;

    case 4:
        break;
    default:
        cout << "pilihan salah !";
        break;
    }
}while (pilihan i=4);

}