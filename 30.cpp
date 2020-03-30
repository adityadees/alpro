#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;


void cetak(int L){
	ofstream myfile;

	myfile.open("volume_kubus.txt", ios::app);


	if(!myfile.fail())
	{
		myfile<<L<<endl;
		myfile.close(); 
		cout<<"Sukses"<<endl;
	}else{
		cout<<"Gagal"<<endl;
	}
	
}

int rumus_volume(int s){
	int volume;

	volume = s*s*s;
	
	return volume;
}

int main(){
	int s,volume;
	
	s=10;
	
	volume = rumus_volume(s);
	cetak(volume);
}

