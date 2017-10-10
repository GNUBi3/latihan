#include<iostream>
#include<conio.sh>
//definiskan struktur waktu
struct{
int jam;
int menit;
} waktu1,waktu2,selisih;
int main(){
//input data Jam 1
cout<<" Jam 1 : "; cin>>waktu1.jam;
cout<<" Menit 1 : "; cin>>waktu1.menit;
cout<<endl<<endl;
//input data Jam 2
cout<<" Jam 2 : "; cin>>waktu2.jam;
cout<<" Menit 2 : "; cin>>waktu2.menit;
//menghitung selisih menit
if((waktu2.menit-waktu1.menit)<0){
selisih.menit=(60+waktu2.menit)-waktu1.menit;
waktu2.jam;
}else{
selisih.menit=waktu2.menit-waktu1.menit;
}
//menghitung selisih jam
selisih.jam=waktu2.jam-waktu1.jam;
cout<<endl<<endl;
cout<<"Selisih waktu = "<<selisih.jam*60+selisih.menit<<endl;
cout<<endl<<endl;
//memasukan data Jam 2
cout<<" Jam 2 : " <<selisih.jam<<endl;
cout<<" Menit 2 : " <<selisih.menit<<endl;
return 0;
}