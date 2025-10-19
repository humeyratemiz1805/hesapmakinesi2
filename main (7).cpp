/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int toplama(int sayi1,int sayi2) {
	return sayi1+sayi2;
}
int cikarma(int sayi1,int sayi2) {
	return sayi1-sayi2;
}
int carpma(int sayi1,int sayi2) {
	return sayi1*sayi2;
}
int bolme(int sayi1,int sayi2) {
	return sayi1/sayi2;
}


int main()
{
	string islemler[4]= {"Topla","Cikar","Bol","Carp"};
	cout<<"lutfen yapmak istediginiz islemi seciniz"<<endl;
	cout<<"Islemler:"<<endl;
	for(int i=0; i<4; i++) {
		cout<<islemler[i]<<endl;
	}
	string secilenIslem;
	cin >> secilenIslem;
	int sayi1;
	int sayi2;
	if(secilenIslem==islemler[0]) {
		cin>>sayi1;
		cin>>sayi2;
		cout<<"Sonuc= "<< toplama(sayi1,sayi2)<<endl;
	}
	else if(secilenIslem==islemler[1]) {
		cin>>sayi1;
		cin>>sayi2;
		cout<<"Sonuc= "<< cikarma(sayi1,sayi2)<<endl;
	}
	else if(secilenIslem==islemler[2]) {
		cin>>sayi1;
		cin>>sayi2;
		cout<<"Sonuc= "<< bolme(sayi1,sayi2)<<endl;
	}
	else if(secilenIslem==islemler[3]) {
		cin>>sayi1;
		cin>>sayi2;
		cout<<"Sonuc= "<< carpma(sayi1,sayi2)<<endl;
	}
	else {
		cout<<"hatali giris"<<endl;
	}

	return 0;
}