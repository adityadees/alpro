#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;


void cetak(int L){
	ofstream myfile;

	myfile.open("luas_segitiga.txt", ios::app);


	if(!myfile.fail())
	{
		myfile<<L<<endl;
		myfile.close(); 
		cout<<"Sukses"<<endl;
	}else{
		cout<<"Gagal"<<endl;
	}
	
}

int rumus_segitiga(int a, int t){
	int L;
	L=0.5*a*t;
	
	return L;
}

int main(){
	int a,t,L;
	
	a=16;
	t=10;
	
	L = rumus_segitiga(a,t);
	cetak(L);
}

