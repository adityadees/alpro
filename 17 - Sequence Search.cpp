#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int A[5];
	int i,j,cari,flag=-1;
	cout<<"Masukan 5 angka kedalam array "<<endl;
	for(i=0; i<5; i++) {
		cin>>A[i];
	}
	cout<<endl;
	cout<<"Masukan angka yang ingin dicari :";
	cin>>cari;
	cout<<endl;
 
	for(j=0;j<5;j++) {
		if(A[j] == cari)
		flag=j;
	}
	if(flag != -1) {
		cout<<"Angka ditemukan pada urutan : "<<flag+1 << endl << "Dengan indeks : " <<flag;
		cout<<endl;
	} else {
	cout<<"Angka tidak ditemukan";
	}
	getch();
}
