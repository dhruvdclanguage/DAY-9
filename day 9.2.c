#include<stdio.h>

int main (){
	
	int a , b , c ;
	
	printf("Write a number A :");
	scanf("%d",&a);
	
	printf("Write a number B :");
	scanf("%d",&b);
	
	printf("Write a number C :");
	scanf("%d",&c);
	
	if(a<b){
		
		if(a<c){
			
			printf("A is MIN");
		
		}
		
		else{
			
			printf("C is MIN");
			
		}
	}
	else{
		
		if(b<c){
			
			printf("B is MIN");
			
		}
		else{
			
			printf("C is MIN");
				
		}
	}
	
	return 0;
}


