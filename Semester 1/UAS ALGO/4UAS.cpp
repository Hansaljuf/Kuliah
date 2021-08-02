#include <iostream>
#include <conio.h>

using namespace std;

int main (){

	int data [10] = {4, 1, 0, -9, 8, 5, -1, 2, 3, -7};
	int elemen, max;

	max = data [0];

	for (elemen = 0; elemen <= 9; elemen++){
		if (data [elemen] > max) max = data [elemen];
		else max = max;
	}
	cout << "Nilai maksimum adalah : " << max;
}

// 1. iostream.h tidak berguna dikarenakan itu hanya tersedia di
// compail lama
// 2. void tidak dapat memakai main, karena main khusus untuk
// int main
// 3. cout tidak berfungsi dikarenakan tidak ada std :: atau
// using namespace std;
// 4. Setelah mengganti semuanya yang tidak bisa pada point 1-3
// baru output bisa keluar

// #include <iostream.h> -> #include <iostream>
// void main () -> int main ()
// menambahkan using namespace std;