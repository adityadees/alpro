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
  
  	for (i = 0; i < 3; i++){
    	for (j = 0; j < 3; j++){
    		if(A[i][j]%2 == 0 ){
     			cout << A[i][j];
			} else {
            	cout<<0;		
			}
    	}
   		cout << endl;
  	}
  	
  	getch();
}
