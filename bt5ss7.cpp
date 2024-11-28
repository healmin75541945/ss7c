#include<stdio.h>

int main(){
	int n;
	printf("nhap so phan tu cua mang: ");
	int a[n];
	scanf("%d", &n);
	if(n < 0){ 
		return 1; 
	} 
	for(int i = 0 ; i < n ; i++){
		printf("nhap phan tu thu %d: ", i + 1); 
		scanf("%d", &a[i]); 
	} 
	printf("mang vua nhap la: \n"); 
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]); 
	} 
	return 0; 
} 
