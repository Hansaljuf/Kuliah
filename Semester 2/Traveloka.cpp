#include <iostream>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <ctime>
using namespace std;

//Header 
void header(){
    system("cls");
    system("color 06");
    int k;
    for(k=0; k<43; k++){
    cout << "\xc4";
    }
    cout << endl;
    cout << " Selamat Datang Di Program Pemesanan Hotel" << endl;
    cout << "               By Anonymous               " << endl;
    for(k=0; k<43; k++){
    cout << "\xc4";
    }
    cout << endl;
    cout << "          Press Enter to continue         " << endl;
    getch();
} 

//Title
void title(){
    cout << "==================Anonym Order==================" << endl;
    cout << "============Hope You Get a Good Time============" << endl;
    cout << endl;
}

void footer(){
    cout << "================================================" << endl;
    cout << "================================================" << endl;
}

//Border part
void Topborder(){
int i;
cout << "\xda";
for (i=0; i<29; i++){
    cout << "\xc4";
}
cout << "\xbf" << endl;
}

void Botborder(){
int j;
cout << "\xc0";
for (j=0; j<29; j++){
    cout << "\xc4";
}
cout << "\xd9" << endl;
}
//WAWAN
//template hotel

//Enumerator
enum IN{
    // 8 -> backspace (ASCII)
    // 13 -> carriage return (ASCII)
    IN_BACK = 8,
    IN_RET = 13
};
//password function
string takePasswd (char sp='*') {
    //stores password
    string pass= "";
    char ch_input;
  
    while(true){
  
        ch_input = getch();
  
        //if input was an enter
        if (ch_input == IN::IN_RET) {
            cout << endl;
            return pass;
        }
        //if input was a backspace
        else if (ch_input == IN::IN_BACK
                 && pass.length()!= 0) {
            pass.pop_back();
  
            // erase previous char
            cout << "\b\b";
            continue;
        }
  
        //prevents crash at the beginning of the line
        else if (ch_input == IN::IN_BACK
                 && pass.length() == 0) {
            continue;
        }
        
        pass.push_back(ch_input);
        cout << sp;
    }
}

//struct pemesanan
typedef struct data{
        string nama_user;
        string nama_hotel;
        string alamat_hotel;
        string harga_hotel;
        int durasi;
}pemesanan_hotel;

pemesanan_hotel ph;


//pemesanan part
void pesanan(){
    time_t now = time(0);
    char* dt = ctime(&now);
    tm *gmt = localtime(&now);
    dt = asctime(gmt);
    cout << "\tNOW DATE : "<< dt << endl;
    
    cin.ignore();
    int totalPrice, price;
    cout << "Atas Nama    : "; getline(cin, ph.nama_user);
    wrong:
	cout << "Nama Hotel   : "; getline(cin, ph.nama_hotel);
    if (ph.nama_hotel == "The Westin Jakarta"){
		price = 1500000;
    }else if (ph.nama_hotel == "Raffles Jakarta"){
		price = 1500000;
	}else if (ph.nama_hotel == "Fairmont Jakarta"){
		price = 2500000;
	}else if (ph.nama_hotel == "The 101 Bogor"){
		price = 800000;
	}else if (ph.nama_hotel == "Hotel Santika Bogor"){
		price = 600000;
	}else if (ph.nama_hotel == "Amaroossa Royal Hotel Bogor"){
		price = 550000;
	}else if (ph.nama_hotel == "The Margo Hotel"){
		price = 700000;
	}else if (ph.nama_hotel == "Hotel Santika Depok"){
		price = 550000;
	}else if (ph.nama_hotel == "Bumi Wiyata Hotel"){
		price = 700000;
	}else{
		cout << "\nMaaf...Keyword yang anda masukkan salah" << endl;
		goto wrong;
	}
	cout << "Alamat Hotel : "; getline (cin, ph.alamat_hotel);
    cout << "Durasi	     : "; cin >> ph.durasi;
    
    totalPrice = price*ph.durasi;
	cout << "Total Harga  : Rp. " << totalPrice << endl;
	
	int kode;
    srand(time(0));
	for (int i=0; i<5; i++){
        kode = rand();
    }
 	cout << "Kode Pesanan : " << kode << endl;
    ofstream orderfile;
	
    orderfile.open("RiwayatOrder.txt", ios::app);
    orderfile << "----------------Riwayat Pemesanan----------------" << endl;
    orderfile << "Nama Pemesan : " << ph.nama_user << endl;
    orderfile << "Nama Hotel   : " << ph.nama_hotel << endl;
    orderfile << "Alamat Hotel : " << ph.alamat_hotel << endl;
    orderfile << "Durasi       : " << ph.durasi <<" Malam" << endl;
    orderfile << "Harga Total  : Rp." <<totalPrice << endl;
    orderfile << "Kode Order   : " << kode << endl;
    orderfile << "Jam Aksess   : " << dt;
    orderfile << "-------------------------------------------------" << endl;
    orderfile.close();
}

