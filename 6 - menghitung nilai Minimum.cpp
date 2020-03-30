#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	
  int min,i;
  int A[10] = {2,3,4,7,5,9,1,8,4,6}; 
  
  min = A[0];
  for(i = 0; i < 10; i++) {
    if (A[i] < min)  {
      min = A[i];
    }
  }
  cout  << min << endl;
  getch();
}
