#include "Dynamic_memory.h"
void Dynamic_memory::assign_memory() {
	int* arr = new int[5];
	for (int i = 0; i < 5; i++) {
		cout << "enter the number you want to add" << endl;
		
		cin>>arr[i];
	}
	for (int i = 0; i < 5;i++) {
		cout << arr[i]<<" ";
	}
	delete[] arr;
	
}