void history(){
    const int MAX = 80;
    char buffer [MAX+1];

    ifstream orderfile;
    orderfile.open ("RiwayatOrder.txt");
    cout << endl;

    while (orderfile){
        orderfile.getline(buffer, MAX);
        cout << buffer << endl;
    }
    getch ();
}
//ILHAM
class hotel{
    public:
    string nama;
    string rating;
    string alamat;
    string harga;

    hotel(string inputnama, string inputrating, string inputalamat, string inputharga){
        hotel::nama = inputnama;
        hotel::rating = inputrating;
        hotel::alamat = inputalamat;
        hotel::harga = inputharga;

        cout << hotel::nama << endl;
        cout << hotel::rating << endl;
        cout << hotel::alamat << endl;
        cout << hotel::harga << endl;
    }
};

void daftarhoteljakarta(){
    Topborder();
    hotel hotel11 = hotel("\xb3 The Westin Jakarta          \xb3","\xb3 *****                       \xb3", "\xb3 Jakarta Selatan, Jakarta    \xb3","\xb3 Rp.1.500.000/malam          \xb3");
    Botborder();
    cout << endl;
    Topborder();
    hotel hotel21 = hotel("\xb3 Raffles Jakarta             \xb3","\xb3 *****                       \xb3", "\xb3 Jakarta Selatan, Jakarta    \xb3","\xb3 Rp.1.500.000/malam          \xb3");
    Botborder();
    cout << endl;
    Topborder();
    hotel hotel31 = hotel("\xb3 Fairmont Jakarta            \xb3","\xb3 *****                       \xb3", "\xb3 Jakarta Pusat, Jakarta      \xb3","\xb3 Rp.2.500.000/malam          \xb3");
    Botborder();
}

void daftarhotelbogor(){
    Topborder();
    hotel hotel21 = hotel("\xb3 The 101 Bogor               \xb3","\xb3 ****                        \xb3", "\xb3 Pusat Kota, Bogor           \xb3","\xb3 Rp.800.000/malam            \xb3");
    Botborder();
    cout << endl;
    Topborder();
    hotel hotel22 = hotel("\xb3 Hotel Santika Bogor         \xb3","\xb3 ***                         \xb3", "\xb3 Bogor Utara, Bogor          \xb3","\xb3 Rp.600.000/malam            \xb3");
    Botborder();
    cout << endl;
    Topborder();
    hotel hotel23 = hotel("\xb3 Amaroossa Royal Hotel Bogor \xb3","\xb3 ****                        \xb3", "\xb3 Pusat Kota, Bogor           \xb3","\xb3 Rp.550.000/malam            \xb3"); 
    Botborder();
}

