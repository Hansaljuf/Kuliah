#include <iostream>

using namespace std;

typedef struct data{

    int NPM, NB, NP, NM;
	string NAMA;

}nilai;

nilai rnm[5];

int main(){

for (int i=0; i<5; i++){

	cout << endl;
	cout << "NPM  				: "; cin >> rnm[i].NPM;
	cin.ignore();
	cout << "Nama 				: "; getline (cin, rnm[i].NAMA);
	cout << "Nilai B.Indonesia		: "; cin >> rnm[i].NB;
	cout << "Nilai PIK 			: "; cin >> rnm[i].NP;
	cout << "Nilai MTK 			: "; cin >> rnm[i].NM;
}

for (int i=0; i<5; i++){

	cout << endl;
	cout << "NPM				: " << rnm[i].NPM << endl;
	cout << "Nama 				: " << rnm[i].NAMA << endl;
	cout << "Nilai B.Indonesia 		: " << rnm[i].NB << endl;
	cout << "Nilai PIK 		 	: " << rnm[i].NP << endl;
	cout << "Nilai MTK 		 	: " << rnm[i].NM << endl;
	cout << "Rata-Rata 			: " << (rnm[i].NB+rnm[i].NP+rnm[i].NM)/3;
}

	return 0;
}