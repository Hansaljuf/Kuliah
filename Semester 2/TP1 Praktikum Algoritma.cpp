#include <iostream> //header C++ for input output
#include <string> //header for String
using namespace std; //without std:: and can use cout and cin

void roomChange(string arr1[], string arr2[2], int n){ //function for change the room

	int i;
	for(i=0; i<n; i++){
		if(arr2[i][1]!=arr1[i][0]) //proses 1
			arr2[i][1]=arr1[i][0];
	}
}

void outputChange(string arr1[], string arr2[], int n){ //function for output who has change

	int i, l;
	for(i=0; i<n; i++){
		cout << endl;
		cout << "Biodata " << i+1 << " : " << arr1[i] << endl;
		cout << "Room      : " <<arr2[i] << endl; //proses 2
		if(i!=n-1)
			for(l=0; l<23; l++){
        		cout << "\xc4"; //for line
    		}
	}
}

int main(){

	int n;
    int nama = 1;
    int *ptr = &nama;
    cout << "===============================================" << endl;
    cout << "\t\t KELOMPOK " << *&nama << endl; //pointer for called value 'nama'
    cout << "===============================================" << endl;
	cout << endl;
	cout << "Amount of Data : "; //input data
	cin >> n;
	cout << endl;
	string name[n]; // type data inputted
	string room[n]; // type data inputted

	int i;
	for(i=0; i<n; i++){
		cout << "Name 	: ";cin >> name[i]; //looping for inputted array data
		cout << "Room	: ";cin >> room[i]; //looping for inputted array data
		cout << endl;
	}

	roomChange(name, room, n); //the function is called in here processing the input
	outputChange(name, room, n); //the function is called in here and processing the input

    return 0;
}
// Fathurrohman Nurhasbi - 065120069
// Hanif Hanan Al-Jufri - 065120086
// Ahmad Ismail Hanif Fillah - 065120090