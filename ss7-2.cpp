#include<stdio.h>
int main(){
	int i; 
	int listnumber[5];
	printf("moi ban nhap 5 so nguyen vao mang\n "); 
	printf("so thu nhat: "); 
	scanf("%d",&listnumber[0]) ;
	printf("\nso thu hai: "); 
	scanf("%d",&listnumber[1]) ;
	printf("\nso thu ba: ") ;
	scanf("%d",&listnumber[2]) ;
	printf("\nso thu tu: ") ;
	scanf("%d",&listnumber[3]) ;
	printf("so thu nam: ") ;
	scanf("%d",&listnumber[4]) ;
	printf("----------cac phan ttu trong mang---------\n") ;
	for(i=0;i<sizeof listnumber/sizeof listnumber[0];i++){
		printf("%d",listnumber[i]);	
	}
	return 0; 
}  
