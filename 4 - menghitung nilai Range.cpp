#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	
  int max,i,min,range;
  int A[10] = {2,3,4,7,5,9,1,8,4,6}; 
  
  max = A[0];
  for(i = 0; i < 10; i++) {
    if (A[i] > max)  {
      max = A[i];
    } 
	if (A[i] < min)  {
      min = A[i];
	}
  }
  range = max-min;
  cout  << range << endl;
  getch();
}
