#include <iostream>
#include <math.h>

using namespace std;

// Ini menggunakan fungsi predefined
int main (){

	int mn, mo, n;
    float b;

    cout << endl;
    cout << "Modal awal : "; cin >> mo;
    cout << "Bulan ke : "; cin >> n;
    cout << "Bunga : "; cin >> b;

    b /= 100;
    b++;

    mn = mo*pow(b, n);

    cout << "Jumlah Modal Akhir : " << mn << endl;
	
	return 0;
}