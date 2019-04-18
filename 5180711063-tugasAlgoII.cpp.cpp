#include <iostream>
using namespace::std;
struct modul{int a,b;
};
struct modul lus;

void garis(){
cout<<"=========================================================";
}

double dulus(){
int a,b;
 cout<<"masukan nilai = ";cin>>lus.a;
 cout<<"masukan nilai pembagi = ";cin>>lus.b;
}
double hitung(){
double hasil;
    if(lus.a==0)
      return 0;
    else if(lus.a>=0){
        hasil=lus.a%lus.b;
        }
    else if (lus.a<=0){
        hasil=lus.a%lus.b;
    }
cout<<"sisa = "<<hasil;
}
main(){
int a,b;

 cout<<"PROGRAM MENGHITUNG MODULUS"; cout<<endl;
 garis(); cout<<endl;
 cout<<"POSITIF";cout<<endl;
 dulus();
 hitung(); cout<<endl;
 garis();cout<<endl;
 cout<<"NEGATIF";cout<<endl;
 dulus();
 hitung(); cout<<endl;
 garis();
}




