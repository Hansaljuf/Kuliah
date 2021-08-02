#include <iostream>
using namespace std;

int main (){
	int array [5]{9, 7, 5, 3, 1};

	cout << sizeof(array) << endl;
	int* ptr{array};

	cout << sizeof(ptr) << endl;

	return 0;
}
/*
20 dan 4 adalah hasil dari program di atas.
Kenapa? mari kita bahas.

Diketahui variable array dengan tipe data int memiliki 5 elemen
Lalu program dieksekusi/dipanggil dengan code "sizeof(array)"

Dimana pengertian "sizeof" itu adalah fungsi untuk menghitung
berapa jumlah memori yang dipakai pada setiap tipe data yang dipakai
 
Lalu diketahui angka yang keluar adalah "20"
Kenapa? kita tahu bahwa sizeof itu adalah fungsi untuk menghitung
berapa jumlah memori yang dipakai pada tipe data yang dipakai.

1. Tipe data yang dipakai pada varible di atas adalah int, dimana
int ini memiliki ukuran memori sebanyak 4byte.
2. Elemen yang digunakan pada array ini sebanyak 5 elemen.
3. Sehingga memori int ini dikalikan dengan 5 elemen yang digunakan
menghasilkan 20

Setelah itu program mengeksekusi code selanjutnya yaitu "sizeof(ptr)"

Dimana "sizeof(ptr)" ini sebelumnya telah diinisialisasi sebelumnya
dengan pointer int* ptr{array}, dan menghasilkan nilai 4.

Dimana 4 ini dihasilkan karena sizeof(ptr) ini menunjukan memori
tipe data int pada ptr*/