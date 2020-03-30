#include <iostream>
#include <conio.h>
using namespace std;
int main(){
  	int i, j;
  	int A[2][3] = {
	    {1, 2, 3},
	    {4, 5, 6}
	};
  
  	for (i = 0; i < 3; i++){
    	for (j = 0; j < 2; j++){
    	
      		cout << A[j][i];
		
    	}
   		cout << endl;
  	}
  	
  	getch();
}
