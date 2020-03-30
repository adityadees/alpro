#include <iostream>  
#include <conio.h>  
  
using namespace std;  
  
int main()  
{  
    char A[10] = {'K','U','S','U','K','A','S','U','S','U'};  
    int  jumlah, tmp,i,j;  
     
      
    for(i=0; i<10; i++)  
    {  
        for(j=i+1; j<10; j++)  
        {  
            if(A[i] > A[j])  
            {  
                tmp = A[j];  
                A[j] = A[i];  
                A[i] = tmp;  
            }  
        }  
    }  
      
      
    for(i=0; i<10; i++)  
    {  
        jumlah = 0;  
        for(j=0; j<10; j++)  
        {  
            if(A[i] == A[j])  
                jumlah++;  
        }  
          
        if(A[i] != A[i-1])  
            cout << A[i] << " : " << jumlah <<endl;  
    }  
      
    getch();     
}  