void daftarhoteldepok(){
    Topborder();
    hotel hotel31 = hotel("\xb3 The Margo Hotel             \xb3","\xb3 ****                        \xb3", "\xb3 Beji, Depok                 \xb3","\xb3 Rp.700.000/malam            \xb3");
    Botborder();
    cout << endl;
    Topborder();
    hotel hotel32 = hotel("\xb3 Hotel Santika Depok         \xb3","\xb3 ***                         \xb3", "\xb3 Beji, Depok                 \xb3","\xb3 Rp.550.000/malam            \xb3");
    Botborder();
    cout << endl;
    Topborder();
    hotel hotel33 = hotel("\xb3 Bumi Wiyata Hotel           \xb3","\xb3 ***                         \xb3", "\xb3 Beji, Depok                 \xb3","\xb3 Rp.700.000/malam            \xb3");
    Botborder();
}
// UYAB
//Menu part
void menu(){
    int regop;
    system("cls");
    cout << "Silahkan pilih Region yang anda ingingkan!" << endl;
    cout << "1. Jakarta\n";
    cout << "2. Bogor\n";
    cout << "3. Depok\n";
    cout << "Masukan pilihan anda : "; cin >> regop;

    if (regop == 1){
        system("cls");
        title();
        cout << "Berikut adalah rekomendasi Hotel kami dengan Regional Jakarta\n";
        daftarhoteljakarta();
        cout << endl;
        footer();
        pesanan();
        footer();
        getch();       
    }
    else if (regop == 2){
        system("cls");
        title();
        cout << "Berikut adalah rekomendasi Hotel kami dengan Regional Bogor\n";
        daftarhotelbogor();
        cout << endl;
        footer();
        pesanan();
        footer();
        getch();        
    }
    else if(regop == 3){
        system("cls");
        title();
        cout << "Berikut adalah rekomendasi Hotel kami dengan Regional Depok\n";
        daftarhoteldepok();
        cout << endl;
        footer();
        pesanan();
        footer();
        getch();        
    }
    else if (regop > 3){
        system("cls");
        title();
        cout << "Maaf Untuk Sementara Program kami hanya memiliki lokasi - lokasi tersebut\n";
        cout << "Tunggulah Pembaharuan Selanjutnya Untuk Kenyamanan anda\n";
        footer();
    }
}

void gotoxy(short x, short y){
	COORD c = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void penutupU(){
    system("CLS");
    system("Color E");
    system("Color f1");
    for (int j=0; j<70; j++ ){
        gotoxy(j+1,5); cout <<"     Pesanan Anda Sukses Dikonfirmasi        \n";
        gotoxy(j,6);   cout <<"               - Anonymous -                 \n";
        gotoxy(j,7);   cout <<" - Silahkan lakukan pembayaran di tempat -   \n";
        Sleep(200);
    }
}

void penutupA(){
    system("CLS");
    system("Color E");
    system("Color f1");
    for (int j=0; j<70; j++ ){
        gotoxy(j+1,5); cout <<"     Semangat ya ngehadepin Bug yang muncul terus:)        \n";
        gotoxy(j,6);   cout <<"                    - Anonymous -                          \n";
        gotoxy(j,7);   cout <<"   - Sudah Overthinkingmu, mari ngoding bersamaku :) -     \n";
        Sleep(200);
    }
}

void login (){
    string id;
    string pass;
    system("cls");
    cout << "ID       : "; cin >> id;
    cout << "Password : ";
    pass = takePasswd();
    if (id == "Bayu"){
		pass == "065120067";
		history();
        penutupA();
	}
	else if(id == "Hanif"){
		pass == "065120086";
		history();
        penutupA();
	}
	else if(id == "Mawan"){
		pass == "065120064";
		history();
        penutupA();
	}
	else if(id == "Ilham"){
		pass == "065120070";
		history();
        penutupA();
	}
	else if (id!= "Bayu" || id != "Hanif"|| id != "Mawan"|| id != "Ilham" ){
	menu();
    penutupU();
	}
}
//HANIF
int main(){

    header();
    login();

}