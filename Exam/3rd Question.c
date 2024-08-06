#include<stdio.h>
#include<conio.h>

int main()

{
	int i=1,n,sum=0;
	
	printf("Ente your value:");
	scanf("%d",&n);
	
	i=1;
	do
	{
		if(i%2==1)
		{
			sum=sum+i;
			printf("%d ",i);
			
		}
		i++;
			
			
	}while(i<=n);
	printf("Sum=%d",sum);
}
