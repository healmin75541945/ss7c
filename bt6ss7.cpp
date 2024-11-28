#include<stdio.h>

int main(){
	int array[]={1,2,3,4,5};
	int length = sizeof(array)/sizeof(int); 
	for(int i =0;i < length;i++){
		if(array[i] % 2== 0){
			array[i] += 3; 
		}else{
			array[i] += 2; 
		} 
		printf("%d ", array[i]);
	}	
	 
	return 0; 
} 
