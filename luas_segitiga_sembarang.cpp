#include<iostream>
#include<math.h>
using namespace std;
int main(){
	//variables declaration
	float a,b,c,s,luas_segitiga;
	cout<<"=================================="<<endl<<"Menghitung Luas Segitiga Sembarang (cm)"<<endl<<"=================================="<<endl;
	cout<<"Segitiga sembarang adalah segitiga yang panjang ketiga sisi nya berbeda satu sama lain, dan ukuran ketiga sudutnya pun berbeda."<<endl<<"=================================="<<endl;
	//value input
	cout<<"Panjang sisi 1 = ";
	cin>>a;
	cout<<"Panjang sisi 2 = ";
	cin>>b;
	cout<<"Panjang sisi 3 = ";
	cin>>c;
	//kondisi antara segitiga sembarang, siku-siku, dan sama sisi
	//jika siku-siku
	if( (a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (a*a)+(c*c)==(b*b) ){
		cout<<"Error!!!"<<endl<<"==========="<<endl<<"Bukan segitiga sembarang!!!"<<endl;
		cout<<"Itu adalah segitiga siku-siku."<<endl;
		cout<<"Rumus luas segitiga siku-siku = (alas × tinggi) ÷ 2"<<endl;
		if(a<b<c){
			luas_segitiga=(a*b)/2;
			cout<<"-----------------------"<<endl<<"Luas segitiga = "<<luas_segitiga<<" cm"<<endl<<"-----------------------"<<endl;
		}else
		if(a<c<b){
			luas_segitiga=(a*c)/2;
			cout<<"-----------------------"<<endl<<"Luas segitiga = "<<luas_segitiga<<" cm"<<endl<<"-----------------------"<<endl;
		}else
		if(b<c<a){
			luas_segitiga=(b*c)/2;
			cout<<"-----------------------"<<endl<<"Luas segitiga = "<<luas_segitiga<<" cm"<<endl<<"-----------------------"<<endl;
		}
	//jika sama sisi
	}else if(a==b && a==c && b==c){
		cout<<"Error!!!"<<endl<<"==========="<<endl<<"Bukan segitiga sembarang!!!"<<endl;
		cout<<"Ketiga sisi sama panjang."<<endl<<"Itu adalah segitiga sama sisi."<<endl;
		cout<<"Rumus luas segitiga sama sisi = (panjang sisi² ÷ 4) × √3"<<endl;
		luas_segitiga=((a*a)/4)*sqrt(3);
		cout<<"-----------------------"<<endl<<"Luas segitiga = "<<luas_segitiga<<" cm"<<endl<<"-----------------------"<<endl;
		}else{
	//segitiga sembarang
	s=(a+b+c)/2;
	cout<<"Ukuran setengah keliling segitiga (s) = "<<s<<" cm"<<endl;
	luas_segitiga=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"-----------------------"<<endl<<"Luas segitiga sembarang= "<<luas_segitiga<<" cm"<<endl<<"-----------------------"<<endl;
	}
	cout<<"-----------------------"<<endl<<"Created by Naufal Arif Wibowo || Find me @GNUBi3"<<endl<<"-----------------------"<<endl;
}