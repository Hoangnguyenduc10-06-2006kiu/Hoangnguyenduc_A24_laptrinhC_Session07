#include<stdio.h>
int main (){
	int listNumber[6]={1,0,2,5,2,15};
	int i; 
	printf("cac phan tu cua mang la:");
	for(i=0;i<sizeof listNumber/sizeof listNumber[0];i++){
		printf("%d",listNumber[i]);
	}
	int m=sizeof listNumber/sizeof listNumber[0] ;
	printf("\n do dai cua mang la: %d",m) ;
	return 0; 
} 
