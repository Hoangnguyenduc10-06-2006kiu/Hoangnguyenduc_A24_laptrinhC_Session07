#include<stdio.h>
int main(){
	int i,n,m; 
	printf("ban muon nhap bao nhieu phan tu: ");
    scanf("%d",&n);
	int listnumber[("%d",n)];
	for(m=0;m<n;m++) {
		printf("phan tu can nhap: ",m); 
		scanf("%d",&listnumber[m]) ;
	}	
	printf("----------cac phan tu trong mang---------\n") ;
	for(i=0;i<sizeof listnumber/sizeof listnumber[0];i++){
		printf("%d",listnumber[i]);	
	}
	return 0; 
}  


