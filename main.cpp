#include <iostream>
using namespace std;

int main()
{

string brng1;
string brng2;
string brng3;
int total,total_sementara,harga1,harga2,harga3,diskon,x1,x2,x3;

cout<<" masukan barang 1 : ";
cin>>brng1;
cout<<" jumlah barang : ";
cin>>x1;
cout<<" masukan harga : ";
cin>>harga1;
cout<<endl<<endl;

cout<<" masukan barang 2 : ";
cin>>brng2;
cout<<" jumlah barang : ";
cin>>x2;
cout<<" masukan harga : ";
cin>>harga2;
cout<<endl<<endl;

cout<<" masukan barang 3 : ";
cin>>brng3;
cout<<" jumlah barang : ";
cin>>x3;
cout<<" masukan harga : ";
cin>>harga3;
cout<<endl<<endl;
system("cls");

total_sementara=(x1*harga1)+(x2*harga2)+(x3*harga3);



cout<<"         list pembelian      "<<endl;
cout<<" ----------------------------- "<<endl;
cout<<"| jumlah |   harga barang     |"<<endl;
cout<<"|-----------------------------|"<<endl;
cout<<"|"<<"    "<<x1<<"  "  <<"|"<<"     "<<harga1<<"        |"<<endl;
cout<<"|"<<"    "<<x2<<"  "  <<"|"<<"     "<<harga2<<"        |"<<endl;
cout<<"|"<<"    "<<x3<<"  "  <<"|"<<"     "<<harga3<<"        |"<<endl;

cout<<"|-----------------------------|"<<endl;

cout<<"|total pembelian |"<<total_sementara<<"     |"<<endl;


if(total_sementara>150000&&total_sementara<200000)
{
        diskon=0.2*total_sementara;
    cout<<" diskon 20% "<<endl;
}
else if(total_sementara>200000&&total_sementara<400000)
{
    diskon=0.4*total_sementara;
     cout<<" diskon 40% "<<endl;
}
else if(total_sementara>400000)
{
    diskon=0.5*total_sementara;
     cout<<" diskon 50% "<<endl;
}
else
{
  cout<<"tidak mendapatkan diskon"<<endl;
}



total=total_sementara-diskon;
cout<<" total semua : "<<total<<endl;
return 0;
}
