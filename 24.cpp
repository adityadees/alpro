#include <iostream>
#include <conio.h>
using namespace std;
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void bubbleSort(int arr[])  
{  
    int i, j;  
    int n=3;
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  
  
void hitungRata(int alpro[10],int basdat[10],int pancasila[10]){
    int i;
    int rata[3],totalAlpro=0,totalBasdat=0,totalPancasila=0;
	
	
	for(i=0;i<10;i++) {
		totalAlpro += alpro[i];
		totalBasdat += basdat[i];
		totalPancasila += pancasila[i];
	}
	
	rata[0] = totalAlpro/10;
  	rata[1] = totalBasdat/10;
  	rata[2] = totalPancasila/10;
  	
	for(i=0;i<3;i++){
  	//	cout << rata[i] << endl;
	}
	
	bubbleSort(rata);
	
}
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}
int main(){
  	int i;
    int alpro[10] = {20,100,89,74,75,25,13,86,44,78};  
    int basdat[10] = {74,23,78,41,56,83,90,67,34,88};  
    int pancasila[10] = {82,35,86,95,43,79,45,78,98,54}; 
  
   	hitungRata(alpro,basdat,pancasila);
}
   
