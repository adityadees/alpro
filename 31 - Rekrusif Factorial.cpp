#include <iostream>
#include <conio.h>

using namespace std;

long faktorial(int BilFak) {
	if (BilFak == 0) {
		return 1;
	} else{
		return BilFak * faktorial(BilFak - 1);
	}
}

int main() {

	int n;
	cout<<"Masukan Angka : ";
	cin>>n;
	cout << n <<"! = " << faktorial(n) <<endl;
	return 0;
	getch();
}
