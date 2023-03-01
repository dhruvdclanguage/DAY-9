#include<stdio.h>

int main (){
	
	int a , b , c ;
	
	printf("Write a number A :");
	scanf("%d",&a);
	
	printf("Write a number B :");
	scanf("%d",&b);
	
	printf("Write a number C :");
	scanf("%d",&c);
	
	(a>b)
		?
		
		(a>c)
		?	
			printf("A is MAX")
				
		:
			printf("C is MAX")
	
		:
		
		(b>c)
		?
			
			printf("B is MAX")
				
		:
			
			printf("C is MAX");
	
	return 0;
}
