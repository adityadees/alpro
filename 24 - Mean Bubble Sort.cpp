#include<iostream>
#include <conio.h>

using namespace std;

void swap(float *xp, float *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void bubbleSort(float arr[]) 
{ 
	int i, j; 
	int n=3;
	for (i = 0; i < n-1; i++)	 
	
	for (j = 0; j < n-i-1; j++) {
		if (arr[j] > arr[j+1]) {
			swap(&arr[j], &arr[j+1]); 
		}
	}
} 

void printArray(float arr[]) 
{ 
	int i; 
	for (i = 0; i < 3; i++) {
		cout << arr[i] << " "; 
	}
	cout << endl; 
} 

float *rataNilai(int mataKuliah[3][10]){
	int i,j;
	static float arr[3];
	
	for(i=0; i<3; i++){
		for(j=0; j<10; j++){
			arr[i] += mataKuliah[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		arr[i] = arr[i]/10;
	}
	
	return arr;
}

int main() 
{ 
	int i,j;
 	float *p;
 	int mataKuliah[3][10] = {
		 {20,100,89,74,75,25,13,86,44,78},
		 {74,23,78,41,56,83,90,67,34,88},
		 {82,35,86,95,43,79,45,78,98,54}
	 };
	
	p = rataNilai(mataKuliah); 
	
	bubbleSort(p); 
	cout<<"Sorted array: \n"; 
	printArray(p); 
	getch();
} 

