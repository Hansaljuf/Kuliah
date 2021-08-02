#include <iostream>

using namespace std;

int main (){

	float daftar_nilai [10];
    int selisih;

    int h;
    for (h = 0; h < 10; h++){
        cout << "Nilai ke-" << h+1 << " : ";
        cin >> daftar_nilai [h];
    }

    int min = daftar_nilai [0];
    int max = daftar_nilai [0];

    h=1;
    for (h; h < 10; h++){
        if (daftar_nilai [h] < min)
            min = daftar_nilai [h];
        if (daftar_nilai[h] > max)
            max = daftar_nilai [h];
    }
    cout << endl;

    cout << "Bilangan terkecil : " << min << endl;
    cout << "Bilangan terbesar : " << max << endl;

    selisih = max-min;
    cout << endl;

    cout << "Selisihnya adalah " << selisih << endl;
	
	return 0;
}