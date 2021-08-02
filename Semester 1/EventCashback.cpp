#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <algorithm>
#include <windows.h>
using namespace std;

double TotalHarga(double FirstOfPriceEvent, double SecondOfPriceEvent){
    double TP;
    TP = FirstOfPriceEvent + SecondOfPriceEvent;
    return TP;
}

void Cashback(int DateOfSpecialEvent, double cashback){
      cout << "\t   MANTAP JIWA!! ANDA MENDAPATKAN CASHBACK SEBESAR " << cashback << endl << endl;
    if (DateOfSpecialEvent==15 || DateOfSpecialEvent == 22 || DateOfSpecialEvent == 29){
      cout << "      ===============================================================\n";
      cout << "         TAMBAHAN BONUS UNTUK KAMU : Voucher Makan Senilai 500.000   \n";
      cout << "      ===============================================================\n";
      cout << endl;
    }
}

int main(){
    double FirstOfPriceEvent, SecondOfPriceEvent, Total_Price, cashback=0;
    int DateOfSpecialEvent, TimeOfSpecialEvent, pemahaman, sandi;
    const double CB100 = 1, CB75 = 0.75, CB50 = 0.5, CB35 = 0.35, CB30 = 0.3, CB25 = 0.25, CB20 = 0.2, CB15 = 0.15, CB10 = 0.1, CB5 = 0.05;
    string password [7] = {"065120064", "065120067", "065120070", "065120086", "065120090", "065119099","065119113"};
    string user, member [7] = {"Nurmawan", "Bayu", "Ilham", "Hanif", "Fillah", "Reyhan", "Fauzan"};
    system ("color 06");
    do {
        system("cls");
        cout << "Beta 1.0\n";
        cout << ",-------=======Event Cashback=======-------,\n";
        cout << "|Note :                                    |\n";
        cout << "|Pada kolom waktu masukan 2 digit awal saja|\n";
        cout << "|Misal pukul 21.45                         |\n";
        cout << "|Masukan saja '21' pada kolom waktu        |\n";
        cout << "|Cashback hanya berlaku untuk Member Store |\n";
        cout << "'-------============================-------'\n";
        cout << endl;
        cout << "Apakah anda sudah mengerti ?\n\n"; 
        cout << "1. Yes\n\n";
        cout << "2. No\n";
        cout << "\nPilihan anda adalah : "; cin >> pemahaman; 
    } while (pemahaman!=1);

    login:
    string username, pass;
    int i, cek=0, salah;
    do {
        system("cls");
        if(salah==1){
            cout <<"Password yang Anda masukkan tidak sesuai atau salah. Coba lagi!\n" <<endl;
            salah=0;
        }
        system ("color 06");
        cout << "Masukkan Member Anda\n";
        cin >> user;

        i=0;
        while(i<7){
            if(user == member[i]){
                cek=1;
                break;
            }
            i++;
        }
    
    }while (cek!=1);

    cout << "Masukkan Password Anda\n";
    cin >> pass;
    
    //cek password
    if(pass!=password[i]){
        salah=1;
        goto login;
    }

    system("cls");
    cout << endl;
    cout << "\t\t           Selamat Datang "<< user << ":)"<< endl << endl;
    cout << "\t\t     ---====Masukan Harga Produk====---\n\n";
    cout << "\t\t     Harga Produk 1            = "; cin >> FirstOfPriceEvent;
    cout << "\t\t     Harga Produk 2            = "; cin >> SecondOfPriceEvent;
    Total_Price = TotalHarga(FirstOfPriceEvent,SecondOfPriceEvent);
    cout << "\t\t     Tanggal                   = "; cin >> DateOfSpecialEvent;
    cout << "\t\t     Waktu                     = "; cin >> TimeOfSpecialEvent;
    cout << "\t\t     Total Harga               = " << Total_Price << endl << endl;
    cout << "\t\t     -----=====Event Cashback=====-----\n";
    cout << endl;

    if (FirstOfPriceEvent >= 50000 && SecondOfPriceEvent >= 50000){
        if (DateOfSpecialEvent%2 == 0 && TimeOfSpecialEvent%2 != 0){
                if (Total_Price <= 100000){
                    cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB100;
                }
                else if (Total_Price <= 250000){
                    cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB75;
                }
                else if (Total_Price <= 500000){
                    cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB50;
                }
                else if (Total_Price <= 1000000){
                    cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB30;
                }
                else{
                    cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB25;
                }
        }
        else if (DateOfSpecialEvent%2 != 0 && TimeOfSpecialEvent%2 == 0){
           if (Total_Price <= 100000){
                    cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB50;
                }
                else if (Total_Price <= 250000){
                    cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB35;
                }
                else if (Total_Price <= 500000){
                    cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB20;
                }
                else if (Total_Price <= 1000000){
                    cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB15;
                }
                else{
                    cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB10;
                }
        }
        else if (DateOfSpecialEvent%2==0 && TimeOfSpecialEvent%2==0 || DateOfSpecialEvent%2!=0 && TimeOfSpecialEvent%2!=0){
            cashback += min(FirstOfPriceEvent,SecondOfPriceEvent)*CB5;
        }
Cashback(DateOfSpecialEvent, cashback);
    }
    else {
        cout << "\t\t      Mohon Maaf Kamu Belum Beruntung! \n";
        cout << endl;
    }
    cout << "\t  TERIMA KASIH SUDAH BERBELANJA DI SUPERMARKET ANONYMOUS!\n";
    cout << "\t\t      SEMOGA HARI ANDA MENYENANGKAN :)\n\n";
    //Tabel
    int t;
    cout << "\t \xda";
    for(t=0; t<55; t++){
        cout << "\xc4";
    }
    cout << "\xbf";
    cout << endl;
    
    cout << "\t \xb3             THE OWNER OF ANONYMOUS STORE              \xb3\n";
    cout << "\t \xc3";
    for(t=0; t<55; t++){
        if (t == 27){
            cout << "\xc2";
            continue;
        }
        cout << "\xc4";
    }
    cout << "\xb4";
    cout << endl;
    cout << "\t \xb3 Ahmad Ismail Hanif Fillah \xb3         065120090         \xb3\n";
    cout << "\t \xb3        Bayu Ilham         \xb3         065120067         \xb3\n";
    cout << "\t \xb3   Hanif Hanan Al-Jufri    \xb3         065120086         \xb3\n";
    cout << "\t \xb3     Ilham Radan Alif      \xb3         065120070         \xb3\n";
    cout << "\t \xb3         Nurmawan          \xb3         065120064         \xb3\n";
    cout << "\t \xc3";
    for(t=0; t<55; t++){
        if(t == 27){
            cout << "\xc1";
            continue;
        }
        cout << "\xc4";
    }
    cout << "\xb4";
    cout << endl;
    cout << "\t \xb3             THE OWNER OF ANONYMOUS STORE              \xb3\n";
    cout << "\t \xc0";
    for(t=0; t<55; t++){
        cout << "\xc4";
    }
    cout << "\xd9";
    cout << endl;

    // SOUND BEEP----------------
    system ("color f1");
    Beep(530,800);  
    Beep(587,500);
    Beep(659,500);
    Beep(698,300);
    Beep(783,700);
    Beep(698,500);
    Beep(659,400);

    Beep(523,800);
    Beep(587,400);
    Beep(659,700);
    Beep(587,500);
    Beep(587,600);
 
    cin.get();
    getch();
    return 0;
}