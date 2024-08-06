#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("Enter your First number:");
	scanf("%d",&a);
	printf("Enter your Second number:");
	scanf("%d",&b);
	printf("Enter your Third number:");
	scanf("%d",&c);
	
	
	if(a<b)//ab
	{
		if(a<c)//ac
		{
			printf("A is minimum");
		}
		else//ac
		{
			printf("B is minimum");
		}
	}
	else//ab
	{
		if(b<c)//bc
		{
			printf("B is minimum");
		}
		else//bc
		{
			printf("c is minimum");
		}
		
	}
}
