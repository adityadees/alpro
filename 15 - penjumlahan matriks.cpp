#include <iostream>
#include <conio.h>
using namespace std;
int main(){
  	int i, j;
  	int A[3][3] = {
	    {1, 2, 3},
	    {4, 5, 6},
	    {7, 8, 9}
	};
  	int B[3][3] = {
	    {2, 3, 4},
	    {5, 6, 7},
	    {8, 9, 5}
	};
	int C[3][3];
  
  	for (i = 0; i < 3; i++){
    	for (j = 0; j < 3; j++){
    		C[i][j] = A[i][j] + B[i][j];
      		cout << C[i][j]<<" ";
    	}
    	cout << endl;
  	}
  	
  	getch();
}
