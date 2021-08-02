#include <iostream>

using namespace std;

int main (){

	float indeks_prestasi [5];
    float lama_studi [5];

    int i;
    for (i = 0; i < 5; i++){
        cout << "IPK ke-" << i+1 << " = ";
        cin >> indeks_prestasi [i];	
    }
    cout << endl;
    for (i = 0; i < 5; i++){
        cout << "Lama Studi ke-" << i+1 << " = ";
        cin >> lama_studi [i];
    }
    for (i = 0; i < 5; i++){
        if (indeks_prestasi[i] >= 3.5 && indeks_prestasi [i] <= 4.0){
            cout << endl;
            cout << "IPK ke-" << i+1 << " : " << indeks_prestasi [i] << ", dengan lama Studi " << lama_studi [i] << " Tahun. ";
            cout << "Lulus meraih Cumlaude" << endl;
        } else {
            cout << endl;
            cout << "IPK ke-" << i+1 << " : " << indeks_prestasi [i] << ", dengan lama Studi " << lama_studi [i] << " Tahun. ";
            cout << "Terima kasih sudah melakukan yang terbaik!" << endl;
        }
    }
    cout << endl;
    
	return 0;
}