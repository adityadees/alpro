#include <iostream>
#include <conio.h>
using namespace std;

int fibonacci(int hasil)
{
      if(hasil==0){
            return 0;
      } else if(hasil==1){
            return 1;
	  } else {
            return fibonacci(hasil-1)+fibonacci(hasil-2);
	  }
}

int main()
{
      int n;

      cout<<"\nMasukkan angka : ";
      cin>>n; 
      cout<<"Fibonacci("<<n<<") = "<<fibonacci(n);

      return 0;
      getch();
}

