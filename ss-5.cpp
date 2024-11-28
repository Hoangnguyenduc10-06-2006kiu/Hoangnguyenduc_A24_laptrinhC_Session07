#include<stdio.h>
int main(){
	int num[5]={2,7,8,9,2};
	int max=num[2],i;
	for(i=0;i<sizeof num/sizeof num[0];i++){
		if(num[i]>max) {
		max=num[i] ;
		printf("so lon nhat la: %d",max);
		
	} 
}
   
	return 0; 
} 
