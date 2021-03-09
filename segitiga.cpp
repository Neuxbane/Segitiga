#include <iostream>

float segitiga(float t, float a, float l){// Sebagai Rumus
    float re;
    if (t == 0)re = 2*l/a;// Jika Tinggi tidak di ketahui maka rumusnya 2 * luas / alas
    if (l == 0)re = 0.5*a*t;// Jika Luas tidak di ketahui maka rumusnya 0.5 * alas * tinggi
    if (a == 0)re = 2*l/t;// Jika Alas tidak di ketahui maka rumusnya 2 * luas / tinggi
    return re;
}

int main(){
    float t,a,l;// Digunakan untuk mendeskripsikan Variable
    std::cout << "Tinggi Segitiga: ";
    std::cin >> t;// t untuk Tinggi
    std::cout << "Alas Segitiga: ";
    std::cin >> a;// a untuk Alas
    std::cout << "Luas Segitiga: ";
    std::cin >> l;// l unutk Luas
    std::cout << "\nHasil: " << segitiga(t,a,l) << "\n";// Untuk menampilkan hasilnya
    return 0;
}