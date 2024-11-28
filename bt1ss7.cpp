#include<stdio.h>

int main(){
	int arr[] = {1, 3, 5, 6, 9};
	int length = sizeof arr / sizeof(int);
	
	for(int i = 0; i < length; i ++){
		printf("%d ", arr[i]); 
	}
	
	return 0; 
} 

