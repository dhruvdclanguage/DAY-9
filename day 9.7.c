#include<stdio.h>

int main (){
	
	int a , b , c , d , e ;
	
	printf("Enter a value A : ");
	scanf("%d",&a);
	
	printf("Enter a value B : ");
	scanf("%d",&b);
	
	printf("Enter a value C : ");
	scanf("%d",&c);
	
	printf("Enter a value D : ");
	scanf("%d",&d);
	
	printf("Enter a value E : ");
	scanf("%d",&e);
	
	(a>b)
	?
		
		(a>c)
		?
			
			(a>d)
			?
				
				(a>e)
				?
					printf("A is MAX")
				
				:
					printf("E is MAX")
			
			:
				
				(d<e)
				?
					printf("D is MAX")
				
				:
					printf("E is MAX")
				
		:
			(c>d)
			?
				
				(c>e)
				?
					printf("C is MAX")
				
				:
					printf("E is MAX")
			
			:
				
				(d>e)
				?
					printf("D is MAX")
				:
				
					printf("E is MAX")
				
	
	:
		(b>c)
		?
			
			(b>d)
			?
				
				(b>e)
				?
					printf("B is MAX")
				
				:
					printf("E is MAX")
				
			:
				
				(d>e)
				?
					printf("D is MAX")
				
				:
					printf("E is MAX")
						
		:
			
			(c>d)
			?
				
				(c>e)
				?
					printf("C is MAX")
				
				:
					printf("E is MAX")
				
			:
				
				(d>e)
				?
					printf("D is MAX")
				
				:
					printf("E is MAX");
				
	return 0;
}

