#include <iostream>
#include <stdlib.h>

using namespace std;

struct kesehatan
    {
   	char nama[30];
	char tgl[10];
	char TB[10], BB[10];
    }  
    orang[10];

void urut(int a, kesehatan[3])
{
    int i;
    int j;
    int l;
    kesehatan temp;
     
    for (i=0;i<a;i++)
    {
        for (j=i+1;j<a;j++)
    	{
        	for (l=0;l<30;l++)
    		{
        		if (orang[i].nama[l] < orang[j].nama[l])
    			{
        			break;
					}
            			else if (orang[i].nama[l] > orang[j].nama[l])
            {
                temp=orang[i];
                orang[i]=orang[j];
                orang[j]=temp;
                break;
            }
           }
         }
       }
}


    int main()
    {
        int x, i;
        char input[10];
        cout<<"   PEMERIKSAAN KESEHATAN SISWA  ";
        cin>>input;
        x=atoi(input);
     //   cout<<"|-----------------||--------------|\n";
        cout<<"|-----------------||--------------|\n";
        cout<<"|Silahkan Masukkan Nama           |\n";
             for(i=0;i<x;i++)
            {
		cout << "nama	    	: "; cin >> orang[i].nama;
		cout << "tgl lahir	: "; cin >> orang[i].tgl;
		cout << "TB	: "; cin >> orang[i].TB;
		cout << "BB	: "; cin >> orang[i].BB;
        cout << "\n";
		}
        	cout<<"|-----------------||--------------|\n";  

        	urut(x, orang);
         	cout<<"\n";
        	cout<<"|-----------------||--------------|\n";
         	cout<<"|Data siswa yang diperiksa:\n";
         for(i=0;i<x;i++)
        {
	   		cout<<"nama "<<orang[i].nama<<" tgl lahir "<<orang[i].tgl<<" TB " <<orang[i].TB<< " BB " <<orang[i].BB<<"\n";
        }  
         	cout<<"|-----------------||--------------|\n";
           
     return 0;
    }