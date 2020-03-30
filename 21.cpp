#include <iostream> 
#include <conio.h> 
using namespace std; 

int main() { 
    int arr[10] = {176,150,173,181,190,145,183,150,173,181}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int i, key, j; 

    cout << "Sebelum diurutkan : \n"; 
    for (i=0; i<n; i++){
        cout << arr[i] << " "; 
    } 
    
    for (i = 1; i < n; i++) 
    { 
        key = arr[i]; 
        j = i - 1; 

        while (j >= 0 && arr[j] < key) 
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
    
    cout << "\nSetelah diurutkan: \n"; 
    for (i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl; 

    getch();
} 


