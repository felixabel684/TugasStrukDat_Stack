#include <iostream>
#include <conio.h>
using namespace std;

int i =1;

struct pasien
{
    string nama_pasien, alamat;
    int umur;
    char jk;

};

struct pasien cipto[100];

void pushdata(int x)
{

    cout<<"Data no."<<i<<endl;
    cout<<"Input Nama Pasien : ";
    cin >> cipto[x].nama_pasien;
    cout<<"Input Jenis Kelamin Pasien : ";
    cin >> cipto[x].jk;
    cout<<"Input Umur Pasien : ";
    cin >> cipto[x].umur;
    cout<<"Input Alamat Pasien : ";
    cin >> cipto[x].alamat;
    i++;

}

void tampildata(int x)
{
    for(int i =1; i<x; i++)
    {
        cout <<"Data no. " << i <<endl;
        cout <<"Nama Pasien : " <<cipto[i].nama_pasien<<endl;
        cout <<"Jenis Kelamin : " << cipto[i].jk<<endl;
        cout <<"Umur Pasien : " << cipto[i].umur<<endl;
        cout <<"Alamat : " << cipto[i].alamat<<endl<<endl;
    }
    cout<<"Press Any Key..."<<endl<<endl;
    getch(); //dari conio.h
}

void popdata(int x)
{
        cout <<"Data yang dihapus"<<endl;
        cout <<"Data no. " << x <<endl;
        cout <<"Nama Pasien : " <<cipto[x].nama_pasien<<endl;
        cout <<"Jenis Kelamin : " << cipto[x].jk<<endl;
        cout <<"Umur Pasien : " << cipto[x].umur<<endl;
        cout <<"Alamat : " << cipto[x].alamat<<endl<<endl;
}

int main()
{
    int pilih;
    int top = 1;
    int max;

    cout<<"Maximal Data Yang Bisa Diinput : ";
    cin >> max;
    do
    {
        cout<< "1. Push Data"<<endl;
        cout<< "2. Pop Data"<<endl;
        cout<< "3. Tampil Data"<<endl;
        cout<< "9. Keluar"<<endl;

        cout<< "Pilihan Anda [1-9] : ";
        cin >> pilih;
        if(pilih==1)
            {
                if(top <= max)
                {
                    pushdata(top);
                    top++;
                }
                else
                {
                    cout<<"SORRY STACK IS FULL!!"<<endl;
                    cout<<"MAX STACK : "<< max <<endl;
                    getch();
                }

            }
        if(pilih==2)
            {
                if(top != 1)
                {
                    top--;
                    popdata(top);
                }
                else
                {
                    cout<<"SORRY STACK IS EMPTY!!"<<endl<<endl;
                }

            }
        if(pilih==3)
            tampildata(top);
    }
    while (pilih != 9);

    return 0;
}
