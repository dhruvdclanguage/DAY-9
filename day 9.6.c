#include<stdio.h>

int main (){
	
	int a , b , c , d ;
	
	printf("Enter a value A : ");
	scanf("%d",&a);
	
	printf("Enter a value B : ");
	scanf("%d",&b);
	
	printf("Enter a value C : ");
	scanf("%d",&c);
	
	printf("Enter a value D : ");
	scanf("%d",&d);
	
	(a>b)
	?
		
		(a>c)
		?
			
			(a>d)
			?
				printf("A is MAX")
	
			:
				printf("D is MAX")
		:
			
			(c>d)
			?
				printf("C is MAX")
			
			:
				printf("D is MAX")
	:
		
		(b>c)
		?
			
			(b>d)
			?
				printf("B is MAX")
			
			:
				printf("D is MAX")
		:
			(c>d)
			?
				printf("C is MAX")
			
			:
				printf("D is MAX");
	
	return 0 ;
}
