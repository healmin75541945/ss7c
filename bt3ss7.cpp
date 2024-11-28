#include<stdio.h>

int main(){
	int le = 0; 
	int a[5];
	for(int i = 0 ; i < 5 ; i++){
		scanf("%d", &a[i]); 
	} 
	for(int i = 0 ; i < 5 ; i++){
		if(a[i] % 2 == 0){
			printf("%d ", a[i]); 
		}else{
			le ++; 
		} 
	} 
	
	if(le == 5 ){
		for(int i = 0 ; i < 5 ; i++){
			printf("%d ", a[i]); 
	}
		
	} 
	
	return 0; 
} 
