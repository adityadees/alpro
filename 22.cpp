#include <iostream> 
#include <conio.h> 
using namespace std; 

int main()  { 
    int arr[10] = {176,150,173,181,190,145,183,150,173,181}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int temp,i,j,min; 

    cout << "Sebelum diurutkan : \n"; 
    for (int i=0; i<n; i++){
        cout << arr[i] << " "; 
    } 
    
    for (i = 0; i < n-1; i++)  { 
        min = i; 
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[min]) {
                min = j; 
            }
        }
        temp = arr[min]; 
        arr[min] = arr[i]; 
        arr[i] = temp; 
    }  
    
    cout << "\nSetelah diurutkan: \n"; 
    for (i=0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl; 
    
    getch();
} 

