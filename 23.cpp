#include <iostream> 
#include <conio.h> 
using namespace std; 

int main() { 
    int arr[10] = {176,150,173,181,190,145,183,150,173,181}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int temp,i,j,gap;

    cout << "Sebelum diurutkan : \n"; 
    for (i=0; i<n; i++){
        cout << arr[i] << " "; 
    } 

    for (gap = n/2; gap > 0; gap /= 2) { 
        for (i = gap; i < n; i += 1) { 
            temp = arr[i]; 
            
            for (j = i; j >= gap && arr[j - gap] < temp; j -= gap) {
                arr[j] = arr[j - gap]; 
			}
            
            arr[j] = temp; 
        } 
    } 

    cout << "\nSetelah diurutkan: \n"; 
    for (i=0; i<n; i++) {
        cout << arr[i] << " "; 
    }

    getch(); 
} 


