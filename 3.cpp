#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
    int i;
    int A[10] = {2,3,4,7,5,9,1,8,4,6}; 
    float rata,jumlah;
    
    
    for (i=0; i<10; i++)
        {
           jumlah += A[i];
        }
        
    rata=jumlah/10;
        
    cout<<rata<<endl;
  getch();
  }
