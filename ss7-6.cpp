#include<stdio.h>
int main (){
	int i,chan,le; 
	int listNumber[5]={1,8,2,5,2};
	printf("cac phan tu cua mang ");
	for(i=0;i<sizeof listNumber/sizeof listNumber[0];i++){
		printf("%d",listNumber[i]);
	}
	printf("\ntien hanh thay doi ");
	for(i=0;i<sizeof listNumber/sizeof listNumber[0];i++){
		if (("%d",listNumber[i])%2==0){
			chan=listNumber[i]+2 ;
			printf("%d",chan);
		} else{
			le=listNumber[i]+3 ;
			printf("%d",le);
		} 
}	
	return 0;
}
