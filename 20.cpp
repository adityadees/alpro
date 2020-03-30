#include <iostream> 
#include <conio.h> 
using namespace std; 

int main() { 
    int arr[10] = {176,150,173,181,190,145,183,150,173,181}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int temp,i,j;
    
    cout << "Sebelum diurutkan : \n"; 
    for (int i=0; i<n; i++){
        cout << arr[i] << " "; 
    } 
    
    for (i = 0; i < n-1; i++)    {    
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp;
            }
        }
    }
    
    cout << "\nSetelah diurutkan: \n";  
    for (i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl; 
    
    getch();
} 


