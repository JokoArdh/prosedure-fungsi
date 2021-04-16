#include<iostream>
using namespace std;
void TampilData();
int main()
{
    cout<< "--------------------------------------------------------------------"<< endl;
    cout<< "\t\t\t SELAMAT DATANG \t\t\t"<< endl;
    cout<< "\t\t DAFTAR CALON MAHASISWA UNIVERSITAS BOYOLALI \t\t"<< endl;
    cout<< "---------------------------------------------------------------------"<< endl;
    cout<< endl;
    cout<<" \t \t  Created By Joko Ardiyanto @ Universitas Boyolali \n ";
    cout<<endl;


    TampilData(); //fungsi prosedur utuk menampilkan data

    return false;
}

    //variabel secara umum
    string nama_007[20],asal_007[30],alamat_007[30],prodi_007[30],data_007;
    char ulangi_007= 'y',pilih_007;
    int x_007,i_007;

//prosedur fungsi TampilData
void TampilData()
{

    for(int i_007=0; i_007<3; i_007++){
    cout<< "  Masukan Nama calon mahasiswa : ";
    cin>>nama_007[i_007];
    cout<< "  Masukan Asal sekolah         : ";
    cin>>asal_007[i_007];
    cout<< "  Masukan Alamat               : ";
    cin>>alamat_007[i_007];
    cout<< "  Masukan Program Studi        : ";
    cin>>prodi_007[i_007];
    cout<<endl;
    }
            cout<< " Daftar calon mahasiswa UBY keseluruhan ";
            cout<<endl;

            for(int i_007=0; i_007<3; i_007++){
                cout<<"==================================="<<endl;
                cout<<" No             : "<<i_007<<endl;
                cout<<" Nama           : "<<nama_007[i_007]<<endl;
                cout<<" asal ssekolah  : "<<asal_007[i_007]<<endl;
                cout<<" alamat         : "<<alamat_007[i_007]<<endl;
                cout<<" prodi          : "<<prodi_007[i_007]<<endl;
                cout<<"==================================="<<endl;

            }

     while(ulangi_007== 'y'){
            cout<<endl;
            cout <<"Daftar nomor berapa yang ingin ditampilkan(0,1,2,3,4)..?: ";
            cin>>x_007;
            cout<<"\n Nama           :"<<nama_007[x_007];
            cout<<"\n Asal sekolah   :"<<asal_007[x_007];
            cout<<"\n Alamat         :"<<alamat_007[x_007];
            cout<<"\n Program Studi  :"<<prodi_007[x_007];
            cout<<endl;
            cout<<"Mau menampilkan data yang lain? (y/t)";
            cout<< "jawab: ";
            cin>>ulangi_007;
     }
            cout<<endl;

        cout<<endl;
        cout<<"================================*******=========================\n";
        cout<<" \t  \t \t      perulangan selesai ! \n";
        cout<<"================================*******=========================\n";
        cout<<" \t \t \t \t \t \t SELESAI \n\n";


}
