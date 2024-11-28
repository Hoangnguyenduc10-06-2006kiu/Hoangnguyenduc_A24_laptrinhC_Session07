#include<stdio.h>
int main(){
	int num[5]={2,7,7,9,9};
	int i,a;
	a=0 ;
	printf("so chan trong mang la: ") ;
	for(i=0;i<sizeof num/sizeof num[0];i++){
		if(num[i]%2==0) {
			printf("%d ",num[i]);
			a++; 
		} 
		
	} 
	if(a==0){
			printf("mang ko co so chan");
		} 
	return 0; 
} 
