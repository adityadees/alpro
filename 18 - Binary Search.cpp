#include<iostream>
#include <conio.h>

using namespace std;
int main () {
	int n=5, A[5],i, kiri, kanan, tengah, temp, key;
	bool ketemu = false;

	cout<<"Masukan 5 angka kedalam array "<<endl;
	for (i=0; i<5; i++) {
        cin>>A[i];
	}
	
	for (int i=0; i<n; i++) {
  		for(int j=0; j< n-i-1; j++) {
   			if(A [j] > A [j+1]) {
    			temp=A[j];
    			A[j]=A[j+1];
    			A[j+1]=temp;
		   }
  		}
 	}
 	
	cout<<"Data yang telah diurutkan adalah : ";
 	for(int i=0; i<n; i++) {
  		cout<<A[i]<<" ";
	}
 
 	cout<<"\n Masukan angka yang dicari : ";
 	cin>>key;

 	kiri=0;
 	kanan=n-1;

 	while(kiri<=kanan) {
  		tengah=(kiri + kanan)/2;
	  	if(key == A[tengah]) {
	   		ketemu=true;
	   		break;
	    } else if (key < A[tengah]) {
	   		kanan = tengah -1;
		} else {
	   		kiri = tengah +1;
	  	}
	}
 	
	if (ketemu == true) {
  		cout<<"Angka ditemukan!";
	} else {
  		cout<<"Angka tidak ditemukan";
	}
  	return 0;
	getch();
 }
