#include<stdio.h>

int main(){
	int max, min; 
	int array[]={6,3,8,4,9,1};
	for(int i = 0; i < sizeof(array)/sizeof(int); i++){
		if(array[i] > max){
			max = array[i]; 
		} 
		if(array[i] < min){
			min = array[i]; 
		} 
	} 
	
	printf("so nho nhat : %d, so lon nhat : %d", min, max); 
	 
	return 0; 
} 
